/* 
     ______________________                      ___                             ____         ___
    /  __________________  \                    |   |                     ______/   /______  /   /____________
   /  /                  \  \                   |   |                    |   ___________   |/    ___________  |
   |  | ___  ___  ___  ___|  |                  |   |_____               |  |           |  ||___/           | |
   |  | \  \/  /  \  \/  /|  |                  |    _____|              |  |———————————|  |      ___       | |
   |  | /__/\__\  /__/\__\|  |                  |   |                    |  ————————————   |      \  \      | |
   |  |                   |  |                  |   |                    |  |           |  |       \__\     | |
   |  |              ___  |  |                  |   |                    |  |           |  |             __ | |
   |  |              \  \ |  |       ___________|   |____________        |  |___________|  |             \ \| |
   |  |               \______|      |____________________________|       |_________________|              \___|         注：下面注释的。
*/
// #include <iostream>
// using namespace std;

// void swapp(int *&rp1, int *&rp2) //指针的引用
// {
//     cout << rp1 << "          " << rp2 << endl;
//     int *t;
//     t = rp1;
//     rp1 = rp2;
//     rp2 = t;
//     cout << rp1 << "          " << rp2 << endl;
//     cout << *rp1 << "          " << *rp2 << endl;
// }
// int main()
// {
//     int a = 1, b = 2;
//     int *p1 = &a;
//     int *p2 = &b;
//     swapp(p1, p2);
//     return 0; //执行该函数以后p1指向b,p2指向a了
// }
// #include <iostream>
// #include <windows.h>
// using namespace std;
// void dbsjx(int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n - i - 1; j++)
//         {
//             cout << " ";
//         }
//         for (int k = 0; k < 2 * i + 1; k++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
// }
// void zjsjx(int c)
// {
//     for (int i = 0; i < c; i++)
//     {
//         for (int k = 0; k < 2 * i + 1; k++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
// }
// int jf(int a, int b)
// {
//     return a + b;
// }
// double xsjf(double a, double b)
// {
//     return a + b;
// }
// string lsgc(string laoshu)
// {
//     if (laoshu == "老鼠")
//     {
//         return "老鼠肉";
//     }
//     else
//     {
//         return "只加工老鼠肉";
//     }
// }
// void jh(int *a, int *b)
// {
//     int linshi = *b;
//     *b = *a;
//     *a = linshi;
// }
// void play(string name, string zhuangbei, string zhiye, string jn1, string jn2, string jn3, int lever, int hp, int gongjili, int hujiazhi, int jinbi)
// {
//     std::cout << "姓名:" << name << endl
//               << "装备:" << zhuangbei << endl
//               << "职业:" << zhiye << endl
//               << zhiye << "技能一" << jn1 << endl
//               << zhiye << "技能二" << jn2 << endl
//               << zhiye << "技能三" << jn3 << endl
//               << "等级" << lever << endl
//               << "攻击力:" << gongjili * lever << endl
//               << "防御力:" << hujiazhi * lever << endl
//               << "金钱数:" << jinbi << endl;
// }
// int main()
// {
// int a = 1000;
// int b = 2000;
//system("chcp 65001");
// system("cls");
// play("蔡徐坤", "篮球", "射手", "篮球投射", "鸡你太美", "篮球乱射", 6666, 6666, 6666, 6666, 6666);
//std::cout << std::endl;
//play("古天乐", "麻痹戒指", "战士", "爆装备", "元宝回收", "元宝换钱", 999, 999, 999, 999, 999);
//cout << jf(1, 6) << endl;
//cout << xsjf(3.14, 6.28) << endl;
//cout << lsgc("老鼠") << endl;
//jh(&a, &b);
//cout << "交换后的值是" << a << "     " << b;
//zjsjx(5);
//dbsjx(5);
//cout << endl;
//zjsjx(5);
//return 0;
//while (0)
//{
//std::string *a = new std::string("点一下玩一年");
//Sleep(10);
//}
// }
// #include <array>
// #include <cstdlib>
// #include <ctime>
// #include <iomanip>

#include "../include/mouse.hpp"

// #include <vector>
class pikaqiu
{
  public:
    pikaqiu(string m, string y) : mz(m), ys(y)
    {
        std::cout << "皮卡丘召唤成功" << endl;
    }
    ~pikaqiu()
    {
        cout << "皮卡丘回精灵球睡觉去了" << endl;
    }
    void yanse()
    {
        cout << mz << " 是 " << ys << endl;
    }
    void mingzi()
    {
        std::cout << "我叫: " << mz << std::endl;
    }

