#include "../include/Motor.hpp"
#include <array>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <vector>
#include <windows.h>

using namespace std;
class father
{
  public:
    father(std::string faname) : _faname(faname)
    {
    }
    void ia()
    {
        std::cout << "父亲叫:" << _faname << std::endl;
    }

  private:
    const std::string _faname;
};
class daughter
{
  public:
    daughter(std::string daname, int value_birth_month, int value_birth_date, int value_daughter_gold) : _daname(daname), _value_birth_month(value_birth_month), _value_birth_date(value_birth_date), _value_daughter_gold(value_daughter_gold)
    {
    }
    void ia()
    {
        int choice, temp1, temp2, temp3, temp4;
        std::array<int, 5> value_array_baseinfo;
        std::array<std::string, 5> value_array_baseinfo_names = {"体力", "智力", "魅力", "道德", "气质"};
        std::string value_daughter_constell;
        std::string constell_names[12][2] = {
            {"山羊座", "水瓶座"},
            {"水瓶座", "双鱼座"},
            {"双鱼座", "白羊座"},
            {"白羊座", "金牛座"},
            {"金牛座", "双子座"},
            {"双子座", "巨蟹座"},
            {"巨蟹座", "狮子座"},
            {"狮子座", "处女座"},
            {"处女座", "天秤座"},
            {"天秤座", "天蝎座"},
            {"天蝎座", "射手座"},
            {"射手座", "山羊座"},
        };
        int constell_dates[12] = {20, 19, 21, 20, 21, 22, 23, 23, 23, 24, 23, 22};
        value_daughter_constell = constell_names[_value_birth_month - 1][_value_birth_date / constell_dates[_value_birth_month - 1]];
        std::cout << "女儿叫:" << _daname << "\t生日月份为:" << _value_birth_month << "\t生日日期为:" << _value_birth_date << "\t星座为:" << value_daughter_constell << std::endl;
        if (value_daughter_constell == "白羊座")
        {
            value_array_baseinfo[0] = 80;
            value_array_baseinfo[1] = 15;
            value_array_baseinfo[2] = 15;
            value_array_baseinfo[3] = 15;
            value_array_baseinfo[4] = 21;
        }
        else if (value_daughter_constell == "金牛座")
        {
            value_array_baseinfo[0] = 46;
            value_array_baseinfo[1] = 30;
            value_array_baseinfo[2] = 28;
            value_array_baseinfo[3] = 26;
            value_array_baseinfo[4] = 23;
        }
        else if (value_daughter_constell == "双子座")
        {
            value_array_baseinfo[0] = 50;
            value_array_baseinfo[1] = 35;
            value_array_baseinfo[2] = 23;
            value_array_baseinfo[3] = 40;
            value_array_baseinfo[4] = 50;
        }
        else if (value_daughter_constell == "巨蟹座")
        {
            value_array_baseinfo[0] = 40;
            value_array_baseinfo[1] = 31;
            value_array_baseinfo[2] = 33;
            value_array_baseinfo[3] = 70;
            value_array_baseinfo[4] = 40;
        }
        else if (value_daughter_constell == "狮子座")
        {
            value_array_baseinfo[0] = 85;
            value_array_baseinfo[1] = 9;
            value_array_baseinfo[2] = 11;
            value_array_baseinfo[3] = 20;
            value_array_baseinfo[4] = 30;
        }
        else if (value_daughter_constell == "处女座")
        {
            value_array_baseinfo[0] = 35;
            value_array_baseinfo[1] = 28;
            value_array_baseinfo[2] = 36;
            value_array_baseinfo[3] = 29;
            value_array_baseinfo[4] = 48;
        }
        else if (value_daughter_constell == "天秤座")
        {
            value_array_baseinfo[0] = 42;
            value_array_baseinfo[1] = 33;
            value_array_baseinfo[2] = 25;
            value_array_baseinfo[3] = 67;
            value_array_baseinfo[4] = 38;
        }
        else if (value_daughter_constell == "天蝎座")
        {
            value_array_baseinfo[0] = 50;
            value_array_baseinfo[1] = 25;
            value_array_baseinfo[2] = 40;
            value_array_baseinfo[3] = 48;
            value_array_baseinfo[4] = 21;
        }
        else if (value_daughter_constell == "射手座")
        {
            value_array_baseinfo[0] = 57;
            value_array_baseinfo[1] = 31;
            value_array_baseinfo[2] = 15;
            value_array_baseinfo[3] = 27;
            value_array_baseinfo[4] = 33;
        }
        else if (value_daughter_constell == "山羊座")
        {
            value_array_baseinfo[0] = 56;
            value_array_baseinfo[1] = 21;
            value_array_baseinfo[2] = 16;
            value_array_baseinfo[3] = 49;
            value_array_baseinfo[4] = 50;
        }
        else if (value_daughter_constell == "水瓶座")
        {
            value_array_baseinfo[0] = 43;
            value_array_baseinfo[1] = 43;
            value_array_baseinfo[2] = 20;
            value_array_baseinfo[3] = 12;
            value_array_baseinfo[4] = 69;
        }
        else if (value_daughter_constell == "双鱼座")
        {
            value_array_baseinfo[0] = 41;
            value_array_baseinfo[1] = 21;
            value_array_baseinfo[2] = 29;
            value_array_baseinfo[3] = 16;
            value_array_baseinfo[4] = 85;
        }
        for (int year = 1659; year <= 1659 + 7; year++)
        {
            for (int month = (year == 1659) ? 6 : 1; month <= 12; month++)
            {
                if (month == _value_birth_month)
                {
                    std::cout << "本月是" << _daname << "的生日" << std::endl;
                }
                std::cout << "\n1.查看状态\n2.安排行程\n3.亲自谈话\n4.存档\n5.读档" << std::endl;
                std::cout << "请选择:";
                std::cin >> choice;
                switch (choice)
                {
                    case 1:
                        std::cout << "女儿叫:" << _daname << "\n生日月份为:" << _value_birth_month << "\n生日日期为:" << _value_birth_date << "\n星座为:" << value_daughter_constell << "\n金币有:" << _value_daughter_gold << std::endl;
                        std::cout << std::left;
                        for (int i = 0; i < 5; i++)
                        {
                            std::cout << value_array_baseinfo_names[i] << ":" << setw(2) << value_array_baseinfo[i];
                            int soildCount = value_array_baseinfo[i] / 10;
                            for (int j = 0; j < 10; j++)
                            {
                                if (j < soildCount)
                                {
                                    std::cout << "■";
                                }
                                else
                                {
                                    std::cout << "□";
                                }
                            }
                            std::cout << std::endl;
                        }
                        break;
                    case 2:
                        for (int i = 0; i < 3; i++)
                        {
                            std::string month_parts[] = {"上旬", "中旬", "下旬"};
                            std::cout << "--" << month << "月 --" << month_parts[i] << std::endl;
                            std::cout << "1.学习武艺\n2.上私塾\n3.学习礼法\n4.出城修行\n5.打工赚钱" << std::endl;
                            std::cout << "请选择:";
                            std::cin >> choice;
                            srand(time(NULL));
                            if (choice == 1)
                            {
                                value_array_baseinfo[0] += temp1 = rand() % 11;
                                value_array_baseinfo[2] += temp2 = rand() % 11;
                                _value_daughter_gold -= temp3 = rand() % 51;
                                std::cout << "学习张无忌好榜样!" << std::endl;
                                std::cout << "体力+" << temp1 << ",魅力+" << temp2 << ",金钱-" << temp3 << std::endl;
                            }
                            else if (choice == 5)
                            {
                                _value_daughter_gold += temp1 = rand() % 101;
                                std::cout << "通过努力打工,赚到了:" << temp1 << "个金币!" << std::endl;
                            }
                            else if (choice == 2)
                            {
                                value_array_baseinfo[1] += temp1 = rand() % 11;
                                value_array_baseinfo[4] += temp2 = rand() % 11;
                                _value_daughter_gold -= temp3 = rand() % 121;
                                std::cout << "上完课后," << _daname << "智力+" << temp1 << ",气质+" << temp2 << "金钱-" << temp3 << std::endl;
                            }
                            else if (choice == 3)
                            {
                                value_array_baseinfo[3] += temp1 = rand() % 11;
                                _value_daughter_gold -= temp2 = rand() % 41;
                                std::cout << "学习完后," << _daname << "道德+" << temp1 << "金钱-" << temp2 << std::endl;
                            }
                            else if (choice == 4)
                            {
                                value_array_baseinfo[0] += temp1 = rand() % 11;
                                value_array_baseinfo[2] += temp2 = rand() % 11;
                                value_array_baseinfo[4] += temp3 = rand() % 11;
                                _value_daughter_gold -= temp4 = rand() % 251;
                                std::cout << _daname << "修行归来,体力+" << temp1 << ",魅力+" << temp2 << ",气质+" << temp3 << "金钱-" << temp4 << std::endl;
                            }
                            else
                            {
                                std::cout << "只能输入1-5之间的数!" << std::endl;
                            }
                        }
                        break;
                    case 3:
                        srand(time(NULL));
                        value_array_baseinfo[3] += temp4 = rand() % 11;
                        std::cout << "经过一番谈话," << _daname << "的道德+" << temp4 << std::endl;
                        break;
                    case 4:
                        std::cout << "此功能暂未开放,敬请期待!" << std::endl;
                        break;
                    case 5:
                        std::cout << "此功能暂未开放,敬请期待!" << std::endl;
                        break;
                    default:
                        std::cout << "只能选择1-5之间的数!" << std::endl;
                        break;
                }
            }
        }
        int sum = 0;
        for (int i = 0; i < 5; i++)
        {
            sum += value_array_baseinfo[i];
        }
        if (sum >= 2000)
        {
            std::cout << _daname << "登基为女王陛下!" << std::endl;
        }
        else if (sum >= 1800 && sum < 2000)
        {
            std::cout << _daname << "成为王妃!" << std::endl;
        }
        else if (sum >= 1600 && sum < 1800)
        {
            std::cout << _daname << "成为女将军!" << std::endl;
        }
        else if (sum >= 1200 && sum < 1600)
        {
            int maxValue = value_array_baseinfo[0];
            int maxIndex = 0;
            for (int i = 1; i < 5; i++)
            {
                if (maxValue < value_array_baseinfo[i])
                {
                    maxValue = value_array_baseinfo[i];
                    maxIndex = i;
                }
            }
            if ("道德" == value_array_baseinfo_names[maxIndex] && value_array_baseinfo[2] > value_array_baseinfo[4])
            {
                std::cout << _daname << "成为高级祭祀!" << std::endl;
            }
            else if ("智力" == value_array_baseinfo_names[maxIndex] && value_array_baseinfo[0] > value_array_baseinfo[1])
            {
                std::cout << _daname << "成为皇家学院总裁!" << std::endl;
            }
            else if ("气质" == value_array_baseinfo_names[maxIndex] && value_array_baseinfo[2] > value_array_baseinfo[0])
            {
                std::cout << _daname << "成为公主!" << std::endl;
            }
            else if ("体力" == value_array_baseinfo_names[maxIndex] && value_array_baseinfo[4] > value_array_baseinfo[2])
            {
                std::cout << _daname << "成为近卫骑士团长!" << std::endl;
            }
            else if ("魅力" == value_array_baseinfo_names[maxIndex] && value_array_baseinfo[4] > value_array_baseinfo[3])
            {
                std::cout << _daname << "成为国王的宠妃!" << std::endl;
            }
        }
        else if (sum < 1200)
        {
            std::cout << _daname << "成为平民!" << std::endl;
        }
    }

  private:
    const std::string _daname;
    int _value_birth_month;
    int _value_birth_date;
    int _value_daughter_gold;
};
class glass
{
  public:
    glass(int slp, std::string materials, std::string color) : _slp(slp), _materials(materials), _color(color)
    {
        std::cout << "glass类创建成功" << std::endl;
    }
    ~glass()
    {
        std::cout << "glass类删除成功" << std::endl;
    }
    void showslp()
    {
        std::cout << "glass镜片有" << _slp << "°" << std::endl;
    }
    void showmaterials()
    {
        std::cout << "glass是用" << _materials << "材料制成的" << std::endl;
    }
    void showcolor()
    {
        std::cout << "glass是" << _color << "的" << std::endl;
    }

  private:
    int _slp;
    const std::string _materials;
    const std::string _color;
};
int main()
{
    Motor a(1, 1, 1);
    a.getport();
    a.pan();
    a.gear();
    return 0;
}