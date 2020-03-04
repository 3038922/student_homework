#include "../include/motor.hpp"
Motor::Motor(int prot, int zhengfan, int gear) : _prot(prot), _zhengfan(zhengfan), _gear(gear)
{
    std::cout << "马达[" << prot << "]号,正反:" << zhengfan << "齿轮:";
    switch (gear)
    {
        case 0:
            std::cout << "红齿轮";
            break;
        case 1:
            std::cout << "绿齿轮";
            break;
        case 2:
            std::cout << "蓝齿轮";
            break;
        default:
            std::cout << "没有齿轮";
            break;
    }
    std::cout << "构造成功!" << std::endl;
}
Motor::~Motor()
{
    std::cout << "马达[" << _prot << "]删除成功!" << std::endl;
}
void Motor::showprot()
{
    std::cout << "马达端口为:" << _prot << "号" << std::endl;
}
void Motor::set(int pwm)
{
    std::cout << "马达速度为:" << pwm * _zhengfan << std::endl;
}