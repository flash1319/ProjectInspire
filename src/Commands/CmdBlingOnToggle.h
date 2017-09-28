#ifndef CMDBLINGONTOGGLE_H
#define CMDBLINGONTOGGLE_H

#include "../CommandBase.h"

/**
 * @author Flash 1319
 */
class CmdBlingOnToggle: public CommandBase {
private:
	Command *c;
public:
	CmdBlingOnToggle();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
