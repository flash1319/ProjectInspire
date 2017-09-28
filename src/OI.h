/*
 * OI.h
 *
 *  Created on: Sep 14, 2017
 *      Author: jakey
 */

#ifndef OI_H
#define OI_H

#include "WPILib.h"
#include "oimap.h"

class OI {
private:
	Joystick *m_driverPad, *m_operatorPad;

#define BUTTON_SETUP(btn_name, pad, btn_code, action, cmd, arg) \
	JoystickButton *btn_name;
#include "buttons.h"
#undef BUTTON_SETUP


public:
	OI();
		float driverLeftX();
		float driverLeftY();
		float driverRightX();
		float driverRightY();

		float operateX();
		float operateY();
		float operateX2();
		float operateY2();

		static float scaleAxis(float input);




};

#endif  // OI_H
