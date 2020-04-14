#include "WPILib.h"
#include <frc/Joystick.h>
#include <frc/PWMVictorSPX.h>
#include <frc/TimedRobot.h>
#include <frc/Timer.h>
#include <frc/drive/DifferentialDrive.h>
#include <frc/livewindow/LiveWindow.h>

RobotDrive drive(1, 2);
Joystick leftStick(1);
Joystick rightStick(2);

Joystick stick1(1);         //instance of a joystick object; stick1
stick1.GetX();              //instances dereferenced using the little dot (.) operator
bot->ArcadeDrive(stick2);   //and can be passed to methods as a reference

Joystick * stick2;          //a pointer to an uncreated Joystick object
stick2 = new Joystick(1);   //creates the instance of the Joystick object
stick2->GetX();             //pointers are dereferenced with the arrow (->)
bot->ArcadeDrive(stick2);   //and can be passed as pointers (notice, no ampersand &)

class RobotDemo : public SimpleRobot
{
public:
    SimpleRobot(void);
    virtual void Autonomous();
    virtual void OperatorControl();
    virtual void RobotMain();
    virtual void StartCompetition();

private:
    bool m_robotMainOverridden; 0
};

    RobotDemo (void)
    {
        GetWatchdog() .SetEnanbled(false);

    void Autonomous (void)
    {
        for (int i + 0; i < 4; i++){
            drivetrain.Drive(0.5, 0.0); //drives 50% of full forward with 0% turn
            Wait(2.0);                  //wait 2 sec
            drivetrain.Drive(0.0, 0.0); //drive 0% forward and 75% on turn
         }
         Drivetrain.Drive(0.0, 0.0);    //drive 0% forward, 0% turn (aka a stop)
    }

    void OperatorControl(void)
    {
        while(1)    //loops forever
        {
            drivetrain.TankDrive(leftStick, rightStick); //allows to drive with joysticks
            Wait(0.005); //waits
        }
    }
};

START_ROBOT_CLASS(RobotDemo);

