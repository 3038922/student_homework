#pragma once
#include <iostream>
class Motor
{
  public:
    Motor(int prot, int zhengfan, int gear);
    ~Motor();
    void showprot()
    {
        std::cout << "马达端口为:" << _prot << "号" << std::endl;
    }
    void set(int pwm)
    {
        std::cout << "马达速度为:" << pwm * _zhengfan << std::endl;
    }

  private:
    int _prot = 1;
    int _zhengfan = 2;
    int _gear = 1;
};