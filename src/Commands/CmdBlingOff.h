#ifndef CMDBLINGOFF_H
#define CMDBLINGOFF_H

#include "../CommandBase.h"

/**
 * @author Flash 1319
 */
class CmdBlingOff: public CommandBase {
public:
	CmdBlingOff();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
