
#include "publicAPI.hpp"
#include <Windows.h>
#include <array>
#include <conio.h>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

class Parrot
{
  public:
    Parrot(std::string x, std::string y, std::string z, std::string a) : _name(x), _color(y), _weight(z), _wingspan(a)
    {
        std::cout << "Parrot类 已召唤!" << std::endl;
    }

    ~Parrot()
    {
        std::cout << "Parrot类 已收回!" << std::endl;
    }
    void showColor()
    {
        std::cout << _name << " 是 " << _color << std::endl;
    }
    void showName()
    {
        std::cout << "我: " << _name << std::endl;
    }
    void showWeight()
    {
        std::cout << " 是 " << _weight << "g" << std::endl;
    }
    void showLength()
    {
        std::cout << " 是 " << _length << "cm" << std::endl;
    }

  private: //私有的a
    std::string _name, _color;
};
int main(int argc, char *argv[])
{
    Parrot w("葵花凤头鹦鹉", "白色", "900", "45");
    Parrot g("黄蓝金刚鹦鹉", "蓝、黄色", "1300", "90");
    w.showName();
    g.showName();
    w.showColor();
    g.showColor();
    w.showWeight();
    g.showWeight();
    w.showLength();
    g.showLength();
    std::cout << "程序结束" << std::endl;
    return 0;
}
// using namespace std;
// int main()
// {

//     //父亲名字
//     string value_father_name;
//     //女儿名字
//     string value_daughter_name;
//     //女儿生日月份
//     int value_birth_month = 0;
//     //女儿生日日期
//     int value_birth_date = 0;
//     //女儿的星座
//     string value_daughter_constell;
//     //星座二维数组
//     string constell_names[12][2] = {
//         {"摩羯座", "水瓶座"}, //1月
//         {"水瓶座", "双鱼座"}, //2月
//         {"双鱼座", "白羊座"}, //3月
//         {"白羊座", "金牛座"}, //4月
//         {"金牛座", "双子座"}, //5月
//         {"双子座", "巨蟹座"}, //6月
//         {"巨蟹座", "狮子座"}, //7月
//         {"狮子座", "处女座"}, //8月
//         {"处女座", "天秤座"}, //9月
//         {"天秤座", "天蝎座"}, //10月
//         {"天蝎座", "射手座"}, //11月
//         {"射手座", "摩羯座"}, //12月
//     };
//     //跨星座日期
//     int constell_dates[]{20, 19, 21, 20, 21, 22, 23, 23, 23, 24, 23, 22};

//     cout << constell_names[value_birth_month - 1][value_birth_date / constell_dates[value_birth_month - 1]] << endl;
//     return 0;
// }