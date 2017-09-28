/*
 * OI.cpp
 *
 *  Created on: Sep 14, 2017
 *      Author: jakey
 */

#include "OI.h"
#include "Robotmap.h"
#include <WPILib.h>
#include "xb360map.h"
#include "Math.h"
#include "Utilities.h"
#define BUTTON_HEADERS
#include "buttons.h"
#undef BUTTON_HEADERS


OI::OI() {
	// Process operator interface input here.
	m_driverPad = new Joystick(PAD_DRIVER);
	m_operatorPad = new Joystick(PAD_OPERATOR);

#define BUTTON_SETUP(btn_name, pad, btn_code, action, cmd, arg) \
	btn_name = new JoystickButton(pad, btn_code); \
	btn_name->action(new cmd(arg));
#include "buttons.h"
#undef BUTTON_SETUP
	//Driver
}

	float OI::driverLeftX() {
		return scaleAxis(m_driverPad->GetRawAxis(DRV_AXIS_X)) * DRIVE_MOTORS_SCALE;
	}

	float OI::driverLeftY() {
		return -scaleAxis(m_driverPad->GetRawAxis(DRV_AXIS_Y)) * DRIVE_MOTORS_SCALE;
	}

	float OI::driverRightX() {
		return scaleAxis(m_driverPad->GetRawAxis(DRV_AXIS_X2)) * DRIVE_MOTORS_SCALE;
	}

	float OI::driverRightY() {
		return -scaleAxis(m_driverPad->GetRawAxis(DRV_AXIS_Y2)) * DRIVE_MOTORS_SCALE;
	}


	float OI::scaleAxis(float input) {
		const float k = 21;
		const float y = 22;

		float filteredInput = fabs(input);

		if(filteredInput <= AXIS_FILTER) {
			filteredInput = 0.;
		}

		return (pow(y, filteredInput) - 1) / k * Sign(input);
	}

//Operator



