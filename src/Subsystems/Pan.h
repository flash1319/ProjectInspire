/*
 * Pan.h
 *
 *  Created on: Sep 26, 2017
 *      Author: jakey
 */

#ifndef SUBSYSTEMS_PAN_H_
#define SUBSYSTEMS_PAN_H_


#include <Commands/Subsystem.h>
#include "WPILib.h"

class Pan : public Subsystem {
public:


private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	Victor *m_Turret;
	Victor *m_Trajectory;
	//Encoder *m_leftEncoder, *m_rightEncoder; will add encoder
public:
	Pan();

	void InitDefaultCommand();
	void Stop();
};



#endif /* SUBSYSTEMS_PAN_H_ */
