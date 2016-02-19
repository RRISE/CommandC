#ifndef OI_H
#define OI_H

#include "WPILib.h"
#include "RobotMap.h"

class OI
{
private:
	Joystick* joy;
	JoystickButton* b1;
	JoystickButton* b2;

public:
	OI();
	Joystick* GetJoy();
};

#endif
