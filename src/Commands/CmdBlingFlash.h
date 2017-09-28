#ifndef CMDBLINGFLASH_H
#define CMDBLINGFLASH_H

#include "../CommandBase.h"

/**
 * @author Flash 1319
 */
class CmdBlingFlash: public CommandBase {
public:
	CmdBlingFlash();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
