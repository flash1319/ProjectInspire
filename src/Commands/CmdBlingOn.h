#ifndef CMDBLINGON_H
#define CMDBLINGON_H

#include "../CommandBase.h"

/**
 * @author Flash 1319
 */
class CmdBlingOn: public CommandBase {
public:
	CmdBlingOn();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
