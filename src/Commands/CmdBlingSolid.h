#ifndef CMDBLINGSOLID_H
#define CMDBLINGSOLID_H

#include "../CommandBase.h"

/**
 * @author Flash 1319
 */
class CmdBlingSolid: public CommandBase {
public:
	CmdBlingSolid();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
