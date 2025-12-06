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
	uint8_t	duty_cycle;		// [0; 100] percent
	uint8_t	speed;			// [0; 130] RPM
	uint32_t	f_PWM;			// [0; 100] kHz
}	MotorControl_t;

extern MotorControl_t motor;

bool motor_control(MotorControl_t *motor);

#endif