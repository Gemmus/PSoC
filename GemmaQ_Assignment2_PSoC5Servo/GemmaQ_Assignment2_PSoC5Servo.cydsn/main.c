/* ================================================================
 *
 * Copyright: Gemma Qin,  Metropolia UAS, Finland, 2024
 *
 * PSoC Design Course 2024: Exercise 2, Timers and Interrupts
 *
 * Turn servo to different angle when button is pressed.
 *
 * CC-NA-SA 4.0 
 *
 * ================================================================
*/

#include <stdio.h>
#include "project.h"
#define CMP_INIT 1000
#define CMP_END 2000

CY_ISR_PROTO(MyButtonISR);
CY_ISR_PROTO(MyPWMISR);

uint16 PWM_value = 1500; 
uint8 button_flaG = 0;

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    
    UART_Start();
    PWM_Start();
    
    BTN_Isr_StartEx(MyButtonISR);
    //PWM_Isr_StartEx(MyPWMISR);
//    uint16 cmp_val = CMP_INIT;

    PWM_WriteCompare(1495);
    CyDelay(6000);
    PWM_WriteCompare(1420);
    CyDelay(6000);
    PWM_WriteCompare(1365);

    for(;;)  /* Forever loop */
    {
  #if 0      
        if (cmp_val == CMP_INIT) {
            cmp_val= CMP_END;
        } else {
            cmp_val = CMP_INIT;
        }
        PWM_WriteCompare(cmp_val); 
        CyDelay(10000);
        
          #endif
            

        BlueLED_Write(0);
        //empty, everything is done on ISR routines
        if (button_flaG) {
            UART_PutString("Interrupt event!\r\n");
            BlueLED_Write(1);
            CyDelay(5000);
            button_flaG = 0;
        }
    
    }
}

CY_ISR(MyButtonISR) {
    button_flaG = 1;
    Button_ClearInterrupt();
}

/*
void nextpwm() {
    uint16 PWM_tab[5] = {500, 1000, 1500, 2000, 2400};
    static uint8 count = 0;
    
    PWM_value = PWM_tab[count++];
    
    if (count >= 5) {
        count = 0;
    }
    
    return;
}

// ISR subroutine for button:
CY_ISR(MyButtonISR) {
    nextpwm();
    Button_ClearInterrupt();
}

// ISR subroutine for PWM:
CY_ISR(MyPWMISR) {
    static uint16 cval = 1500;
    static uint16 PWM_step = 10;
    
    if (cval < PWM_value) {
        cval += PWM_step;
        PWM_WriteCompare(cval);
    }
}
*/
/* [] END OF FILE */
