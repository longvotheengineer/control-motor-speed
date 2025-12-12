	#include "isr.h"

	uint8_t flag_uart_rx;
	uint8_t flag_uart_plot;

	void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart)
	{
		if (huart->Instance == USART2)
		{
			flag_uart_rx = 1;
		}		
	}

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim)
{
    if (htim->Instance == TIM2)
    {       
        enc_val_cur 								= __HAL_TIM_GET_COUNTER(&htim3);
        enc_dir     									= __HAL_TIM_IS_TIM_COUNTING_DOWN(&htim3);
        enc_val_diff 								= abs((int16_t)(enc_val_cur - enc_val_pre));
        enc_val_pre 								= enc_val_cur;
        motor_speed								= (((float)enc_val_diff / (ENC_PPR * 4)) * (60 / ENC_TIME_SAMPLING)) / (float)ENC_RATIO; 
        motor_PID_config.measurement 	= motor_speed;
        PID_Compute(&motor_PID_config);
        motor_control(&motor);      
    }
	else if (htim->Instance == TIM4) 
    {
        uart_timeout_cnt++; 

        if (huart2.gState == HAL_UART_STATE_READY) 
        {
            if (uart_timeout_cnt < 3) 
            {
				int len = sprintf((char *)uart_tx_buffer, "%s\n", UART_CMD_ACK_ALIVE);
                HAL_UART_Transmit_DMA(&huart2, uart_tx_buffer, len);      
            }
            else 
            {
                int len = sprintf((char *)uart_tx_buffer, "%s %s\n", UART_CMD_ERR_LOST, UART_CMD_ACK_ALIVE);
                HAL_UART_Transmit_DMA(&huart2, uart_tx_buffer, len);                
                
                motor.enable = false; 
                motor_output = 0;
                flag_uart_plot = 0;   
                motor_PID_config.out = 0;
                motor_PID_config.integrator = 0;
            }
        }
    }
    else if (htim->Instance == TIM5)
    {
        if (flag_uart_plot == 1)
        {
             if (huart2.gState == HAL_UART_STATE_READY) 
             {
                 int len = sprintf((char *)uart_tx_buffer, "%s %.2f\n", UART_MOTOR_PLOT, motor_speed);                  
                 HAL_UART_Transmit_DMA(&huart2, uart_tx_buffer, len);                            
             } 
        }
    }
}
