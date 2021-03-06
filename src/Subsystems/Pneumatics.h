/*
 * Pneumatics.h
 *
 *  Created on: Sep 14, 2017
 *      Author: jakey
 */

#ifndef PNEUMATICS_H
#define PNEUMATICS_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

/**
 * @author Flash1319
 */
class Pneumatics: public Subsystem {
private:
	Compressor *m_compressor1;
	Compressor *m_compressor2;
	AnalogChannel *m_analogPressure;

	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
public:
	Pneumatics();
	void InitDefaultCommand();
	void Start();				//Sets the compressor to run while the air tanks are not full

	bool TankFull();			//Returns true if the pressure switch is triggered by 120psi, else false
	int GetPressure();			//Returns the current pressure on the high end of the pneumatics system
};

#endif

