#pragma once
#include "/motor.hpp"
#include <Windows.h>
#include <array>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <random>
#include <string>
#include <vector>

void suiji()
{
    //生成 0 到 9 之间（包含）均匀分布的随机数
    std::uniform_real_distribution<double> u(0, 1);
    std::default_random_engine e; // 生成无符号随机整数
    for (size_t i = 0; i < 10; i++)
        // 将 u 作为随机数源
        // 每个调用返回在指定范围内并服从均匀分布的值
        std::cout << u(e) << " ";
    std::cout << std::endl;
}
void suiji2()
{
    std::default_random_engine e; // 生成随机无符号数
    for (size_t i = 0; i < 10; i++)
        // e() “调用”对象来生成下一个随机数
        std::cout << e() << std::endl;
}
int suiji(int a, int b)
{
    std::uniform_real_distribution<double> u(a, b);
    std::default_random_engine e;
    return u(e);
}
class Chicken
{
  public:
    Chicken(std::string name, std::string color) : _name(name), _color(color)
    {
        std::cout << "chicken类初始化成功" << std::endl;
    }
    ~Chicken() {}
    void showname()
    {
        std::cout << "我叫:" << _name << std::endl;
    }
    void showcolor()
    {
        std::cout << _name << "的颜色是:" << _color << std::endl;
    }

  private:
    std::string _name, _color;
};
class hero
{
  public:
    hero(std::string name, std::string sex, int hp, int mp, int gongjili, int fangyuli) : _name(name), _sex(sex), _hp(hp), _mp(mp), _gongjili(gongjili), _fangyuli(fangyuli)
    {
        std::cout << name << " 初始化成功" << std::endl;
    }
    void showHp()
    {
        std::cout << _name << "当前血量" << _hp << std::endl;
    }
    void showMp()
    {
        std::cout << _name << "当前蓝量" << _mp << std::endl;
    }
    void attack(hero *hero)
    {
        int zaochengdeshanghai = _gongjili / (1 + hero->_fangyuli * suiji(0, 0.8));
        std::cout << _name << " 攻击了 " << hero->_name << std::endl;
        std::cout << "造成了 " << zaochengdeshanghai << " 点伤害" << std::endl;
        hero->_hp -= zaochengdeshanghai;
        fanji(hero);
    }
    /**
     * @brief 返回当前血量
     * 
     * @return int 当前的血量
     */
    int hp()
    {
        return _hp;
    }

  private:
    void fanji(hero *hero)
    {
        int zaochengdeshanghai = hero->_gongjili / (1 + _fangyuli * suiji(0, 0.8)) / 2;
        std::cout << hero->_name << " 反击了 " << _name << std::endl;
        std::cout << "造成了 " << zaochengdeshanghai << " 点伤害" << std::endl;
        _hp -= zaochengdeshanghai;
    }
    double suiji(double a, double b)
    {
        std::uniform_real_distribution<double> u(a, b);
        std::default_random_engine e;
        return u(e);
    }
    const std::string _name;
    const std::string _sex;
    int _hp = 0;
    int _mp = 0;
    int _gongjili = 0;
    int _fangyuli = 0;
};