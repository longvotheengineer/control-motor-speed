#include "uart.h"

UARTConnection_t uart_connection;
uint8_t 	uart_timeout_cnt;
uint8_t 	uart_tx_buffer 		[UART_TX_BUFFER_SIZE];
uint8_t 	uart_rx_buffer		[UART_RX_BUFFER_SIZE];
uint8_t 	uart_rx_cmd			[UART_CMD_SIZE];	
uint8_t 	uart_rx_data		[UART_DATA_SIZE];	

void uart_rx_handler(uint8_t *uart_rx_buffer)
{
	flag_uart_rx = 0;
		
	memcpy(uart_rx_cmd, &uart_rx_buffer[0], UART_CMD_SIZE); 
	memcpy(uart_rx_data, &uart_rx_buffer[UART_CMD_SIZE], UART_DATA_SIZE); 	
		
	if (strncmp((char *)uart_rx_cmd, UART_MOTOR_START, UART_CMD_SIZE) == 0)
	{
		motor.enable 	= true;
		flag_uart_plot 	= 1;	
		sscanf((char *)uart_rx_data, "%f %f %f %f", 
		&motor_PID_config.Kp, &motor_PID_config.Ki, &motor_PID_config.Kd, &motor_PID_config.setpoint); 
	}
	else if (strncmp((char *)uart_rx_cmd, UART_MOTOR_STOP, UART_CMD_SIZE) == 0)
	{
		motor.enable 	= false;
		flag_uart_plot 	= 0;	
		motor_PID_config.integrator = 0;
	}
	else if (strncmp((char *)uart_rx_cmd, UART_MOTOR_INVERSE, UART_CMD_SIZE) == 0)
	{
		motor.direction = !motor.direction;
	}
	else if (strncmp((char *)uart_rx_cmd, UART_MOTOR_FREQUENCY, UART_CMD_SIZE) == 0)
	{
		motor.f_PWM = atoi((char *)uart_rx_data);
		frequency_control(&htim1, motor.f_PWM);
	}
	else if (strncmp((char *)uart_rx_cmd,UART_CMD_CHECK_ALIVE, UART_CMD_SIZE) == 0)
	{
		uart_connection.rx 	= true;
		uart_timeout_cnt 	= 0;
	}
	memset(uart_rx_buffer, 0, UART_RX_BUFFER_SIZE);
}
