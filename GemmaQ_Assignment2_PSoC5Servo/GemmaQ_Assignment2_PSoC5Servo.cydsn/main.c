/* ================================================================
 *
 * Copyright: Gemma Qin,  Metropolia UAS, Finland, 2024
 *
 * PSoC Design Course 2024: Exercise 2, Timers and Interrupts
 *
 * Turn servo to different speed when button is pressed.
 *
 * CC-NA-SA 4.0 
 *
 * ================================================================
*/

#include <stdio.h>
#include "project.h"

/* Project Defines */
#define NUM_SPEEDS 4
#define MIN_SPEED 1000
#define MAX_SPEED 2400
#define SPEED_STEP 10

/* Global variables */
uint8_t current_speed_index = 0;
uint16_t speeds[NUM_SPEEDS] = {1000, 1475, 1525, 2200};

/* Interrupt service routine declarations */
CY_ISR_PROTO(MyButtonISR);
CY_ISR_PROTO(MyPWMISR);

/*******************************************************************************
* Function Name: main
********************************************************************************
*
* Summary:
*  
*
* Parameters:
*  None.
*
* Return:
*  None.
*
* Remarks: 
*  - Specification: 
*       - UART: 12[6] RX, 12[7] TX, 9600 bps
*       - BlueLED: 2[1]
*       - PWM: 2[0] PWMOut, PWM_Clock 1 MHz, 16-bit UDB, interrupt: PWM_Isr
*       - Button: 2[2], interrupt: BTN_Isr
*
*******************************************************************************/
int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    
    UART_Start();
    PWM_Start();
    
    BTN_Isr_StartEx(MyButtonISR);
    PWM_Isr_StartEx(MyPWMISR);

    PWM_WriteCompare(MIN_SPEED);

    for(;;)  /* Forever loop */
    {
        // :)
    }
}

CY_ISR(MyButtonISR) {
    // Increment speed index
    if (++current_speed_index >= NUM_SPEEDS) {
        // If speeds's last index, reset index to 0
        current_speed_index = 0;
    }
    Button_ClearInterrupt();
}

CY_ISR(MyPWMISR) {
   // Smoothly increase speed towards the desired value
    static uint16_t current_speed = MIN_SPEED;
    if (PWM_ReadStatusRegister() & PWM_STATUS_TC) {
        if (current_speed < speeds[current_speed_index]) {
            current_speed += SPEED_STEP;
            if (current_speed > speeds[current_speed_index]) {
                current_speed = speeds[current_speed_index];
            }
            PWM_WriteCompare(current_speed);
        } else if (current_speed > speeds[current_speed_index]) {
            current_speed -= SPEED_STEP;
            if (current_speed < speeds[current_speed_index]) {
                current_speed = speeds[current_speed_index];
            }
            PWM_WriteCompare(current_speed);
        }
    }
}
/* [] END OF FILE */
