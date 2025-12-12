#include "pid.h"

volatile uint32_t  	enc_val_cur;
volatile uint32_t 	enc_val_pre;
volatile int16_t		enc_val_diff;
int 	   		     	enc_dir;
float				 	motor_speed;
float				 	motor_output;

PID_Config motor_PID_config = 
{
    .Kp 			= 0.0f,    
    .Ki 			= 0.0f,     
    .Kd 			= 0.0f,     
    .T_sample 	= 0.01f, 
    .limMax 		= 130.0f, 
    .limMin 		= -130.0f, 
    .integrator 	= 0.0f,
    .prevError 	= 0.0f,
    .setpoint 	= 0.0f 
};

void PID_Compute(PID_Config *pid) 
{
    float error = pid->setpoint - pid->measurement;
	
    float proportional = pid->Kp * error;												
    pid->integrator += pid->Ki * error * pid->T_sample; 					
//    if (pid->integrator > pid->limMax) pid->integrator = pid->limMax;			
//    else if (pid->integrator < pid->limMin) pid->integrator = pid->limMin;

    float derivative = pid->Kd * (error - pid->prevError) / pid->T_sample;
	
    pid->out = proportional + pid->integrator + derivative;
	
    if (pid->out > pid->limMax) pid->out 		= pid->limMax;
    else if (pid->out < pid->limMin) pid->out  = pid->limMin;

    pid->prevError = error;
}