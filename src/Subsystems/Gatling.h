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

	//Encoder *m_leftEncoder, *m_rightEncoder; will add encoder
public:
	Gatling();

	void InitDefaultCommand();
	void Stop();
};




#endif /* SUBSYSTEMS_GATLING_H_ */
