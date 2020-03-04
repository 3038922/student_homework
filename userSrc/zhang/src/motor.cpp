#include "motor.hpp"
#include <iostream>
Motor::Motor(int port, int zhengfan, int gear) : _port(port), _zhengfan(zhengfan), _gear(gear)
{
    setZhengfan(zhengfan);
}
Motor::~Motor()
{
    std::cout << "Motor类 删除成功" << std::endl;
}
void Motor::set(int pwm)
{
    if (pwm < 127 || pwm > -127)
        std::cout << "马达[" << _port << "]当前PWM:" << _pwm * _zhengfan << std::endl;
    else
        std::cout << "PWM数值输入错误" << std::endl;
}
void Motor::setZhengfan(int zhengfan)
{
    std::cout << "马达[" << _port << "]当前正反:";
    if (_zhengfan == 1)
        std::cout << "正转" << std::endl;
    else if (_zhengfan == -1)
        std::cout << "反转" << std::endl;
    else
        std::cout << "正反数值输入错误" << std::endl;
}
void Motor::setGear(int gear)
{
    std::cout << "马达[" << _port << "]当前齿轮:";
    if (_gear == 0)
        std::cout << "红齿轮" << std::endl;
    else if (_gear == 1)
        std::cout << "绿齿轮" << std::endl;
    else if (_gear == 2)
        std::cout << "蓝齿轮" << std::endl;
    else
        std::cout << "齿轮数值输入错误" << std::endl;
}
void Motor::getGear()
{
    std::cout << "马达[" << _port << "]当前齿轮:";
    if (_gear == 0)
        std::cout << "红齿轮" << std::endl;
    else if (_gear == 1)
        std::cout << "绿齿轮" << std::endl;
    else if (_gear == 2)
        std::cout << "蓝齿轮" << std::endl;
    else
        std::cout << "齿轮数值输入错误" << std::endl;
}
int Motor::getPwm()
{
    return _pwm * _zhengfan;
}
int Motor::getPort()
{
    return _port;
}