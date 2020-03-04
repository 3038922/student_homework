#pragma once
#include <iostream>
#include <random>
#include <time.h>
#include <windows.h>
class Motor
{
  public:
    /**
   * @brief 马达类
   * 
   * @param port 端口(1 - 21)
   * @param PositiveAndNegative 正反(-1 - 1, -1:反 , 1:正)
   * @param gear 齿轮(0 - 2, 0:红齿轮, 1:绿齿轮, 2:蓝齿轮)
   */
    Motor(int, int, int);
    ~Motor();
    void GetPort();
    void GetPositiveAndNegative();
    void GetGear();

  private:
    int _port = 1;
    int _PositiveAndNegative = 1;
    int _gear = 1;
};