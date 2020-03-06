#include "motor.hpp"
// Motor::Motor(int port, int pan, int gear) : _port(port), _pan(pan), _gear(gear)
// {
//     std::cout << _port << "号马达初始化成功" << std::endl;
// }
// Motor::~Motor(){};
// void Motor::gear()
// {
//     if (_gear == 0)
//     {
//         std::cout << _port << "号的齿轮是红齿轮" << std::endl;
//     }
//     else if (_gear == 1)
//     {
//         std::cout << _port << "号的齿轮是绿齿轮" << std::endl;
//     }
//     else if (_gear == 2)
//     {
//         std::cout << _port << "号的齿轮是蓝齿轮" << std::endl;
//     }
//     else if (_gear < 0 || _gear > 2)
//     {
//         std::cout << "没有该齿轮" << std::endl;
//     }
// }
// void Motor::pan()
// {
//     if (_pan == 1)
//     {
//         std::cout << _port << "号马达的正反为正" << std::endl;
//     }
//     else if (_pan == -1)
//     {
//         std::cout << _port << "号马达的正反为反" << std::endl;
//     }
//     else if (_pan > 1 || _pan < -1)
//     {
//         std::cout << "输两个数" << std::endl;
//     }
// }
// void Motor::port()
// {
//     std::cout << "马达端口为:" << _port << "号" << std::endl;
// };
/**
   * @brief VEX V5马达控制类函数
   * 
   * @param port 马达的端口号 1-21
   * @param zhengfan 设置马达的正反 1正 -1反
   * @param gear //0 红齿轮  1 绿齿轮 2 蓝齿轮
   */

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

/**
     * @brief 设置马达正转还是反转
     * 
     * @param zhengfan 正转填1 反转填-1 
     */
void Motor::setZhengfan(int zhengfan)
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
        td::cout << "马达" << _port << "号当前齿轮比:蓝齿轮" << std::endl;
    }
    else if (gear < 0 || gear > 2)
    {
        std::cout << "没有该齿轮" << std::endl;
    }
}
/**
     * @brief 设置当前马达的齿轮比
     * 
     * @param gear 0红齿轮 1 绿齿轮 2 蓝齿轮
     */
void Motor::setGear(int gear)
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
/**
     * @brief 获取当前齿轮的颜色
     * 
     */

/*******************以下是获取类成员函数**********************/
/**
     * @brief 获取当前的PWM值
     * 
     * @return int 返回当前的PWM值 +-127
     */
int Motor::getPwm()
{
    std::cout << _pwm + 127 * _zhengfan << std::endl;
    return 0;
}
/**
     * @brief 获取当前马达的端口
     * 
     * @return int 返回马达的端口好 1-21
     */
int Motor::getPort()
{
    std::cout << _port << std::endl;
    return 0;
}