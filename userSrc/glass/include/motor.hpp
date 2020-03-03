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
    /**
     * @brief 显示齿轮
     * 
     */
    void gear()
    {
        if (_gear == 0)
        {
            std::cout << _port << "号的齿轮是红齿轮" << std::endl;
        }
        else if (_gear == 1)
        {
            std::cout << _port << "号的齿轮是绿齿轮" << std::endl;
        }
        else if (_gear == 2)
        {
            std::cout << _port << "号的齿轮是蓝齿轮" << std::endl;
        }
        else if (_gear < 0 || _gear > 2)
        {
            std::cout << "没有该齿轮" << std::endl;
        }
    }
    /**
     * @brief 显示齿轮正反
     * 
     */
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
            std::cout << "输两个数" << std::endl;
        }
    }
    /**
     * @brief 显示马达端口
     * 
     * @return int 
     */
    void getport()
    {
        std::cout << "马达端口为:" << _port << "号" << std::endl;
    }

  private:
    int _port;     //端口号
    int _pan = 1;  //正为1,反为-1
    int _gear = 1; //0为红,1为绿,2为蓝
};