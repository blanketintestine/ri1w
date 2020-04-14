class Robot : public frc::TimedRobot
{
public:
    Robot() {
        m_robotDrive.SetExpiration(0.1);
        m_timer.Start();
    }


private:
// Robot drive system
frc::PWMVictorSPX m_left{0};
frc::PWMVictorSPX m_right{1};
frc::DifferentialDrive m_robotDrive{m_left, m_right};
frc::Joystick m_stick{0};
frc::LiveWindow& m_lw = *frc::LiveWindow::GetInstance();
frc::Timer m_timer;