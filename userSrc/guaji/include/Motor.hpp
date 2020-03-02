#pragma once
#include <iostream>
class Motor
{
  public:
    Motor(int port, int pan, int gear) : _port(port), _pan(pan), _gear(gear)
    {
        std::cout << _port << "号马达初始化成功" << std::endl;
    }
    ~Motor(){

    };
    void gear()
    {
        if (_gear == 0)
        {
            std::cout << _port << "号马达的齿轮为红齿轮" << std::endl;
        }
        else if (_gear == 1)
        {
            std::cout << _port << "号马达的齿轮为绿齿轮" << _gear << std::endl;
        }
        else if (_gear == 2)
        {
            std::cout << _port << "号马达的齿轮蓝红齿轮" << _gear << std::endl;
        }
        else if (_gear < 0 || _gear > 2)
        {
            std::cout << "没有该齿轮" << std::endl;
        }
    }
    void pan()
    {
        if (_pan == 1)
        {
            std::cout << _port << "号马达的正反为正" << std::endl;
        }
        else if (_pan == -1)
        {
            std::cout << _port << "号马达的正反为反" << std::endl;
        }
        else if (_pan > 1 || _pan < -1)
        {
            std::cout << "正反就两个数字,不要乱输" << std::endl;
        }
    }
    int getport()
    {
        return _port;
    }

  private:
    int _port;     //端口号
    int _pan = 1;  //正为1,反为-1
    int _gear = 1; //0为红,1为绿,2为蓝
};