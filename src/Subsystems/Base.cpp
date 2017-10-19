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

	m_CmdTank = NULL;
	m_CmdArcade = NULL;

	m_shift = high;

	m_leftEncoder = new Encoder(GPIO_LEFT_ENCODER_A, GPIO_LEFT_ENCODER_B, false);
	m_rightEncoder = new Encoder(GPIO_RIGHT_ENCODER_A, GPIO_RIGHT_ENCODER_B, false);

	m_leftEncoder->SetDistancePerPulse(DRV_DIST_PER_PULSE);
	m_rightEncoder->SetDistancePerPulse(DRV_DIST_PER_PULSE);

	m_leftEncoder->Start();
	m_rightEncoder->Start();
}

void Base::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	// SetDefaultCommand(new MySpecialCommand());
	//TODO: SetDefaultCommand = new cmdTankDrive();
	m_CmdArcade = new CmdDriveWithJoystickArcade();
	m_CmdTank = new CmdDriveWithJoystickTank();
	SetDefaultCommand (m_CmdTank);

}

void Base::Stop() {

	m_left->StopMotor();
	m_right->StopMotor();
	/*

	 m_driveOne->StopMotor();
	m_driveTwo->StopMotor();
	*/
}

float Base::SpeedLeft()
{
	return (float)(m_leftEncoder->GetRate());
}

float Base::SpeedRight()
{
	return (float)(m_rightEncoder->GetRate());
}

float Base::DistanceLeft() {
	return (float)(m_leftEncoder->GetDistance());
}

float Base::DistanceRight() {
	return (float)(m_rightEncoder->GetDistance());
}

void Base::Shift(Base::e_shift value)
{
	switch(value)
	{
		case low:
			m_solShift->Set(DoubleSolenoid::kForward);
			break;
		case high:
			m_solShift->Set(DoubleSolenoid::kReverse);
			break;
		default:
			m_solShift->Set(DoubleSolenoid::kOff);
			break;
	}

	m_shift = value;
}

void Base::driveType( Base::e_drivetype value )
{
	if (m_drivetype != value)
	{
		m_drivetype = value;
		switch (m_drivetype)
		{
		case arcade:
			SetDefaultCommand( m_CmdArcade );
			break;
		case tank:
			cout << "Setting default command to tank" << std::endl;
			SetDefaultCommand( m_CmdTank );
			break;

		default:
			SetDefaultCommand( NULL );
			cout << "Hm... no default drive command.  What happened?" << std::endl;
			break;
		}
	}

}
void Base::JoystickTankDrive(float leftSpeed, float rightSpeed)
{
	m_drive->TankDrive(0-leftSpeed, rightSpeed, false );

}

void Base::JoystickArcadeDrive(float speed, float rotate)
{
	//	It appears that we need to pass the X axis (rotate) in the "speed"
	//	parameter and the Y axis (speed) in the "rotate" parameter.  We've
	//	decided to use the correct names here and let WPIlib just be crazy.
	m_drive->ArcadeDrive( 0-rotate, speed, false);
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
