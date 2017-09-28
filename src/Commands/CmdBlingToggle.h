#ifndef CMDBLINGTOGGLE_H
#define CMDBLINGTOGGLE_H

#include "../CommandBase.h"

/**
 * @author Flash 1319
 */
class CmdBlingToggle: public CommandBase {
private:
	Command *c;
public:
	CmdBlingToggle();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
