/* ================================================================
 *
 * Copyright: Gemma Qin,  Metropolia UAS, Finland, 2024
 *
 * PSoC Design Course 2024: Exercise 2, Timers and Interrupts
 *
 * Exercise description: 
 *   - (When program initialized motor changed from turning to stop.)
 *   - Servo motor starts turning when button is pressed. Speed increases 
 *     gradually to final speed. Maintain rotation until new button press.
 *   - If button is pressed when motor is turning, motor decreases speed 
 *     gradually until it stops and waits for new button press to start. 
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
#define SPEED_STEP 5

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
*  Initializes PWM and interrupts.
*
* Parameters:
*  None.
*
* Return:
*  None.
*
* Remarks: 
*  - Specification: 
*       - PWM: 2[0] PWMOut, PWM_Clock 1 MHz, 16-bit UDB, interrupt: PWM_Isr
*       - Button: 2[2], interrupt: BTN_Isr
*
*******************************************************************************/
int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    
    PWM_Start();
    
    BTN_Isr_StartEx(MyButtonISR);
    PWM_Isr_StartEx(MyPWMISR);

    for(;;)  /* Forever loop */
    {
        // :)
    }
}

/*******************************************************************************
* Function Name: MyButtonISR
********************************************************************************
*
* Summary:
*  Increment speeds' index. Resets index, if max index reached.
*  Clears interrupt.
*
* Parameters:
*  None.
*
* Return:
*  None.
*
*******************************************************************************/
CY_ISR(MyButtonISR) {
    /* Increment and check speed index */
    if (++current_speed_index >= NUM_SPEEDS) {
        current_speed_index = 0;    
    }
    Button_ClearInterrupt();        // Clears the pending interrupt.
}

/*******************************************************************************
* Function Name: MyPWMISR
********************************************************************************
*
* Summary:
*  Smoothly increase / decrease speed towards the desired value of servo motor.
*
* Parameters:
*  None.
*
* Return:
*  None.
*
*******************************************************************************/
CY_ISR(MyPWMISR) {
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
