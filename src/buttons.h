/*
 * buttons.h
 *
 *  Created on: Sep 28, 2017
 *      Author: jakey
 */

#ifdef BUTTON_HEADERS

//Includes
#include "Commands/CmdDriveChangeMode.h"
#include "Commands/CmdDriveShiftToggle.h"
#include "Commands/CmdBlingToggle.h"
#include "Commands/CmdBlingOnToggle.h"



#else
//Driver
BUTTON_SETUP(m_driveShiftButton, m_driverPad, DRV_GEAR_SHIFT, WhenPressed, CmdDriveShiftToggle, )
BUTTON_SETUP(m_driveModeButton , m_driverPad, DRV_MODE_CHANGE, WhenPressed, CmdDriveChangeMode, )
BUTTON_SETUP(m_driveBlingToggleButton, m_driverPad, DRV_BLING_TOGGLE, WhenPressed, CmdBlingToggle, )
BUTTON_SETUP(m_driveBlingOnToggleButton, m_driverPad, DRV_BLING_ON_TOGGLE, WhenPressed, CmdBlingOnToggle, )

//Operator


#endif /* BUTTONS_H_ */
