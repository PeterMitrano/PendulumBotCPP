#include "Spin.h"
#include "Robot.h"

Spin::Spin() : Command("Spin") {
	Requires(Robot::arm);
}

// Called just before this Command runs the first time
void Spin::Initialize() {
	SetTimeout(10);
}

// Called repeatedly when this Command is scheduled to run
void Spin::Execute() {
	Robot::arm->Spin();
}

// Make this return true when this Command no longer needs to run execute()
bool Spin::IsFinished() {
	return IsTimedOut();
}

// Called once after isFinished returns true
void Spin::End() {
	Robot::arm->Stop();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void Spin::Interrupted() {
	End();
}
