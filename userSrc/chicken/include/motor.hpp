#pragma once
#include <iostream>
class Motor
{
  public:
    Motor(int prot, int zhengfan, int gear);
    ~Motor();
    void showprot();
    void set(int pwm);

  private:
    int _prot = 1;
    int _zhengfan = 1;
    int _gear = 1;
};