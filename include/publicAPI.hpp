#pragma once
#include <iostream>
#include <string>
class Hero
{
  public:
    Hero(std::string name, std::string sex, int hp, int mp, int gongjili, int fangyuli) : _name(name), _sex(sex), _hp(hp), _mp(mp), _gongjili(gongjili), _fangyuli(fangyuli)
    {
        std::cout << name << " 初始化成功" << std::endl;
    }
    /**
     * @brief 显示血量
     * 
     */
    void showHp()
    {
        std::cout << _name << "当前血量" << _hp << std::endl;
    }
    void showMp()
    {
        std::cout << _name << "当前蓝量" << _mp << std::endl;
    }
    void attack(Hero *hero)
    {
        int zaochengdeshanghai = _gongjili / (1 + hero->_fangyuli * 0.09);
        std::cout << _name << " 攻击了 " << hero->_name << std::endl;
        std::cout << "造成了 " << zaochengdeshanghai << " 点伤害" << std::endl;
        hero->_hp -= zaochengdeshanghai;
        fanji(hero);
    }
    void fanji(Hero *hero)
    {
        int zaochengdeshanghai = hero->_gongjili / (1 + _fangyuli * 0.05) / 2;
        std::cout << hero->_name << " 反击了 " << _name << std::endl;
        std::cout << "造成了 " << zaochengdeshanghai << " 点伤害" << std::endl;
        _hp -= zaochengdeshanghai;
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
    const std::string _name;
    const std::string _sex;
    int _hp = 0;
    int _mp = 0;
    int _gongjili = 0;
    int _fangyuli = 0;
};

class Constell
{

  public:
    Constell(int _year, int _month, int _day) : _year(_year), _month(_month), _day(_day)
    {
        if (_year >= 1900 && _year <= 3000 && _month >= 1 && _month <= 12 && _day >= 1 && _day <= 31)
        {
            if ((_year % 4 == 0 && _year % 100 != 0) || _year % 400 == 0)
            {
                if (_month == 2 && _day > 28)
                {
                    std::cout << _year << "年2月只有28天！请重新输入" << std::endl;
                    return;
                }
                else
                    _nowConste = _conste[_month - 1][_day / _conste1[_month - 1]];
            }
            else
                _nowConste = _conste[_month - 1][_day / _conste1[_month - 1]];
        }
        else
        {
            std::cout << "请输入正确日期！" << std::endl;
            return;
        }
    }
    ~Constell() {}
    std::string getConstell()
    {
        return _nowConste;
    }
    std::string getData()
    {
        return std::to_string(_year) + "-" + std::to_string(_month) + "-" + std::to_string(_day);
    }

  private:
    int _year, _month, _day;
    std::string _nowConste;
    std::string _conste[12][2] = {
        {"摩羯座", "水瓶座"}, //12-1
        {"水瓶座", "双鱼座"}, //1-2
        {"双鱼座", "白羊座"}, //2-3
        {"白羊座", "金牛座"}, //3-4
        {"金牛座", "双子座"}, //4-5
        {"双子座", "巨蟹座"}, //5-6
        {"巨蟹座", "狮子座"}, //6-7
        {"狮子座", "处女座"}, //7-8
        {"处女座", "天秤座"}, //8-9
        {"天秤座", "天蝎座"}, //9-10
        {"天蝎座", "射手座"}, //10-11
        {"射手座", "摩羯座"}  //11-12
    };
    int _conste1[12] = {20, 19, 21, 20, 21, 22, 23, 23, 23, 24, 23, 22};
};