#include "OI.h"

#include "Commands/Spin.h"

OI::OI()
{
	SmartDashboard::PutData("spin", new Spin());
}
