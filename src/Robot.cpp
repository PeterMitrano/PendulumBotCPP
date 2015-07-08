#include "Robot.h"
#include "Commands/Spin.h"

Arm* Robot::arm= NULL;

OI* Robot::oi = NULL;

void Robot::RobotInit() {
	arm= new Arm();

	oi = new OI();

	autonomousCommand = new Spin();
	lw = LiveWindow::GetInstance();

    // Show what command your subsystem is running on the SmartDashboard
    SmartDashboard::PutData(arm);
}

void Robot::AutonomousInit() {
	autonomousCommand->Start();
	std::cout << "Starting Auto" << std::endl;
}

void Robot::AutonomousPeriodic() {
	Scheduler::GetInstance()->Run();
}

void Robot::TeleopInit() {
	// This makes sure that the autonomous stops running when
	// teleop starts running. If you want the autonomous to
	// continue until interrupted by another command, remove
	// this line or comment it out.
	autonomousCommand->Cancel();
	std::cout << "Starting Teleop" << std::endl;
}

void Robot::TeleopPeriodic() {
	Scheduler::GetInstance()->Run();
}

void Robot::TestPeriodic() {
	lw->Run();
}

START_ROBOT_CLASS(Robot);
