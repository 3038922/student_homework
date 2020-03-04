// #include "../include/Motor.hpp"
#include "motor.hpp"
// /**
//   * @brief 马达类
//   *
//   * @param port 端口(1 - 21)
//   * @param PositiveAndNegative 正反(-1 - 1, -1:反 , 1:正)
//   * @param gear 齿轮(0 - 2, 0:红齿轮, 1:绿齿轮, 2:蓝齿轮)
//   */
// Motor::Motor(int port, int PositiveAndNegative, int gear) : _port(port), _PositiveAndNegative(PositiveAndNegative), _gear(gear)
// {
//     std::cout << "马达[" << _port << "]构造成功!" << std::endl;
//     std::cout << "正反: ";
//     if (_PositiveAndNegative == 1)
//         std::cout << "正";
//     else if (_PositiveAndNegative == -1)
//         std::cout << "反";
//     else if (_gear < -1 || _gear > 1)
//         std::cout << "输入错误!";
//     std::cout << ", 齿轮: ";
//     if (_gear == 0)
//         std::cout << "红齿轮";
//     else if (_gear == 1)
//         std::cout << "绿齿轮";
//     else if (_gear == 2)
//         std::cout << "蓝齿轮";
//     else if (_gear < 0 || _gear > 2)
//         std::cout << "输入错误!";
//     std::cout << std::endl;
// }
// Motor::~Motor()
// {
//     std::cout << "马达[" << _port << "]删除成功!" << std::endl;
// }
// void Motor::GetPort()
// {
//     std::cout << "马达[" << _port << "]当前端口: " << _port << std::endl;
// }
// void Motor::GetPositiveAndNegative()
// {
//     std::cout << "马达[" << _port << "]当前正反: ";
//     if (_PositiveAndNegative == 1)
//         std::cout << "正";
//     else if (_PositiveAndNegative == -1)
//         std::cout << "反";
//     else if (_gear < 0 || _gear > 2)
//         std::cout << "输入错误!";
//     std::cout << std::endl;
// }
// void Motor::GetGear()
// {
//     std::cout << "马达[" << _port << "]当前齿轮: ";
//     if (_gear == 0)
//         std::cout << "红齿轮";
//     else if (_gear == 1)
//         std::cout << "绿齿轮";
//     else if (_gear == 2)
//         std::cout << "蓝齿轮";
//     else if (_gear < 0 || _gear > 2)
//         std::cout << "输入错误!";
//     std::cout << std::endl;
// }
/**************************************************/
Motor::Motor(int port, int zhengfan, int gear) : _port(port), _zhengfan(zhengfan), _gear(gear)
{
    std::cout << "马达[" << _port << "]构造成功!" << std::endl;
    std::cout << "正反: ";
    if (_zhengfan == 1)
        std::cout << "正";
    else if (_zhengfan == -1)
        std::cout << "反";
    else if (_gear < -1 || _gear > 1)
        std::cout << "输入错误!";
    std::cout << ", 齿轮: ";
    if (_gear == 0)
        std::cout << "红齿轮";
    else if (_gear == 1)
        std::cout << "绿齿轮";
    else if (_gear == 2)
        std::cout << "蓝齿轮";
    else if (_gear < 0 || _gear > 2)
        std::cout << "输入错误!";
    std::cout << std::endl;
}
Motor::~Motor()
{
    std::cout << "马达[" << _port << "]删除成功!" << std::endl;
}
void Motor::set(int pwm)
{
    if (pwm > 127 || pwm < -127)
        std::cout << "输入错误!" << std::endl;
    else
    {
        _pwm = pwm;
        std::cout << "马达[" << _port << "]当前PWM: " << pwm * _zhengfan << std::endl;
    }
}
void Motor::setZhengfan(int zhengfan)
{
    if (zhengfan > 1 || zhengfan < -1)
        std::cout << "输入错误!" << std::endl;
    else
    {
        _zhengfan = zhengfan;
        std::cout << "马达[" << _port << "]当前正反: ";
        if (_zhengfan == 1)
            std::cout << "正";
        else if (_zhengfan == -1)
            std::cout << "反";
        std::cout << std::endl;
    }
}
void Motor::setGear(int gear)
{
    if (gear > 2 || gear < 0)
        std::cout << "输入错误!" << std::endl;
    else
    {
        std::cout << "马达[" << _port << "]当前齿轮: ";
        if (_gear == 0)
            std::cout << "红齿轮";
        else if (_gear == 1)
            std::cout << "绿齿轮";
        else if (_gear == 2)
            std::cout << "蓝齿轮";
        std::cout << std::endl;
    }
}
void Motor::getGear()
{
    std::cout << "马达[" << _port << "]当前齿轮: ";
    if (_gear == 0)
        std::cout << "红齿轮";
    else if (_gear == 1)
        std::cout << "绿齿轮";
    else if (_gear == 2)
        std::cout << "蓝齿轮";
    else if (_gear < 0 || _gear > 2)
        std::cout << "输入错误!";
    std::cout << std::endl;
}
int Motor::getPwm()
{
    return _pwm;
}
int Motor::getPort()
{
    return _port;
}