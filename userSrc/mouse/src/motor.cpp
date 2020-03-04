#include "motor.hpp"
/**
   * @brief VEX V5马达控制类函数
   * 
   * @param port 马达的端口号 1-21
   * @param zhengfan 设置马达的正反 1正 -1反
   * @param gear //0 红齿轮  1 绿齿轮 2 蓝齿轮
   */
Motor::Motor(int port, int zhengfan, int gear)
{
}
Motor::~Motor()
{
}

void Motor::set(int pwm)
{
}

/**
     * @brief 设置马达正转还是反转
     * 
     * @param zhengfan 正转填1 反转填-1 
     */
void Motor::setZhengfan(int zhengfan) {}
/**
     * @brief 设置当前马达的齿轮比
     * 
     * @param gear 0红齿轮 1 绿齿轮 2 蓝齿轮
     */
void Motor::setGear(int gear) {}
/**
     * @brief 获取当前齿轮的颜色
     * 
     */

/*******************以下是获取类成员函数**********************/
void Motor::getGear() {}
/**
     * @brief 获取当前的PWM值
     * 
     * @return int 返回当前的PWM值 +-127
     */
int Motor::getPwm() {}
/**
     * @brief 获取当前马达的端口
     * 
     * @return int 返回马达的端口好 1-21
     */
int Motor::getPort() {}