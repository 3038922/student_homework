#pragma once
#include <iostream>
#include <string>
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