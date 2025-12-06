#ifndef pid_H
#define pid_H

#include "stm32f4xx_hal.h"

#define ENC_PPR 11
#define ENC_RATIO 45
#define ENC_TIME_SAMPLING 1e-2

typedef struct 
{
	float Kp;
	float Ki;
	float Kd;
	float T_sample;  
	
	float limMax;   
	float limMin;   

	float integrator;
	float prevError;  

	float setpoint;
	float measurement; 
	float out;       
} 	PID_Config;

extern 	PID_Config motor_PID_config;
extern	volatile uint32_t 	enc_val_cur;
extern	volatile uint32_t 	enc_val_pre;
extern	volatile int16_t	 	enc_val_diff;
extern	int 	   		     	enc_dir;
extern	float				 	motor_speed;
extern	float				 	motor_output;

void PID_Compute(PID_Config *pid);

#endif