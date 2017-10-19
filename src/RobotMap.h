/*
 * RobotMap.h
 *
 *  Created on: Sep 14, 2017
 *      Author: jakey
 */

#ifndef ROBOTMAP_H
#define ROBOTMAP_H

//Drivetrain
	const int PWM_LEFT 		= 1;
	const int PWM_RIGHT 	= 2;


//Gatling
	const int PWM_GATLING = 3;
//Turret Horizontal
	const int PWM_PAN_1 = 4;
//Tilt Vertical
	const int PWM_PAN_2 = 5;



//Motor Ramp Rate
	const double MOTOR_RAMP_RATE = 24.0;

//Solenoids
	const int SOL_SHIFT_HIGH		= 0;
	const int SOL_SHIFT_LOW			= 1;
	const int SOL_GATLING			= 2;

//Relay
	const UINT32 RELAY_COMPRESSOR_1					= 1;
	const UINT32 RELAY_COMPRESSOR_2					= 2;
	const UINT32 RELAY_BLING						= 3;

	const UINT32 GPIO_PRESSURE						= 14;

	const UINT32 ANALOG_PRESSURE_SENSOR				= 1;
	const UINT32 ANALOG_RANGE_FINDER				= 2;

	const float PNEUMATICS_PRESSURE_VOLTAGE_B		= 1.008;
	const float PNEUMATICS_PRESSURE_VOLTAGE_M		= 63.344;

	const float DRIVE_MOTORS_SCALE					= 1;

// Digital IO
	const UINT32 GPIO_LEFT_ENCODER_A 				= 1;
	const UINT32 GPIO_LEFT_ENCODER_B 				= 2;
	const UINT32 GPIO_RIGHT_ENCODER_A 				= 3;
	const UINT32 GPIO_RIGHT_ENCODER_B 				= 4;


	const float DRV_DIST_PER_PULSE = 8.0 * 3.1415926358979323846264338 / 360;
/**
 * The RobotMap is a mapping from the ports sensors and actuators are wired into
 * to a variable name. This provides flexibility changing wiring, makes checking
 * the wiring easier and significantly reduces the number of magic numbers
 * floating around.
 */

// For example to map the left and right motors, you could define the
// following variables to use with your drivetrain subsystem.
// constexpr int LEFTMOTOR = 1;
// constexpr int RIGHTMOTOR = 2;

// If you are using multiple modules, make sure to define both the port
// number and the module. For example you with a rangefinder:
// constexpr int RANGE_FINDER_PORT = 1;
// constexpr int RANGE_FINDER_MODULE = 1;

#endif  // ROBOTMAP_H
