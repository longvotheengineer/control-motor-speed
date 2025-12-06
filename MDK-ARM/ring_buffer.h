#ifndef __RING_BUFFER_H
#define __RING_BUFFER_H

#include <stdint.h>
#include <stdbool.h>

#define RING_BUFFER_SIZE 128

typedef struct 
{
    uint8_t buffer[RING_BUFFER_SIZE];
    volatile uint16_t head;
    volatile uint16_t tail;
} RingBuffer_t;

void 		RingBuffer_Init(RingBuffer_t *rb);
bool 		RingBuffer_Write(RingBuffer_t *rb, uint8_t data);
bool 		RingBuffer_Available(RingBuffer_t *rb);
uint8_t 	RingBuffer_Read(RingBuffer_t *rb);

#endif