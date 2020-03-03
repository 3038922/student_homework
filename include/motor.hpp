#pragma once
#include <iostream>
class Motor
{
  public:
    /**
   * @brief VEX V5马达控制类函数
   * 
   * @param port 马达的端口号 1-21
   * @param zhengfan 设置马达的正反 1正 -1反
   * @param gear //0 红齿轮  1 绿齿轮 2 蓝齿轮
   */
    Motor(int port, int zhengfan, int gear);
    ~Motor();
    /*******************以下是设置类成员函数**********************/
    /**
     * @brief 设置马达PWM
     * 
     * @param pwm +-127
     */
    void set(int pwm);

    /**
     * @brief 设置马达正转还是反转
     * 
     * @param zhengfan 正转填1 反转填-1 
     */
    void setZhengfan(int zhengfan);
    /**
     * @brief 设置当前马达的齿轮比
     * 
     * @param gear 0红齿轮 1 绿齿轮 2 蓝齿轮
     */
    void setGear(int gear);
    /**
     * @brief 获取当前齿轮的颜色
     * 
     */

    /*******************以下是获取类成员函数**********************/
    void getGear();
    /**
     * @brief 获取当前的PWM值
     * 
     * @return int 返回当前的PWM值 +-127
     */
    int getPwm();
    /**
     * @brief 获取当前马达的端口
     * 
     * @return int 返回马达的端口好 1-21
     */
    int getPort();

  private:
    int _port;         //端口
    int _zhengfan = 1; //1 正 -1 反
    int _gear = 1;     //0 红齿轮 1 绿齿轮 2 蓝齿轮
    int _pwm = 0;      //当前的PWM值
};