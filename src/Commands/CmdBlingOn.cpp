#include "CmdBlingOn.h"

CmdBlingOn::CmdBlingOn() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
}

// Called just before this Command runs the first time
void CmdBlingOn::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void CmdBlingOn::Execute() {
	gatling->SetBlingOn(true);
}

// Make this return true when this Command no longer needs to run execute()
bool CmdBlingOn::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void CmdBlingOn::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CmdBlingOn::Interrupted() {
	
}
