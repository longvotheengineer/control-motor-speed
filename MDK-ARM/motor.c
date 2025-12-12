#include "motor.h"

MotorControl_t motor;

bool motor_control(MotorControl_t *motor)
{
	switch ((int)motor->enable)
	{
		case MOTOR_ON:
			motor_output	= motor_PID_config.out * 500 / motor_PID_config.limMax;
			
			if (motor->direction == MOTOR_FORWARD)
			{
				HAL_GPIO_WritePin(GPIOD, GPIO_PIN_0, GPIO_PIN_SET);  
				HAL_GPIO_WritePin(GPIOD, GPIO_PIN_1, GPIO_PIN_RESET); 
				 __HAL_TIM_SET_COMPARE(&htim1, TIM_CHANNEL_1, (uint32_t)motor_output);
			}
			else if (motor->direction == MOTOR_INVERSE)
			{
				HAL_GPIO_WritePin(GPIOD, GPIO_PIN_0, GPIO_PIN_RESET);  
				HAL_GPIO_WritePin(GPIOD, GPIO_PIN_1, GPIO_PIN_SET); 
				__HAL_TIM_SET_COMPARE(&htim1, TIM_CHANNEL_1, (uint32_t)motor_output);
			}			
			break;
		case MOTOR_OFF:
			HAL_GPIO_WritePin(GPIOD, GPIO_PIN_0, GPIO_PIN_RESET);  
            HAL_GPIO_WritePin(GPIOD, GPIO_PIN_1, GPIO_PIN_RESET); 
			break;
		default:
			break;
	}
}