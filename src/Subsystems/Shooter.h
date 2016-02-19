#ifndef SHOOTER_H
#define SHOOTER_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class Shooter: public Subsystem
{
private:
	Preferences* prefs;
	CANTalon* pCollectorMotor;
	CANTalon* pShooterMotorLeft;
	CANTalon* pShooterMotorRight;
	Timer* pTimer;
	DigitalInput* limitSwitch;
	Counter* counter;
	AnalogInput* frontUltra;
	std::shared_ptr<NetworkTable> nt;

public:
	Shooter();

	float fIntakeSpeed;
	float fShootSpeed;
	float fKickerSpeed;
	float fRegressionSpeed;

	std::vector<double> arrCX;
	std::vector<double> arrCArea;

	void Intake(float speed);
	void Shoot(float speed);
	void LowGoal();
	float GetShootSpeed();
	float GetIntakeSpeed();
	float GetShootSpeed_R(); //regression shooting
	float GetKickerSpeed();
	void StopShoot();
	void StopIntake();

	//CS
	double GetTargetDisplacement(); // 0: right on, -1: left, 1: right, 2: not sure
	bool IsContours();
	int FindMaxArea();
	void RumbleWhenInRange(double variance);

	//util
	void InitDefaultCommand();
	void StartTimer();
	void StopTimer();
	bool IsSwitchSet();
	void InitializeCounter();
	double GetCurrentTime();
	double GetUltraAt(int port);
};


#endif
