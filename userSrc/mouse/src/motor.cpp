#include "motor.hpp"
#include <iostream>
using namespace std;
/**
   * @brief VEX V5马达控制类函数
   * 
   * @param port 马达的端口号 1-21
   * @param zhengfan 设置马达的正反 1正 -1反
//    * @param gear //0 红齿轮  1 绿齿轮 2 蓝齿轮
//    */
// Motor::Motor(int port, int zhengfan, int gear)
// {
// }
// Motor::~Motor()
// {
// }

// void Motor::set(int pwm)
// {
// }

// /**
//      * @brief 设置马达正转还是反转
//      *
//      * @param zhengfan 正转填1 反转填-1
//      */
// void Motor::setZhengfan(int zhengfan) {}
// /**
//      * @brief 设置当前马达的齿轮比
//      *
//      * @param gear 0红齿轮 1 绿齿轮 2 蓝齿轮
//      */
// void Motor::setGear(int gear) {}
// /**
//      * @brief 获取当前齿轮的颜色
//      *
//      */

// /*******************以下是获取类成员函数**********************/
// void Motor::getGear() {}
// /**
//      * @brief 获取当前的PWM值
//      *
//      * @return int 返回当前的PWM值 +-127
//      */
// int Motor::getPwm() {}
// /**
//      * @brief 获取当前马达的端口
//      *
//      * @return int 返回马达的端口好 1-21
//      */
// int Motor::getPort() {}
Motor::Motor(int port, int zhengfan, int gear) : _port(port), _zhengfan(zhengfan), _gear(gear)
{
    cout << "检测到马达" << port << "号,旋转方向:" << zhengfan << "齿轮为:";
    setGear(gear);
    cout << "构造成功!" << endl;
}
Motor::~Motor()
{
    cout << "马达" << _port << "删除成功!" << endl;
}
/*******************以下是设置类成员函数**********************/
/**
     * @brief 设置马达PWM
     * 
     * @param pwm +-127
     */

void Motor::set(int pwm)
{
    _pwm = pwm;
    cout << "您设定的马达速度为:" << _pwm * _zhengfan << endl;
}
/**
     * @brief 设置马达正转还是反转
     * 
     * @param zhengfan 正转填1 反转填-1 
     */
void Motor::setZhengfan(int zhengfan)
{
    _zhengfan = zhengfan;
}
/**
     * @brief 设置当前马达的齿轮比
     * 
     * @param gear 0红齿轮 1 绿齿轮 2 蓝齿轮
     */
void Motor::setGear(int gear)
{
    switch (gear)
    {
        case 0:
            cout << "红齿轮";
            break;
        case 1:
            cout << "绿齿轮";
            break;
        case 2:
            cout << "蓝齿轮";
            break;
        default:
            cout << "没有此类齿轮";
            break;
    }
}
/*******************以下是获取类成员函数**********************/
/**
     * @brief 获取当前齿轮的颜色
     * 
     */
void Motor::getGear()
{
    std::cout << "检测到端口" << _port << "的齿轮颜色为:";
    switch (_gear)
    {
        case 0:
            cout << "红色";
            break;
        case 1:
            cout << "绿色";
            break;
        case 2:
            cout << "蓝色";
            break;
        default:
            cout << "没有此类颜色";
            break;
    }
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