/*
 * File: SERVO_cfg.c
 * Driver Name: [[ SERVO Motor ]]
 * SW Layer:   ECUAL
 * Created on: Jun 28, 2020
 * Author:     Khaled Magdy
 * -------------------------------------------
 * For More Information, Tutorials, etc.
 * Visit Website: www.DeepBlueMbedded.com
 *
 */

#include "SERVO.h"

const SERVO_CfgType SERVO_CfgParam[SERVO_NUM] =
{
	// Servo Motor 1 Configurations
    {
		&htim1,
		&TIM1->CCR1,
		TIM_CHANNEL_1,
		0.5,
		2.5
	},

    // Servo Motor 2 Configurations
    {
        &htim1,
        &TIM1->CCR2,
        TIM_CHANNEL_2,
        0.5,
        2.5
    },

    // Servo Motor 3 Configurations
    {
        &htim1,
        &TIM1->CCR3,
        TIM_CHANNEL_3,
        0.5,
        2.5
    },

    // Servo Motor 4 Configurations
    {
        &htim2,
        &TIM2->CCR1,
        TIM_CHANNEL_1,
        0.5,
        2.5
    },

    // Servo Motor 5 Configurations
    {
        &htim2,
        &TIM2->CCR2,
        TIM_CHANNEL_2,
        0.5,
        2.5
    }

};
