/* ================================================================
 *
 * Copyright: Gemma Qin,  Metropolia UAS, Finland, 2024
 *
 * PSoC Design Course 2024: Exercise 5, OneWire
 *
 * Connect DS18B20 temperature sensor to PSoC using OneWire, 
 * and transfer the data to computer via UART. 
 *
 * ================================================================
*/

#include <project.h>
#include "stdio.h"

/* Project Defines */
#define TRANSMIT_BUFFER_SIZE 64
#define CRC_POLYNOMIAL 0x8C         // Equivalent to X^8 + X^5 + X^4 + 1
#define OW_RESPONSE 0
#define RETBYTE_BUFFER_SIZE 9
// From DS18B20 datasheet page 25-26:
#define tLOW1 3
#define rLOW0 70
#define tSLOT 80
#define tCONV 94
#define tRSTL 1000
#define tPDLOW 70
#define tRDV 3

/* Global variables */
// Flags:
volatile uint8 UART_flag = 0;  
volatile uint8 OneWire_flag = 0;

// OneWire related variables:
uint8 counter = 0;
uint8 retByte_buffer[RETBYTE_BUFFER_SIZE];

// Running average related variables:
uint32 Vout_sum = 0;
uint32 n = 0;
uint32 Vout_sum_isr = 0;
uint32 n_isr = 0;

// Data to be transmitted:
float32 LM35_temp = 0;
float32 Vout_average;
float32 DS18B20_temp = 0;

/* Function declarations */
uint8 calculateCRC(uint8 *data, uint8 len);
void OWWriteBit(int bit);
void OWWriteByte(int bit);
uint8 OWReset();
uint8 OWCheckBit();
uint8 OWReadBit();
uint8 OWReadByte(void);
void DS18B20_tempCalc();
void LM35_tempCalc();

/* Interrupt service routine declarations */
CY_ISR_PROTO(MyADCIsr);
CY_ISR_PROTO(MyClockIsr);

/*******************************************************************************
* Function Name: main
********************************************************************************
*
* Summary:
*  Initialises components and interrupts.
*  Reads data from DS18B20 temperature sensors using OneWire.
*  Reads data from LM35 temperature sensors.
*  Transmits read data via UART.
*
* Parameters:
*  None.
*
* Return:
*  None.
*
* Remarks: 
*  - Specification: 
*       - UART: 12[6] RX, 12[7] TX, 115200 bps
*       - ADC_Timer: 24-bit (UDB), BUS_CLK: 24 MHz, interrupt: Clock_Isr
*       - ADC_DelSig: 0[0] Vin, 12-bit interrupt: ADC_Isr
*       - OneWire_Timer: 16-bit (Fixed), BUS_CLK: 24 MHz, interrupt: OW_Isr
*       - OneWire: 2[6], Digital input and ouput without hardware, Resistive pull-up - High(1)
*  - Design works without external pull up resistor, internal pull up resistor 
*    of 5 kOhm resolves same matter.
*
*******************************************************************************/
int main()
{  
    /* Local variables */
    // UART related:
    char transmit_buffer[TRANSMIT_BUFFER_SIZE];
    // OneWire related:
    uint8 status;
    uint8 CRC_valid;

    /* Start the components and interrupts */
    UART_Start();
    ADC_DelSig_Start();
    ADC_Timer_Start();

    ADC_Isr_StartEx(MyADCIsr);
    Clock_Isr_StartEx(MyClockIsr);

    /* Send message to verify COM port is connected properly */
    UART_PutString("COM Port Open\r\n");
    
    /* Start the ADC conversion */
    ADC_DelSig_StartConvert();

    /* Memory function for DS18B2 (Table 6) */ 
    status = OWReset();
    if (status == OW_RESPONSE) {                                            // Presence pulse. 0: there was a pulse == line was pulled down 
        OWWriteByte(0xCC);                                                  // Skip ROM command.
        OWWriteByte(0x4E);                                                  // Write Scratchpad command.
        /* Write three bytes to scratchpad (TH, TL, and config). */ 
        OWWriteByte(0);                                                     // TH
        OWWriteByte(0);                                                     // TL
        OWWriteByte(0x1F);                                                  // Config
        
        status = OWReset();
        if (status == OW_RESPONSE) {
            CRC_valid = 0;
            OWWriteByte(0xCC);
            while (!CRC_valid) {
                /* Read data */ 
                OWWriteByte(0xBE);                                          // Read Scratchpad command.
                for (int i = 0; i < RETBYTE_BUFFER_SIZE; i++) {             // Read entire scratchpad plus CRC.
                    retByte_buffer[i] = OWReadByte();
                }
                /* CRC check */
                uint8 receivedCRC = retByte_buffer[8];
                uint8 calculatedCRC = calculateCRC(retByte_buffer, 8);      // Calculate CRC for the first 8 bytes
                if (receivedCRC == calculatedCRC) {
                    CRC_valid = 1;
                }
            }
                
            DS18B20_tempCalc(); // Convert and read temperature
        }
    }

    CyGlobalIntEnable; /* Enable global interrupts. */

    for(;;)
    {
        /* Read temperature data from DS18B20 */
        if (OneWire_flag) {
            CyGlobalIntDisable;
            OneWire_SetDriveMode(OneWire_DM_RES_UP);
            
            status = OWReset();
            if (status == OW_RESPONSE) {
                CRC_valid = 0;
                OWWriteByte(0xCC);
                while (!CRC_valid) {
                    /* Read data */
                    OWWriteByte(0xBE);
                    for (int i = 0; i < RETBYTE_BUFFER_SIZE; i++) {
                        retByte_buffer[i] = OWReadByte();
                    }
                    /* CRC check */
                    uint8 receivedCRC = retByte_buffer[8];
                    uint8 calculatedCRC = calculateCRC(retByte_buffer, 8); // Calculate CRC for the first 8 bytes
                    if (receivedCRC == calculatedCRC) {
                        CRC_valid = 1;
                        /* Extract temperature data and convert */
                        int16 tresult = (int16)retByte_buffer[1] << 8 | retByte_buffer[0];
                        DS18B20_temp = (float32)tresult / 16;
                    }
                }
                
                DS18B20_tempCalc(); // Convert and read temperature
            }
            CyGlobalIntEnable;
            OneWire_flag = 0;
        }

        /* Calculate LM35 temperature and sends data to UART */
        if (UART_flag) {

            /* Calculate Vout running average */
            LM35_tempCalc();
            
            /* Format data */ 
            sprintf(transmit_buffer, 
                    "{ \"ADC\": %d , \"LM35\": %.1f , \"DS18B20\": %.1f }\r\n", 
                    (int)Vout_average, LM35_temp, DS18B20_temp);
          
            /* Send data to UART */
            UART_PutString(transmit_buffer);
            
            UART_flag = 0;  
        }
    }
}

