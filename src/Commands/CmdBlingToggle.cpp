#include "CmdBlingToggle.h"

#include "CmdBlingFlash.h"
#include "CmdBlingSolid.h"

CmdBlingToggle::CmdBlingToggle() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
}

// Called just before this Command runs the first time
void CmdBlingToggle::Initialize() {
	c = NULL;
}

// Called repeatedly when this Command is scheduled to run
void CmdBlingToggle::Execute() {
	if(gatling->GetBlingFlashing())
	{
		c = new CmdBlingSolid();
	}
	else
	{
		c = new CmdBlingFlash();
	}
	c->Start();
}

// Make this return true when this Command no longer needs to run execute()
bool CmdBlingToggle::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void CmdBlingToggle::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CmdBlingToggle::Interrupted() {
	
}
