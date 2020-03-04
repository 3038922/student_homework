#include "motor.hpp"
Motor::Motor(int port, int zhengfan, int gear) : _port(port), _zhengfan(zhengfan), _gear(gear)
{
    std::cout << "马达类添加成功" << std::endl;
}
Motor::~Motor()
{
    std::cout << "马达类删除成功" << std::endl;
}
void Motor::set(int pwm)
{
    std::cout << "马达" << _port << "号当前PWM:" << pwm * _zhengfan << std::endl;
}
void Motor::setZhengfan(int zhengfan)
{
    if (zhengfan == 1)
    {
        std::cout << "马达" << _port << "号当前正反:正" << std::endl;
    }
    else if (zhengfan == -1)
    {
        std::cout << "马达" << _port << "号当前正反:反" << std::endl;
    }
    else if (zhengfan < -1 || zhengfan > 1)
    {
        std::cout << "没有此值" << std::endl;
    }
}
void Motor::setGear(int gear)
{
    if (gear == 0)
    {
        std::cout << "马达" << _port << "号当前齿轮比:红齿轮" << std::endl;
    }
    else if (gear == 1)
    {
        std::cout << "马达" << _port << "号当前齿轮比:绿齿轮" << std::endl;
    }
    else if (gear == 2)
    {
        std::cout << "马达" << _port << "号当前齿轮比:蓝齿轮" << std::endl;
    }
    else if (gear < 0 || gear > 2)
    {
        std::cout << "没有该齿轮比" << std::endl;
    }
}
void Motor::getGear()
{
    if (_gear == 0)
    {
        std::cout << "红色" << std::endl;
    }
    else if (_gear == 1)
    {
        std::cout << "绿色" << std::endl;
    }
    else if (_gear == 2)
    {
        std::cout << "蓝色" << std::endl;
    }
    else if (_gear < 0 || _gear > 2)
    {
        std::cout << "没有该齿轮颜色" << std::endl;
    }
}
int Motor::getPwm()
{
    std::cout << _pwm + 127 * _zhengfan << std::endl;
    return 0;
}
int Motor::getPort()
{
    std::cout << _port << std::endl;
    return 0;
}