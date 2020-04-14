#include "WPILib.h"
#include "RobotSampleCode.cpp"
#include <frc/Joystick.h>
#include <frc/PWMVictorSPX.h>
#include <frc/TimedRobot.h>
#include <frc/Timer.h>
#include <frc/drive/DifferentialDrive.h>
#include <frc/livewindow/LiveWindow.h>

void AutonomousInit()
{
    autoLoopCounter = 0;

}

void AutonomousPeriodic()
