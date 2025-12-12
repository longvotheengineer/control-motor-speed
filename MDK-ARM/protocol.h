#ifndef __PROTOCOL_H
#define __PROTOCOL_H

#define UART_CMD_SIZE						 5
#define UART_DATA_SIZE					 25
#define UART_CMD_CHECK_ALIVE   	     "C_ALV"
#define UART_CMD_ACK_ALIVE             "S_ACK"
#define UART_CMD_ERR_LOST          	 "E_LST"
#define UART_MOTOR_START				 "M_STR"
#define UART_MOTOR_STOP				 "M_STP"
#define UART_MOTOR_INVERSE			 "M_INV"
//#define UART_MOTOR_SPEED				 "M_SPD"
//#define UART_MOTOR_PID					 "M_PID"
#define UART_MOTOR_FREQUENCY		 "M_FRE"
#define UART_MOTOR_PLOT				 "M_PLT"

#endif	
