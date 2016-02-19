#include "Shoot.h"

Shoot::Shoot()
{
	// Use Requires() here to declare subsystem dependencies
	Requires(CommandBase::shooter);
}

// Called just before this Command runs the first time
void Shoot::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void Shoot::Execute()
{
	CommandBase::shooter->StartTimer();
	CommandBase::shooter->Shoot(CommandBase::shooter->GetShootSpeed());
	if(CommandBase::shooter->GetCurrentTime() >= 1.0 ){ //kick
		CommandBase::shooter->Intake(CommandBase::shooter->GetIntakeSpeed());
	}

}

// Make this return true when this Command no longer needs to run execute()
bool Shoot::IsFinished()
{
	if(CommandBase::shooter->GetCurrentTime() >= 2.0){
		return true;
	}else{
		return false;
	}
}

// Called once after isFinished returns true
void Shoot::End()
{
	CommandBase::shooter->StopShoot();
	CommandBase::shooter->StopIntake();
	CommandBase::shooter->StopTimer();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void Shoot::Interrupted()
{

}
