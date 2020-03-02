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
    Motor(int port, int zhengfan, int gear) : _port(port), _zhengfan(zhengfan), _gear(gear)
    {
        std::cout << "马达[" << port << "] 正反:" << zhengfan;
        if (gear == 0)
            std::cout << " 红齿轮" << std::endl;
        else if (gear == 1)
            std::cout << " 绿齿轮" << std::endl;
        else if (gear == 2)
            std::cout << " 蓝齿轮" << std::endl;
        else
            std::cout << "齿轮数值输入错误" << std::endl;
    }
    ~Motor()
    {
        std::cout << "马达类删除成功" << std::endl;
    }
    void set(int pwm)
    {
        std::cout << "马达[" << _port << "]当前PWM:" << pwm * _zhengfan << std::endl;
    }
    int getPort()
    {
        return _port;
    }

  private:
    int _port;         //端口
    int _zhengfan = 1; //1 正 -1 反
    int _gear = 1;     //0 红齿轮 1 绿齿轮 2 蓝齿轮
};