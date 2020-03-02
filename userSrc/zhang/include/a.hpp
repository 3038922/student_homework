#pragma once
#include <iostream>
class motor
{
  public:
    /**
   * @brief VEX V5马达控制类函数
   * 
   * @param port 马达端口号 1-21
   * @param zhengfan 设置马达正反 1正(顺时针转)-1反(逆时针转)
   * @param gear 0红齿轮 1绿齿轮 2蓝齿轮
   */
    motor(int port, int zhengfan, int gear) : _port(port), _zhengfan(zhengfan), _gear(gear)
    {
        std::cout << "马达[" << port << "] 怎么转:";
        if (zhengfan == 1)
            std::cout << "顺时针转";
        else if (zhengfan == -1)
            std::cout << "逆时针转";
        else
            std::cout << "正反数值输入错误" << std::endl;
        std::cout << " 齿轮颜色:";
        if (gear == 0)
            std::cout << " 红齿轮" << std::endl;
        else if (gear == 1)
            std::cout << " 绿齿轮" << std::endl;
        else if (gear == 2)
            std::cout << " 蓝齿轮" << std::endl;
        else
            std::cout << "齿轮数值输入错误" << std::endl;
    }
    void showport()
    {
        std::cout << "此马达端口号为:" << _port << std::endl;
    }
    void showzhengfan()
    {
        std::cout << _port << "号马达为:" << _zhengfan << std::endl;
    }
    void showgear()
    {
        std::cout << _port << "号马达齿轮为:" << _gear << std::endl;
    }

  private:
    int _port;
    int _zhengfan;
    int _gear;
};