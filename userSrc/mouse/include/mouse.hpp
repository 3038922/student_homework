#pragma once
#include "publicAPI.hpp"
#include <iostream>

using namespace std;

class motor
{
  public:
    motor(int mddk, int zhengfan, int cl);
    ~motor();
    void duankou()
    {
        cout << "马达端口为:" << mddk << "号" << endl;
    }
    void chilun()
    {
        if (cl == 0)
        {
            cout << "马达装了红齿轮" << endl;
        }
        else if (cl == 1)
        {
            cout << "马达装了绿齿轮" << endl;
        }
        else if (cl == 2)
        {
            cout << "马达装了蓝齿轮" << endl;
        }
        else
        {
            cout << "只有三种齿轮" << endl;
        }
    }

    void sudu(int pwm)
    {
        cout << "马达速度为:" << pwm * zhengfan << endl;
    }

  private:
    int mddk = 1;
    int zhengfan = 1;
    int cl = 1;
};