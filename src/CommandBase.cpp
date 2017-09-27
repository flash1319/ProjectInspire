/*
 * CommandBase.cpp
 *
 *  Created on: Sep 14, 2017
 *      Author: jakey
 */

#include "CommandBase.h"

#include <Commands/Scheduler.h>


#include "Subsystems/Base.h"
#include "Subsystems/Gatling.h"
#include "Subsystems/Pan.h"

// Initialize a single static instance of all of your subsystems. The following
// line should be repeated for each subsystem in the project.
Base* 		CommandBase::base 	= NULL;
Gatling* 	CommandBase::gatling 	= NULL;
Pan*		CommandBase::pan	= NULL;
OI* CommandBase::oi = NULL;
