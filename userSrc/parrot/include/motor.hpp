#pragma once
#include <iostream>
class Motor
{
  public:
    Motor(int port, int posneg,int gear);
    ~Motor();
    void protnum()
    {
        std::cout << "马达端口号：" << _port << std::endl;
    }
    void set(int pwm)
    {
        std::cout << "马达速度：" << _posneg << std::endl;
    }
    void gear()
{
  if (_gear == 0)
    {
        std::cout << _port << "红齿轮" << std::endl;
    }
  else if (_gear == 1)
    {
        std::cout << _port << "绿齿轮" << std::endl;
    }
  else if (_gear == 2)
    {
        std::cout << _port << "蓝齿轮" << std::endl;
    }


}
  private:
    int _port = 1,_posneg = 1,_gear = 1;

};