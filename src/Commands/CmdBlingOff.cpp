#include "CmdBlingOff.h"

CmdBlingOff::CmdBlingOff() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
}

// Called just before this Command runs the first time
void CmdBlingOff::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void CmdBlingOff::Execute() {
	gatling->SetBlingOn(false);
}

// Make this return true when this Command no longer needs to run execute()
bool CmdBlingOff::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void CmdBlingOff::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CmdBlingOff::Interrupted() {
	
}
