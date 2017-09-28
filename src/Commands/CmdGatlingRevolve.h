/*
 * CmdGatlingRevolve.h
 *
 *  Created on: Sep 27, 2017
 *      Author: jakey
 */

#ifndef COMMANDS_CMDGATLINGREVOLVE_H_
#define COMMANDS_CMDGATLINGREVOLVE_H_

#include "../CommandBase.h"

class CmdGatlingRevolve: public CommandBase {
public:
	CmdGatlingRevolve();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif





