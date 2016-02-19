#include "RegressionShoot.h"


RegressionShoot::RegressionShoot()
{
	// Use Requires() here to declare subsystem dependencies
	Requires(CommandBase::shooter);
}

// Called just before this Command runs the first time
void RegressionShoot::Initialize()
{

}


// Called repeatedly when this Command is scheduled to run
void RegressionShoot::Execute()
{
	CommandBase::shooter->StartTimer();
	CommandBase::shooter->Shoot(CommandBase::shooter->GetShootSpeed_R());
	if(CommandBase::shooter->GetCurrentTime() >= 1.0 ){ //kick
		CommandBase::shooter->Intake(CommandBase::shooter->GetIntakeSpeed());
	}

}

// Make this return true when this Command no longer needs to run execute()
bool RegressionShoot::IsFinished()
{
	if(CommandBase::shooter->GetCurrentTime() >= 2.0){
		return true;
	}else{
		return false;
	}
}

// Called once after isFinished returns true
void RegressionShoot::End()
{
	CommandBase::shooter->StopShoot();
	CommandBase::shooter->StopIntake();
	CommandBase::shooter->StopTimer();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void RegressionShoot::Interrupted()
{

}
