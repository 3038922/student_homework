#include "motor.hpp"
Motor::Motor(int port, int zhengfan, int gear) : _port(port), _zhengfan(zhengfan), _gear(gear)

{
    std::cout << "添加马达 " << std::endl;
}
Motor::~Motor()
{
    std::cout << "删除马达" << std::endl;
}
void Motor::set(int pwm)
{
    std::cout << _port << "号马达当前pwm值是" << pwm * _zhengfan << std::endl;
}
void Motor::setZhengfan(int zhengfan)
{
    if (zhengfan == 1)
    {
        std::cout << _port << "号马达正" << std::endl;
    }
    else if (zhengfan == -1)
    {
        std::cout << _port << "号马达反" << std::endl;
    }
    else if (zhengfan < -1 || zhengfan > 1)
    {
        std::cout << "无" << std::endl;
    }
}
void Motor::getGear()
{
    if (_gear == 0)

        std::cout << _gear << "号马达颜色红" << std::endl;

    else if (_gear == 1)
    {
        std::cout << _gear << "号马达颜色绿" << std::endl;
    }
    else if (_gear == 2)
    {
        std::cout << _gear << "号马达颜色蓝" << std::endl;
    }
    else if (_gear < 0 || _gear > 2)
    {
        std::cout << "无" << std::endl;
    }
}
void Motor::setGear(int gear)
{
    if (gear == 0)
        std::cout << "红齿轮" << std::endl;

    else if (gear == 1)
    {
        std::cout << "绿齿轮" << std::endl;
    }
    else if (gear == 2)
    {
        std::cout << "蓝齿轮" << std::endl;
    }
}

int Motor::getPort()
{
    std::cout << _port << std::endl;
    return 0;
}
int Motor::getPwm()
{
    std::cout << _pwm + 127 * _zhengfan << std::endl;
    return 0;
}