#include "OI.h"
#include "Commands/Shoot.h"
#include "Commands/RegressionShoot.h"


OI::OI()
{
	joy = new Joystick(JOYSTICKPORT);
	b1 = new JoystickButton(joy, 1);
	b2 = new JoystickButton(joy, 2);

	b1->WhenPressed(new Shoot());
	b2->WhenPressed(new RegressionShoot());
}

Joystick* OI::GetJoy(){
	return joy;
}
