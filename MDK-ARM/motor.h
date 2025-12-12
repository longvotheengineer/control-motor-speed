#ifndef __MOTOR_H
#define __MOTOR_H

#include "main.h"
#include "stdbool.h"

#define	MOTOR_ON			1
#define	MOTOR_OFF			0
#define	MOTOR_FORWARD	1
#define	MOTOR_INVERSE		0


typedef struct 
{
	bool 		enable;
	bool		direction;
	uint8_t	duty_cycle;		
	uint8_t	speed;			
	uint32_t	f_PWM;			
}	MotorControl_t;

extern MotorControl_t motor;

bool motor_control(MotorControl_t *motor);

#endif