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
    Motor(int port, int PositiveAndNegative, int gear) : _port(port), _PositiveAndNegative(PositiveAndNegative), _gear(gear)
    {
        std::cout << "马达[" << _port << "]构造成功!" << std::endl;
        std::cout << "正反: ";
        if (_PositiveAndNegative == 1)
            std::cout << "正";
        else if (_PositiveAndNegative == -1)
            std::cout << "反";
        else if (_gear < -1 || _gear > 1)
            std::cout << "输入错误!";
        std::cout << ", 齿轮: ";
        if (_gear == 0)
            std::cout << "红齿轮";
        else if (_gear == 1)
            std::cout << "绿齿轮";
        else if (_gear == 2)
            std::cout << "蓝齿轮";
        else if (_gear < 0 || _gear > 2)
            std::cout << "输入错误!";
        std::cout << std::endl;
    }
    ~Motor()
    {
        std::cout << "马达[" << _port << "]删除成功!" << std::endl;
    }
    void GetPort()
    {
        std::cout << "马达[" << _port << "]当前端口: " << _port << std::endl;
    }
    void GetPositiveAndNegative()
    {
        std::cout << "马达[" << _port << "]当前正反: ";
        if (_PositiveAndNegative == 1)
            std::cout << "正";
        else if (_PositiveAndNegative == -1)
            std::cout << "反";
        else if (_gear < 0 || _gear > 2)
            std::cout << "输入错误!";
        std::cout << std::endl;
    }
    void GetGear()
    {
        std::cout << "马达[" << _port << "]当前齿轮: ";
        if (_gear == 0)
            std::cout << "红齿轮";
        else if (_gear == 1)
            std::cout << "绿齿轮";
        else if (_gear == 2)
            std::cout << "蓝齿轮";
        else if (_gear < 0 || _gear > 2)
            std::cout << "输入错误!";
        std::cout << std::endl;
    }

  private:
    int _port = 1;
    int _PositiveAndNegative = 1;
    int _gear = 1;
};