/*******************************************************************************
* Function Name: calculateCRC
********************************************************************************
*
* Summary:
*  Calculates CRC value of received data.
*
* Parameters:
*  uint8 *data: pointer to data
*  uint8 len: length of data
*
* Return:
*  uint8: returns CRC value
*
*******************************************************************************/
uint8 calculateCRC(uint8 *data, uint8 len) {
    uint8 crc = 0;
    for (int i = 0; i < len; i++) {
        crc ^= data[i];
        for (int j = 0; j < 8; j++) {
            if (crc & 0x01) {
                crc = (crc >> 1) ^ CRC_POLYNOMIAL;
            } else {
                crc >>= 1;
            }
        }
    }
    return crc;
}

/*******************************************************************************
* Function Name: OWWriteBit
********************************************************************************
*
* Summary:
*  Function to send 1 or 0 bit. 
*
* Parameters:
*  int bit: 0 or 1
*
* Return:
*  None.
*
*******************************************************************************/
void OWWriteBit(int bit) {   // Write 1 or 0
    OneWire_Write(0);
    if (bit) {
        // Write '1' bit
        CyDelayUs(tLOW1);
        OneWire_Write(1);
        CyDelayUs(tSLOT - tLOW1);
    } else {
        // Write '0' bit
        CyDelayUs(rLOW0);
        OneWire_Write(1);
        CyDelayUs(tSLOT - rLOW0);
    }
}

/*******************************************************************************
* Function Name: OWWriteByte
********************************************************************************
*
* Summary:
*  Sends one byte by calling OWWriteBit().
*
* Parameters:
*  int data: data to be sent.
*
* Return:
*  None.
*
*******************************************************************************/
void OWWriteByte(int data) {
    /* Loop to write each bit in the byte, LS-bit first. */
    for (int loop = 0; loop < 8; loop++)
    {
        OWWriteBit(data & 0x01);
        /* Shift the data byte for the next bit. */
        data >>= 1;
    }
}

/*******************************************************************************
* Function Name: OWReset
********************************************************************************
*
* Summary:
*  Resets line. 
*
* Parameters:
*  None.
*
* Return:
*  None.
*
*******************************************************************************/
uint8 OWReset() {
    uint8 retval;
    
    OneWire_Write(1);
    CyDelayUs(100);             // Make sure it idled for a while.
    OneWire_Write(0);   
    CyDelayUs(tRSTL);           // tRSTL: 1000
    OneWire_Write(1);
    CyDelayUs(tPDLOW);          // tPDLOW: 70
    retval = OWCheckBit();
    CyDelayUs(500 - tPDLOW);    // Make sure we are out of tPDLOW: 500 - tPDLOW

    return retval;
}
/*******************************************************************************
* Function Name: OWCheckBit
********************************************************************************
*
* Summary:
*  Checks bit by calling OneWire_Read().
*
* Parameters:
*  None.
*
* Return:
*  None.
*
*******************************************************************************/
uint8 OWCheckBit() {
    return OneWire_Read();
}

