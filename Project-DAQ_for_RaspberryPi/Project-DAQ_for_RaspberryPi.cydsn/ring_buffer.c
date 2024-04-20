/* ========================================
 *
 * Copyright: Gemma Qin, Metropolia UAS, Finland, 2024
 * 
 * PSoC Design Course 2024: Project 
 *
 * Circular Buffer 
 * 
 * ========================================
*/

#include "ring_buffer.h"

/*******************************************************************************
* Function Name: circBuffInit 
********************************************************************************
*
* Summary:
*   Initialises buffer instance.
*
* Parameters:  
*   cb: input       pointer to the buffer instance
*
* Return:
*   None
*
*******************************************************************************/
void circBuffInit(CircularBuffer *const cb) {
    cb->count = 0;
    cb->head = 0;
    cb->tail = 0;
}

/*******************************************************************************
* Function Name: isCircBuffEmpty        
********************************************************************************
*
* Summary:
*  Checks if buffer instance is empty.
*
* Parameters:  
*   cb: input       pointer to the buffer instance
*
* Return:
*   true (empty) / false (not empty) 
*
*******************************************************************************/
uint8_t isCircBuffEmpty(const CircularBuffer *const cb) {
    return (cb->count == 0) ? 1 : 0;
}

/*******************************************************************************
* Function Name: isCircBuffFull       
********************************************************************************
*
* Summary:
*   Checks if buffer instance is full.
*
* Parameters:  
*   cb: input       pointer to the buffer instance
*
* Return:
*   true (full) / false (not full)
*
*******************************************************************************/
uint8_t isCircBuffFull(const CircularBuffer *const cb) {
    return (cb->count >= MAX_BUFFER_SIZE) ? 1 : 0;
}

/*******************************************************************************
* Function Name: circBuffPrint      
********************************************************************************
*
* Summary:
*   Prints the values of buffer instance.
*
* Parameters:  
*   cb: input       pointer to the buffer instance
*
* Return:
*   None
*
*******************************************************************************/
void circBuffPrint(const CircularBuffer *const cb) {
    if (isCircBuffEmpty(cb)) {
        printf("Empty circular buffer.\n");
        return;
    }

    uint16_t current = cb->head;
    printf("Printing circular buffer: ");
    for (uint16_t index = 0; index < cb->count; index++) {
        printf("%d ", cb->buffer[current]);
        current++;
        // Wrap around if necessary
        if (current >= MAX_BUFFER_SIZE) {
            current = 0;
        }
    }
    printf("\n");
}

/*******************************************************************************
* Function Name: enqueueCircBuff
********************************************************************************
*
* Summary:
*   Queues new element to buffer instance. If buffer instance is full, removes
*   oldest element.
*
* Parameters:  
*   cb:     input       pointer to the buffer instance
*   value:  input       new value to be queued
*
* Return:
*   None
*
*******************************************************************************/
void enqueueCircBuff(CircularBuffer *const cb, const uint16_t value) {
    if (isCircBuffFull(cb)) {
        // Delete head value (move head by one)
        cb->head++;
        cb->count--;

        // Wrap around if head reached end of buffer
        if (cb->head >= MAX_BUFFER_SIZE) {
            cb->head = 0;
        }
    }
    cb->buffer[cb->tail] = value;
    cb->tail++;
    cb->count++;

    // Wrap around if tail reached end of buffer
    if (cb->tail >= MAX_BUFFER_SIZE) {
        cb->tail = 0;
    }
}

/*******************************************************************************
* Function Name: dequeueCircBuff
********************************************************************************
*
* Summary:
*   Dequeues oldest element from buffer instance. If buffer instance is empty,
*   returns false.
*
* Parameters:  
*   cb:        input       pointer to the buffer instance
*   retval:    ouput       pointer to the oldest element
*
* Return:
*   true (read success) / false (read fail)
*
*******************************************************************************/
uint8_t dequeueCircBuff(CircularBuffer *const cb, uint16_t *const retval) {
    if (isCircBuffEmpty(cb)) {
        return 0;
    }

    *retval = cb->buffer[cb->head];
    cb->head++;
    cb->count--;

    // Wrap around if head reached end of buffer
    if (cb->head >= MAX_BUFFER_SIZE) {
        cb->head = 0;
    }

    return 1;
}

/* [] END OF FILE */
