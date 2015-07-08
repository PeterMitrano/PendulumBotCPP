#ifndef EXAMPLE_SUBSYSTEM_H
#define EXAMPLE_SUBSYSTEM_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class Arm: public Subsystem {
private:
	Jaguar* motor;

public:
	void Spin();
	void Stop();
	Arm();
	void InitDefaultCommand();
};

#endif
