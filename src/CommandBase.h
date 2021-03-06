/*
 * CommandBase.h
 *
 *  Created on: Sep 14, 2017
 *      Author: jakey
 */

#ifndef COMMAND_BASE_H
#define COMMAND_BASE_H

#include <memory>
#include <string>

#include <Commands/Command.h>

#include "OI.h"
#include "Subsystems/Base.h"
#include "Subsystems/Gatling.h"
#include "Subsystems/Pan.h"


/**
 * The base for all commands. All atomic commands should subclass CommandBase.
 * CommandBase stores creates and stores each control system. To access a
 * subsystem elsewhere in your code in your code use
 * CommandBase::exampleSubsystem
 */
class CommandBase: public Command {
public:
	CommandBase(const char *name);
	CommandBase();
	static void init();
	// Create a single static instance of all of your subsystems
	static Base 	*base;
	static Gatling 	*gatling;
	static Pan		*pan;



	static OI *oi;
};

#endif  // COMMAND_BASE_H
