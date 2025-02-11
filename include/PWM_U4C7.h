#ifndef PWM_U4C7_H
#define PWM_U4C7_H

#include <stdio.h>
#include "hardware/pwm.h"
#include "pico/stdlib.h"
#define PWM_WRAP 20000   // Período de 20ms
#define PWM_CLKDIV 125.0f // Divisor de clock para 50Hz

void InitPWM(uint, uint*);
void ConfigPWM(uint);
void SetServoPulseWidth(uint, uint16_t, uint16_t);
void MoveServoPeriodically(uint, uint16_t, uint16_t, uint16_t, uint16_t);

#endif