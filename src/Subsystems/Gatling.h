/*
 * Gatling.h
 *
 *  Created on: Sep 26, 2017
 *      Author: jakey
 */

#ifndef SUBSYSTEMS_GATLING_H_
#define SUBSYSTEMS_GATLING_H_

#include <Commands/Subsystem.h>
#include "WPILib.h"

class Gatling : public Subsystem {
public:


private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	Victor *m_gatling;
	Relay *m_bling;

	bool m_flashBling, m_blingOn;
	//Encoder *m_leftEncoder, *m_rightEncoder; will add encoder
public:
	Gatling();

	void InitDefaultCommand();
	bool GetBlingOn();				//Returns true if the bling is on, else false
	bool GetBlingFlashing();		//Returns true if the bling is flashing, else false
	void Stop();
	void UpdateBling();
	void SetBlingOn(bool blingOn);	//Sets the bling to be on if passed true, else sets it to be off
	void SetFlashBling(bool flash);	//Tells the bling to flash if passed true, else tells it to stay solid
};




#endif /* SUBSYSTEMS_GATLING_H_ */
