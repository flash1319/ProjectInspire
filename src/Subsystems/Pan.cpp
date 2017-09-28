/*
 * Pan.cpp
 *
 *  Created on: Sep 26, 2017
 *      Author: jakey
 */

#include "Pan.h"
#include "../RobotMap.h"

Pan::Pan() : Subsystem("pan") {

	m_Turret = new Victor(PWM_PAN_1);
	m_Trajectory = new Victor(PWM_PAN_2);

}

void Pan::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	// SetDefaultCommand(new MySpecialCommand());



}

void Pan::Stop() {

	m_Turret->StopMotor();
	m_Trajectory->StopMotor();


}


