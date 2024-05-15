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

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define MAX_BUFFER_SIZE 64

typedef struct {
    uint16_t buffer[MAX_BUFFER_SIZE];
    uint16_t head;
    uint16_t tail;
    uint16_t count;
} CircularBuffer;

void circBuffInit(CircularBuffer *const cb);
uint8_t isCircBuffEmpty(const CircularBuffer *const cb);
uint8_t isCircBuffFull(const CircularBuffer *const cb);
void circBuffPrint(const CircularBuffer *const cb);
void enqueueCircBuff(CircularBuffer *const cb, const uint16_t value);
uint8_t dequeueCircBuff(CircularBuffer *const cb, uint16_t *const retval);

/* [] END OF FILE */
