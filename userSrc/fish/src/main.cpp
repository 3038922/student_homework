#include "motor.hpp"
/**
   * @brief VEX V5马达控制类函数
   * 
   * @param port 马达的端口号 1-21
   * @param zhengfan 设置马达的正反 1正 -1反
   * @param gear //0 红齿轮  1 绿齿轮 2 蓝齿轮
   */
Motor::Motor(int port, int zhengfan, int gear) : _port(port), _zhengfan(zhengfan), _gear(gear)
{
    std::cout << "马达类添加成功!" << std::endl;
}
Motor::~Motor()
{
    std::cout << "马达类删除成功!" << std::endl;
}

void Motor::set(int pwm)
{
    std::cout << "马达" << _port << "号当前PWM是:" << pwm * _zhengfan << std::endl;
}

/**
     * @brief 设置马达正转还是反转
     * 
     * @param zhengfan 正转填1 反转填-1 
     */
void Motor::setZhengfan(int zhengfan)
{
    if (zhengfan == 1)
    {
        std::cout << "马达" << _port << "号当前正转!" << std::endl;
    }
    else if (zhengfan == -1)
    {
        std::cout << "马达" << _port << "号当前反转!" << std::endl;
    }
    else if (zhengfan < -1 || zhengfan > 1)
    {
        std::cout << "输入错误!" << std::endl;
    }
}
/**
     * @brief 设置当前马达的齿轮比
     * 
     * @param gear 0红齿轮 1 绿齿轮 2 蓝齿轮
     */
void Motor::setGear(int gear)
{
    if (gear == 0)
    {
        std::cout << "马达" << _port << "号当前齿轮红色!" << std::endl;
    }
    else if (gear == 1)
    {
        std::cout << "马达" << _port << "号当前齿轮绿色!" << std::endl;
    }
    else if (gear == 2)
    {
        std::cout << "马达" << _port << "号当前齿轮蓝色!" << std::endl;
    }
    else
    {
        std::cout << "输入齿轮比错误!" << std::endl;
    }
}
/**
     * @brief 获取当前齿轮的颜色
     * 
     */

/*******************以下是获取类成员函数**********************/
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
    else
    {
        std::cout << "输入错误!没有这个齿轮!" << std::endl;
    }
}
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
