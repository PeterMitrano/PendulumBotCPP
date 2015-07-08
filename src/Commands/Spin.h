#ifndef CloseClaw_H
#define CloseClaw_H

#include "Commands/Command.h"

 class Spin: public Command {
public:
	Spin();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