  private:
    string mz, ys;
};
int main()
{
    pikaqiu w("黑化皮卡丘", "黑色");
    pikaqiu g("皮卡丘", "金色");
    w.mingzi();
    g.mingzi();
    w.yanse();
    g.yanse();
    system("chcp 65001");

    //     string fn;
    //     string nn;
    //     int month;
    //     int day;
    //     string constell;
    //     array<int, 5> baseinfo;
    //     array<string, 5> baseinfo_names = {"体力", "智力", "魅力", "道德", "气质"};
    //     int gold = 500;
    //     string constell_names[12][2] =
    //         {
    //             {"山羊座", "水瓶座"},
    //             {"水瓶座", "双鱼座"},
    //             {"双鱼座", "白羊座"},
    //             {"白羊座", "金牛座"},
    //             {"金牛座", "双子座"},
    //             {"双子座", "巨蟹座"},
    //             {"巨蟹座", "狮子座"},
    //             {"狮子座", "处女座"},
    //             {"处女座", "天秤座"},
    //             {"天秤座", "天蝎座"},
    //             {"天蝎座", "射手座"},
    //             {"射手座", "山羊座"},
    //         };

    //     int choice, temp1, temp2, temp3;

    //     cout << "父亲的姓名：";
    //     cin >> fn;
    //     cout << "女儿的姓名：";
    //     cin >> nn;
    //     cout << "女儿的生日（格式：月 日）：";
    //     cin >> month >> day;

    //     int constell_dates[]{20, 19, 21, 20, 21, 22, 23, 23, 23, 24, 23, 22};
    //     constell = constell_names[month - 1][day / constell_dates[month - 1]];

    //     cout << endl
    //          << "女儿的信息：" << endl;
    //     cout << "姓名：" << nn << endl;
    //     cout << "生日：1659-" << month << "-" << day << endl;
    //     cout << "星座：" << constell << endl;
    //     cout << "金币：" << gold << endl;

    //     if (constell == "白羊座")
    //     {

    //         baseinfo[0] = 80;
    //         baseinfo[1] = 18;
    //         baseinfo[2] = 18;
    //         baseinfo[3] = 28;
    //         baseinfo[4] = 14;
    //     }
    //     else if (constell == "金牛座")
    //     {
    //         baseinfo[0] = 65;
    //         baseinfo[1] = 30;
    //         baseinfo[2] = 28;
    //         baseinfo[3] = 35;
    //         baseinfo[4] = 20;
    //     }
    //     else if (constell == "双子座")
    //     {
    //         baseinfo[0] = 50;
    //         baseinfo[1] = 35;
    //         baseinfo[2] = 23;
    //         baseinfo[3] = 26;
    //         baseinfo[4] = 27;
    //     }

    //     else if (constell == "巨蟹座")
    //     {
    //         baseinfo[0] = 40;
    //         baseinfo[1] = 31;
    //         baseinfo[2] = 31;
    //         baseinfo[3] = 23;
    //         baseinfo[4] = 37;
    //     }
    //     else if (constell == "狮子座")
    //     {
    //         baseinfo[0] = 85;
    //         baseinfo[1] = 35;
    //         baseinfo[2] = 11;
    //         baseinfo[3] = 28;
    //         baseinfo[4] = 20;
    //     }
    //     else if (constell == "处女座")
    //     {
    //         baseinfo[0] = 35;
    //         baseinfo[1] = 28;
    //         baseinfo[2] = 36;
    //         baseinfo[3] = 29;
    //         baseinfo[4] = 18;
    //     }
    //     else if (constell == "天秤座")
    //     {
    //         baseinfo[0] = 42;
    //         baseinfo[1] = 33;
    //         baseinfo[2] = 25;
    //         baseinfo[3] = 24;
    //         baseinfo[4] = 32;
    //     }
    //     else if (constell == "天蝎座")
    //     {
    //         baseinfo[0] = 50;
    //         baseinfo[1] = 25;
    //         baseinfo[2] = 40;
    //         baseinfo[3] = 20;
    //         baseinfo[4] = 26;
    //     }
    //     else if (constell == "射手座")
    //     {
    //         baseinfo[0] = 57;
    //         baseinfo[1] = 31;
    //         baseinfo[2] = 25;
    //         baseinfo[3] = 26;
    //         baseinfo[4] = 29;
    //     }
    //     else if (constell == "山羊座")
    //     {
    //         baseinfo[0] = 56;
    //         baseinfo[1] = 30;
    //         baseinfo[2] = 26;
    //         baseinfo[3] = 22;
    //         baseinfo[4] = 25;
    //     }
    //     else if (constell == "水瓶座")
    //     {
    //         baseinfo[0] = 41;
    //         baseinfo[1] = 43;
    //         baseinfo[2] = 20;
    //         baseinfo[3] = 27;
    //         baseinfo[4] = 23;
    //     }
    //     else if (constell == "双鱼座")
    //     {
    //         baseinfo[0] = 41;
    //         baseinfo[1] = 40;
    //         baseinfo[2] = 29;
    //         baseinfo[3] = 25;
    //         baseinfo[4] = 23;
    //     }
    //     for (int year = 1659; year <= 1659 + 7; year++)
    //     {
    //         for (int mmonth = (year == 1659) ? 6 : 1; month <= 12; month++)
    //         {
    //             if (mmonth == month)
    //             {
    //                 cout << "本月是" << nn << "生日哦~" << endl;
    //             }
    //             cout << "\n 1、查看状态\n 2、安排行程\n 3、亲自谈话\n 4、存档\n 5、读档" << endl;
    //             cin >> choice;
    //             switch (choice)
    //             {
    //                 case 1:
    //                     cout << endl
    //                          << "女儿的信息：" << endl;
    //                     cout << "姓名：" << nn << endl;
    //                     cout << "生日：1659-" << month << "-" << day << endl;
    //                     cout << "星座：" << constell << endl;
    //                     cout << "金币：" << gold << endl;
    //                     cout << left;

    //                     for (int i = 0; i < 5; i++)
    //                     {
    //                         cout << baseinfo_names[i] << "：" << setw(2) << baseinfo[i];

    //                         int solidCount = baseinfo[i] / 10;
    //                         for (int j = 0; j < 10; j++)
    //                         {
    //                             if (j < solidCount)
    //                                 cout << "■";
    //                             else
    //                                 cout << "□";
    //                         }
    //                         cout << endl;
    //                     }
    //                     break;
    //                 case 2: {
    //                     string month_parts[] = {"上旬", "中旬", "下旬"};
    //                     for (int i = 0; i < 3; i++)
    //                     {
    //                         cout << year << "年"
    //                              << "--" << month << "月 --" << month_parts[i] << endl;
    //                         cout << "1、学习武术\n 2、上私塾\n 3、学习礼法\n 4、出城修行\n 5、打工赚钱" << endl;
    //                         cout << "请选择：";
    //                         cin >> choice;
    //                         srand(time(NULL));
    //                         if (choice == 1)
    //                         {
    //                             baseinfo[0] += temp1 = rand() % 10;
    //                             baseinfo[2] += temp2 = rand() % 10;
    //                             gold -= temp3 = rand() % 51;
    //                             cout << nn << "学习到了绝学！" << endl;
    //                             cout << "体力+" << temp1 << "，魅力+" << temp2 << "，金钱-" << temp3 << endl;
    //                         }
    //                         else if (choice == 5)
    //                         {
    //                             gold += temp3 = rand() % 101;
    //                             cout << "通过努力打工，赚到了" << temp3 << "个金币！" << endl;
    //                         }
    //                     }
    //                     break;
    //                 }
    //                 case 3:
    //                     cout << "暂时未完成（只写了1 2 5）" << endl;
    //                     break;
    //                 case 4:
    //                     cout << "暂时未完成（只写了1 2 5）" << endl;
    //                     break;
    //                 case 5:
    //                     cout << "暂时未完成（只写了1 2 5）" << endl;
    //                     break;
    //                 default:
    //                     cout << "暂时未完成（只写了1 2 5）" << endl;
    //                     break;
    //             }
    //         }
    //     }
    //     int sum = 0;
    //     for (int j = 0; j < 10; j++)
    //     {
    //         sum += baseinfo[j];
    //     }
    //     cout << "女儿" << nn << "当前总的属性得分为：" << sum << endl;
    //     cout << endl;
    //     if (sum > 2000)
    //     {
    //         cout << "最优游戏结果：登基为女王陛下。" << endl;
    //     }
    //     else if (sum > 1800 && sum <= 2000)
    //     {
    //         cout << "游戏结果第二名：成为王妃。" << endl;
    //     }
    //     else if (sum > 1600 && sum <= 1800)
    //     {
    //         cout << "游戏结果第三名：成为女将军。" << endl;
    //     }
    //     else if (sum > 1200 && sum <= 1600)
    //     {
    //         int maxValue = baseinfo[0];
    //         int maxIndex = 0;
    //         for (int i = 1; i < 10; i++)
    //         {
    //             if (maxValue < baseinfo[i])
    //             {
    //                 maxValue = baseinfo[i];
    //                 maxIndex = i;
    //             }
    //         }
    //         cout << "女儿的10个属性中，得分最高的属性在数组中的位置为" << maxIndex << "，取值为：" << maxValue << endl;

    //         if (maxValue == baseinfo[1] && baseinfo[2] > baseinfo[5])
    //         {
    //             cout << "女儿成长为：皇家学院总裁。" << endl;
    //         }
    //         else if (maxValue == baseinfo[5] && baseinfo[2] > baseinfo[0])
    //         {
    //             cout << "女儿成长为：公主。" << endl;
    //         }
    //         else if (maxValue == baseinfo[0] && baseinfo[5] > baseinfo[2])
    //         {
    //             cout << "女儿成长为：近卫骑士团长。" << endl;
    //         }

    //         else if (maxValue == baseinfo[9] && baseinfo[3] > baseinfo[8])
    //         {
    //             cout << "女儿成长为：高级祭司。" << endl;
    //         }
    //         else if (maxValue == baseinfo[2] && baseinfo[5] > baseinfo[4])
    //         {
    //             cout << "女儿成长为：国王的宠妃。" << endl;
    //         }
    //     }
    //     else if (sum <= 1200)
    //     {
    //         array<string, 5> value_daughter_role = {"农妇", "魔法师", "修女", "作家", "酒吧女郎"};
    //         string role;
    //         srand((unsigned)time(NULL));
    //         role = value_daughter_role[rand() % 5];
    //         cout << "女儿最终成长为：" << role << "。" << endl;
    //     }

    return 0;
}
