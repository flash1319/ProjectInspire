#include "CmdBlingOnToggle.h"

#include "CmdBlingOff.h"
#include "CmdBlingOn.h"

CmdBlingOnToggle::CmdBlingOnToggle() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
}

// Called just before this Command runs the first time
void CmdBlingOnToggle::Initialize() {
	c = NULL;
}

// Called repeatedly when this Command is scheduled to run
void CmdBlingOnToggle::Execute() {
	if(gatling->GetBlingOn()) {
		c = new CmdBlingOff();
	}
	else {
		c = new CmdBlingOn();
	}
	c->Start();
}

// Make this return true when this Command no longer needs to run execute()
bool CmdBlingOnToggle::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void CmdBlingOnToggle::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CmdBlingOnToggle::Interrupted() {
	
}
