#pragma once
#include <iostream>
class Motor
{
  public:
    Motor(int port, int pan, int gear);
    ~Motor();

    /**
     * @brief 显示齿轮正反
     * 
     */
    void pan();
    void port();

  private:
    int _port;     //端口号
    int _pan = 1;  //正为1,反为-1
    int _gear = 1; //0为红,1为绿,2为蓝
};