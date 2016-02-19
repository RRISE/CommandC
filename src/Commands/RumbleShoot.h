#ifndef RumbleShoot_H
#define RumbleShoot_H

#include "../CommandBase.h"
#include "WPILib.h"

class RumbleShoot: public CommandBase
{
public:
	RumbleShoot();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
