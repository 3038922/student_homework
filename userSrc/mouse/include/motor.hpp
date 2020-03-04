#pragma once
#include <iostream>
using namespace std;
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
    Motor(int port, int zhengfan, int gear, int pwm) : _duankou(port), _zhengfan(zhengfan), _gear(gear), _pwm(pwm)
    {
        cout << "端口号" << _port << "号马达初始化成功" << endl;
    }
    ~Motor();
    /*******************以下是设置类成员函数**********************/
    /**
     * @brief 设置马达PWM
     * 
     * @param pwm +-127
     */
    void set(int pwm)
    {
        cout << "马达速度为：" << _pwm << endl;
    }

    /**
     * @brief 设置马达正转还是反转
     * 
     * @param zhengfan 正转填1 反转填-1 
     */
    void setZhengfan(int zhengfan);
    {
        if (zhengfan == 1)
        {
            cout << "马达在正转" << endl;
        }
        else if (zhengfan == -1)
        {
            cout << "马达反转中" << endl;
        }
        else
        {
            cout << "你输入的是什么玩意？？？" << endl;
        }
    }
    /**
     * @brief 设置当前马达的齿轮比
     * 
     * @param gear 0红齿轮 1 绿齿轮 2 蓝齿轮
     */
    void setGear(int gear)
    {
        if (_gear == 0)
        {
            cout << _port << "号马达的齿轮为红齿轮" << endl;
        }
        else if (_gear == 1)
        {
            cout << _port << "号马达的齿轮为绿齿轮" << endl;
        }
        else if (_gear == 2)
        {
            cout << _port << "号马达的齿轮蓝红齿轮" << endl;
        }
        else if (_gear < 0 || _gear > 2)
        {
            cout << "没有该齿轮" << endl;
        }
    }
    /**
     * @brief 获取当前齿轮的颜色
     * 
     */

    /*******************以下是获取类成员函数**********************/

  private:
    int _duankou;      //端口
    int _zhengfan = 1; //1 正 -1 反
    int _gear = 1;     //0 红齿轮 1 绿齿轮 2 蓝齿轮
    int _pwm = 0;      //当前的PWM值
};