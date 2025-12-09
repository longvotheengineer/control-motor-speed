#include "isr.h"

uint8_t flag_uart_rx;
uint8_t flag_uart_plot;

void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart)
{
	if (huart->Instance == UART4)
	{
		memcpy(uart_tx_buffer, uart_rx_buffer, UART_RX_BUFFER_SIZE);
		HAL_UART_Transmit_DMA(&huart4, uart_tx_buffer, UART_RX_BUFFER_SIZE);		
		memset(&uart_tx_buffer, 0, UART_TX_BUFFER_SIZE);
		flag_uart_rx = 1;
	}
}

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim)
{
	if (htim->Instance == TIM2)
	{		
		enc_val_cur	= __HAL_TIM_GET_COUNTER(&htim3);
		enc_dir 	  	= __HAL_TIM_IS_TIM_COUNTING_DOWN(&htim3);
		enc_val_diff	= abs((int16_t)(enc_val_cur - enc_val_pre));
		enc_val_pre	= enc_val_cur;
		motor_speed 	= (((float)enc_val_diff / (ENC_PPR * 4)) * (60 / ENC_TIME_SAMPLING)) / (float)ENC_RATIO; 
		motor_PID_config.measurement = motor_speed;
		PID_Compute(&motor_PID_config);
		motor_control(&motor);		
	}
	else if (htim->Instance == TIM4)
	{
		// memcpy(uart_tx_buffer, UART_TX_CHECK_CONNECTION, sizeof(UART_TX_CHECK_CONNECTION));
		//	HAL_UART_Transmit_DMA(&huart4, uart_tx_buffer, sizeof(UART_TX_CHECK_CONNECTION));		
		//memset(&uart_tx_buffer, 0, UART_TX_BUFFER_SIZE);		
		
		if (uart_connection.rx == false)
		{
			// if (huart4.gState == HAL_UART_STATE_READY) 
			// {
				int len = sprintf((char *)uart_tx_buffer, "%s", UART_RX_FAIL_CONNECTION);
				HAL_UART_Transmit_DMA(&huart4, uart_tx_buffer, len);     
			// }
		}
		else 
		{
			// if (huart4.gState == HAL_UART_STATE_READY) 
		 //   {
		 		int len = sprintf((char *)uart_tx_buffer, "%s\n", UART_TX_CHECK_CONNECTION);
				HAL_UART_Transmit_DMA(&huart4, uart_tx_buffer, len);      
		   // }
		}
		uart_connection.rx = false;				
	}
	else if (htim->Instance == TIM5)
	{
		if (flag_uart_plot == 1)
		{
			//sprintf((char *)uart_tx_buffer, "%s %.1f   ", UART_MOTOR_PLOT, motor_speed);
			//HAL_UART_Transmit_DMA(&huart4, uart_tx_buffer, sizeof(UART_MOTOR_PLOT) + 4);		
			//memset(&uart_tx_buffer, 0, UART_TX_BUFFER_SIZE);
			
		if (huart4.gState == HAL_UART_STATE_READY) 
      {
         int len = sprintf((char *)uart_tx_buffer, "%s %.2f\n", UART_MOTOR_PLOT, motor_speed);                  
         HAL_UART_Transmit_DMA(&huart4, uart_tx_buffer, len);                            
      } 
		}
	}
	
}
