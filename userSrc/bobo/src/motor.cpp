#include "motor.hpp"

Motor::Motor(int port, int zhengfan, int gear) : _port(port), _zhengfan(zhengfan), _gear(gear)
{
    std::cout << "马达[" << port << "] 正反:" << zhengfan;
    getGear();
}
Motor::~Motor()
{
    std::cout << "马达类删除成功" << std::endl;
}
void Motor::set(int pwm)
{
    std::cout << "马达[" << _port << "]当前PWM:" << pwm * _zhengfan << std::endl;
}
int Motor::getPort()
{
    return _port;
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