#include "motor.hpp"
#include <iostream>
int main(int argc, char *grgv[])
{
    Motor::Motor(int port, int zhengfan, int gear, int pwm) : _port(port), _zhengfan(zhengfan), _gear(gear), _pwm(pwm)
    {
        std::cout << "马达[" << _port << "]正反：" << _zhengfan << "齿轮颜色:" << setGear << "PWM" << _pwm * _zhengfan << std::endl;
    }
    Motor::~Motor()
    {
        std::cout << "Motor类 删除成功" << std::endl;
    }
    void Motor::setPWM()
    {
        std::cout << "马达[" << _port << "]当前PWM:" << _pwm * _zhengfan << std::endl;
    }
    void Motor::setZhengfan()
    {
        std::cout << "马达[" << _port << "]当前正反:" << _zhengfan << std::endl;
    }
    void Motor::setGear()
    {
        std::cout << "马达[" << _port << "]当前颜色:" << _getGear << std::endl;
    }
    void Motor::getGear()
    {
        if (_gear == 0)
            std::cout << "红齿轮" << std::endl;
        else if (_gear == 1)
            std::cout << "绿齿轮" << std::endl;
        else if (_gear == 2)
            std::cout << "蓝齿轮" << std::endl;
        else
            std::cout << "齿轮数值输入错误" << std::endl;
    }
    void Motor::getPwm()
    {
        if (_pwm <= 127, > 0)
            std::cout << _pwm * _zhengfan << std::endl;
        else
            std::cout << "PWM数值输入错误" << std::endl;
    }
    void Motor::getPort()
    {
        return _port;
    }
    void Motor::getzhengfan()
    {
        if (_zhengfan == 1)
            std::cout << "正转" << std::endl;
        else if (_zhengfan == -1)
            std::cout << "反转" << std::endl;
        else
            std::cout << "正反数值输入错误" << std::endl;
    }
    Motor::private : int _port;
    int _zhengfan;
    int _gear;
    int _pwm;
    return 0;
};