/*******************************************************************************
* Function Name: OWReadBit
********************************************************************************
*
* Summary:
*  Reads one bit. 
*
* Parameters:
*  None.
*
* Return:
*  uint8: return value of OneWire_Read().
*
*******************************************************************************/
uint8 OWReadBit() {
    uint8 retval;

    OneWire_Write(0);
    CyDelayUs(tRDV);                    // tRDV: 3
    OneWire_Write(1);
    CyDelayUs(12);                      // Extra time: 12
    retval = OWCheckBit();
    CyDelayUs(tSLOT - tRDV - 12);       // Remainder of tSLOT: 80 - 3 - 12

    return retval;
}

/*******************************************************************************
* Function Name: OWReadByte
********************************************************************************
*
* Summary:
*  Reads a byte by calling OWReadBit() 8 times.
*
* Parameters:
*  None.
*
* Return:
*  int: returns the read byte.
*
*******************************************************************************/
uint8 OWReadByte() {
    int result = 0;

    for (int loop = 0; loop < 8; loop++)
    {
        /* Shift the result to get it ready for the next bit. */
        result >>= 1;

        /* If result is one, then set MS bit. */
        if (OWReadBit()) {
            result |= 0x80;
        }    
    }
    return result;
}

/*******************************************************************************
* Function Name: LM35_tempCalc
********************************************************************************
*
* Summary:
*  Bus Master initiates temperature conversion, then reads temperature (parasite power assumed).
*
* Parameters:
*  None.
*
* Return:
*  None.
*
*******************************************************************************/
void DS18B20_tempCalc() {
    uint8 status = OWReset();
    if (status == OW_RESPONSE) {
        OWWriteByte(0xCC);
        uint8 senddata = 0x44;                                  // Issue “ Convert T” command.
        /* Send first 7 bits */
        for (int loop = 0; loop < 7; loop++) {
            uint8 bit = senddata & 0x01;
            OneWire_Write(0);
            if (bit) {
                CyDelayUs(tLOW1);                               // tLOW1: 3
                OneWire_Write(1);
                CyDelayUs(tSLOT - tLOW1);                       // Remainder of tSLOT: 80 - 3
            } else {
                CyDelayUs(rLOW0);                               // rLOW0: 70
                OneWire_Write(1);
                CyDelayUs(tSLOT - rLOW0);                       // Remainder of tSLOT: 80 - 70
            }
            senddata >>= 1;
        }
        /* Send last bit */
        OneWire_Write(0);
        if (senddata & 0x01) {
            CyDelayUs(tLOW1);       
        } else {
            CyDelayUs(rLOW0);      
        }
         OneWire_Write(1);

        OneWire_SetDriveMode(OneWire_DM_STRONG);
        CyDelay(tCONV);                                         // tCONV: 94
        OneWire_SetDriveMode(OneWire_DM_RES_UP);
    }
    return;
}

/*******************************************************************************
* Function Name: LM35_tempCalc
********************************************************************************
*
* Summary:
*  Calculates the average of Vout and the temperature. 
*
* Parameters:
*  None.
*
* Return:
*  None.
*
*******************************************************************************/
void LM35_tempCalc() {
    Vout_average = Vout_sum_isr / n_isr; 
    /* Converts to temperature: Vout = 10 mV/C * T from LM35 datasheet */
    LM35_temp = Vout_average / 10;             
    return;
}

/*******************************************************************************
* Function Name: MyADCIsr         ADC Interrupt Service Routine
********************************************************************************
*
* Summary:
*  Reads Vout data from sensor, adds to running average aand increment sampling
*  counter by one.
*
* Parameters:  
*   None.
*
* Return:
*   None
*
*******************************************************************************/
CY_ISR(MyADCIsr) {
    uint32 output = ADC_DelSig_CountsTo_mVolts(ADC_DelSig_GetResult16());
    Vout_sum += output;
    n++;
}

/*******************************************************************************
* Function Name: MyClockIsr         Timer Interrupt Service Routine
********************************************************************************
*
* Summary:
*  Reads the control register and returns it's value.
*  Copies and resets respective parameters while ADC interrupt is disabled.
*  Every second time when function is called, samples DS18B20 sensor.
*  Sets flags.
*
* Parameters:  
*   None.
*
* Return:
*   None
*
*******************************************************************************/
CY_ISR(MyClockIsr) {                      // LM35 sampled every half minute.
    ADC_Timer_ReadStatusRegister();       // Clears the pending interrupt.
    
    /* Disables ADC_Isr temporarily for copying and resetting. */
    ADC_Isr_Disable();               
    Vout_sum_isr = Vout_sum;       
    n_isr = n;
    Vout_sum = 0;
    n = 0;
    ADC_Isr_Enable();
  
    if(counter++ % 2) {                   // DS18B20 sampled once a minute.
        OneWire_flag = 1;
    }
    
    UART_flag = 1; 
}

/* [] END OF FILE */