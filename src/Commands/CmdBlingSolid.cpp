#include "CmdBlingSolid.h"

CmdBlingSolid::CmdBlingSolid() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
}

// Called just before this Command runs the first time
void CmdBlingSolid::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void CmdBlingSolid::Execute() {
	gatling->SetFlashBling(false);
}

// Make this return true when this Command no longer needs to run execute()
bool CmdBlingSolid::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void CmdBlingSolid::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CmdBlingSolid::Interrupted() {
	
}
