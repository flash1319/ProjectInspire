/*
 * Gatling.cpp
 *
 *  Created on: Sep 26, 2017
 *      Author: jakey
 */
#include "Gatling.h"
#include "../RobotMap.h"

Gatling::Gatling() : Subsystem("gatling") {

	m_gatling = new Victor(PWM_GATLING);
	m_bling		= new Relay(RELAY_BLING);

	m_flashBling = false;
	m_blingOn = true;
}

void Gatling::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	// SetDefaultCommand(new MySpecialCommand());
	//TODO: SetDefaultCommand = new cmdTankDrive();


}

void Gatling::Stop() {

	m_gatling->StopMotor();

}

bool Gatling::GetBlingOn() {
	return m_blingOn;

}

bool Gatling::GetBlingFlashing() {
	return m_flashBling;
}

void Gatling::UpdateBling() {
	if(m_blingOn && (!m_flashBling || m_flashBling && DriverStation::GetInstance()->GetPacketNumber() % 12 >= 6)) {
		m_bling->Set(Relay::kForward);
	}
	else {
		m_bling->Set(Relay::kReverse);
	}
}

void Gatling::SetBlingOn(bool blingOn) {
	m_blingOn = blingOn;
}

void Gatling::SetFlashBling(bool flash) {
	m_flashBling = flash;
}

// Put methods for controlling this subsystem
// here. Call these from Commands.



