#include "Subsystems/Arm.h"

Arm::Arm() : Subsystem("Arm")
{
	motor = new Jaguar(1);
}

void Arm::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}

void Arm::Spin(){
	motor->Set(1);
}

void Arm::Stop(){
	motor->Set(0);
}
