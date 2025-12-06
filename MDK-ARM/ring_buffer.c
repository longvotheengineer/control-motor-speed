#include "ring_buffer.h"

void RingBuffer_Init(RingBuffer_t *rb)
{
    rb->head = 0;
    rb->tail = 0;
}

bool RingBuffer_Write(RingBuffer_t *rb, uint8_t data)
{
    uint16_t next = (rb->head + 1) % RING_BUFFER_SIZE;

    if (next == rb->tail)
        return false;  // buffer full

    rb->buffer[rb->head] = data;
    rb->head = next;
    return true;
}

bool RingBuffer_Available(RingBuffer_t *rb)
{
    return rb->head != rb->tail;
}

uint8_t RingBuffer_Read(RingBuffer_t *rb)
{
    uint8_t data = rb->buffer[rb->tail];
    rb->tail = (rb->tail + 1) % RING_BUFFER_SIZE;
    return data;
}