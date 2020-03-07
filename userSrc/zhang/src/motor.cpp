#include "motor.hpp"
#include <iostream>
/**
   * @brief VEX V5马达控制类函数
   * 
   * @param port 马达的端口号 1-21
   * @param zhengfan 设置马达的正反 1正 -1反
   * @param gear //0 红齿轮  1 绿齿轮 2 蓝齿轮
   */
Motor::Motor(int port, int zhengfan, int gear) : _port(port), _zhengfan(zhengfan), _gear(gear)
{
    std::cout << "[" << _port << "]号马达设置成功!!!   当前WPM：" << _wpm << "当前正反：";
    std::cout << setzhengfan(zhengfan);
    std::cout << "当前齿轮:";
    std::cout << setGear(gear) std::endl;
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
/**
     * @brief 设置马达正转还是反转
     * 
     * @param zhengfan 正转填1 反转填-1 
     */
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
/**
     * @brief 设置当前马达的齿轮比
     * 
     * @param gear 0红齿轮 1 绿齿轮 2 蓝齿轮
     */
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
/**
     * @brief 获取当前齿轮的颜色
     * 
     */

/*******************以下是获取类成员函数**********************/
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
/**
     * @brief 获取当前的PWM值
     * 
     * @return int 返回当前的PWM值 +-127
     */
int Motor::getPwm()
{
    return _pwm * _zhengfan;
}
/**
     * @brief 获取当前马达的端口
     * 
     * @return int 返回马达的端口好 1-21
     */
int Motor::getPort()
{
    return _port;
}
// Motor::Motor(int port, int zhengfan, int gear) : _port(port), _zhengfan(zhengfan), _gear(gear)
// {
//     std::cout<<"马达[" << _port << "]当前pwm:"<<_pwm<<"当前齿轮:";
//     setGear(gear);
//     std::cout<<"当前正反";
//     setZhengfan(zhengfan);
// }
// Motor::~Motor()
// {
//     std::cout << "Motor类 删除成功" << std::endl;
// }
// void Motor::set(int pwm)
// {
//     if (pwm < 127 || pwm > -127)
//         std::cout << "马达[" << _port << "]当前PWM:" << _pwm * _zhengfan << std::endl;
//     else
//         std::cout << "PWM数值输入错误" << std::endl;
// }
// void Motor::setZhengfan(int zhengfan)
// {
//     std::cout << "马达[" << _port << "]当前正反:";
//     if (_zhengfan == 1)
//         std::cout << "正转" << std::endl;
//     else if (_zhengfan == -1)
//         std::cout << "反转" << std::endl;
//     else
//         std::cout << "正反数值输入错误" << std::endl;
// }
// void Motor::setGear(int gear)
// {
//     std::cout << "马达[" << _port << "]当前齿轮:";
//     if (_gear == 0)
//         std::cout << "红齿轮" << std::endl;
//     else if (_gear == 1)
//         std::cout << "绿齿轮" << std::endl;
//     else if (_gear == 2)
//         std::cout << "蓝齿轮" << std::endl;
//     else
//         std::cout << "齿轮数值输入错误" << std::endl;
// }
// void Motor::getGear()
// {
//     std::cout << "马达[" << _port << "]当前齿轮:";
//     if (_gear == 0)
//         std::cout << "红齿轮" << std::endl;
//     else if (_gear == 1)
//         std::cout << "绿齿轮" << std::endl;
//     else if (_gear == 2)
//         std::cout << "蓝齿轮" << std::endl;
//     else
//         std::cout << "齿轮数值输入错误" << std::endl;
// }
// int Motor::getPwm()
// {
//     return _pwm * _zhengfan;
// }
// int Motor::getPort()
// {
//     return _port;
// }