/*
 * Base.cpp
 *
 *  Created on: Sep 14, 2017
 *      Author: jakey
 */

#include "Base.h"
#include "../RobotMap.h"
#include "../Commands/CmdDriveWithJoystickTank.h"
#include "../Commands/CmdDriveWithJoystickArcade.h"

Base::Base() : Subsystem("base") {

	m_left 	= new Victor(PWM_LEFT);
	m_right = new Victor(PWM_RIGHT);

	m_drive = new RobotDrive(m_left, m_right);

	m_solShift 		= new DoubleSolenoid(SOL_SHIFT_HIGH, SOL_SHIFT_LOW);

	m_drivetype = tank;

	m_cmdTank = NULL;
	m_cmdArcade = NULL;

	m_shift = high;
}

void Base::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	// SetDefaultCommand(new MySpecialCommand());
	//TODO: SetDefaultCommand = new cmdTankDrive();
	m_cmdArcade = new CmdDriveWithJoystickArcade();
	m_cmdTank = new CmdDriveWithJoystickTank();
	SetDefaultCommand (m_cmdTank);

}

void Base::Stop() {

	m_left->StopMotor();
	m_right->StopMotor();
	/*

	 m_driveOne->StopMotor();
	m_driveTwo->StopMotor();
	*/
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
