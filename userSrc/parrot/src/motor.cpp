#include "motor.hpp"
Motor::Motor(int port, int zhengfan, int gear) : _port(port), _zhengfan(zhengfan), _gear(gear)

                                                                                       void Motor::setzhengfan(int zhengfan)

{
    void Motor::setgear(int gear) if (gear == 0)
    {
        std::cout << "红齿轮" << std::endl;
    }
    else if (gear == 1)
    {
        std::cout << "绿齿轮" << std::endl;
    }
    else if (gear == 2)
    {
        std::cout << "蓝齿轮" << std::endl;
    }
    void Motor::getgear() if (gear == 0)
    {
        std::cout << _gear << "号马达颜色红" << std::endl;
    }
    else if (gear == 1)
    {
        std::cout << _gear << "号马达颜色绿" << std::endl;
    }
    else if (gear == 2)
    {
        std::cout << _gear << "号马达颜色蓝" << std::endl;
    }
    else if (_gear < 0 || _gear > 2)
    {
        std::cout << "无" << std::endl;
    }
}
