#ifndef 	__UART_H
#define 	__UART_H

#include <stm32f4xx_hal.h>
#include <main.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#define UART_TX_BUFFER_SIZE		50
#define UART_RX_BUFFER_SIZE		30

typedef struct
{
  bool tx;
  bool rx;
} UARTConnection_t;  

extern UARTConnection_t uart_connection;
extern uint8_t uart_tx_buffer 	[UART_TX_BUFFER_SIZE];
extern uint8_t uart_rx_buffer	[UART_RX_BUFFER_SIZE];

void uart_rx_handler(uint8_t *uart_rx_buffer);

#endif
