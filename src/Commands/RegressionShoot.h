#ifndef RegressionShoot_H
#define RegressionShoot_H

#include "../CommandBase.h"
#include "WPILib.h"

class RegressionShoot: public CommandBase
{
public:
	RegressionShoot();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
