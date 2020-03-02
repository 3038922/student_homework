#include "publicAPI.hpp"
#include <iostream>
#include <windows.h>

class fish
{

  public:
    fish(std::string a, std::string b) : _name(a), _color(b)
    {
        std::cout << "fish类,初始化成功" << std::endl;
    }
    ~fish()
    {
        std::cout << "fish类,删除成功" << std::endl;
    }
    void ShowName()
    {
        std::cout << "我是" << _name << std::endl;
    }
    void ShowType()
    {
        std::cout << _name << "是" << _color << std::endl;
    }

  private:
    std::string _name, _color;
};
int main()
{
    system("chcp 65001");
    fish w("周宇涵", "黄色");
    fish g("鱼", "红色");
    w.ShowName();
    g.ShowName();
    w.ShowType();
    g.ShowType();
}
