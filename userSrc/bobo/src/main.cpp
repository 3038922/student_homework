#include <array>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <vector>
#include <windows.h>
// class hero //TheRoleOftheGame
// {
//   public:
//     hero(std::string name, std::string sex, int birty_month, int birty_date) : _name(name), _sex(sex)
//     {
//     }

//   private:
//     const std::string _name;
//     const std::string _sex;
//     const std::string constellation[24] =
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
//             {"射手座", "山羊座"}};
//     int constellation_dates[] {}

// class TheRoleOftheGame
// {
//   public:
//     hero(std::string name, std::string sex, int hp, int mp) : _name(name), _sex(sex), _hp(hp), _mp(mp)
//     {
//         std::cout << name << "初始化成功" << std::endl;
//     }

//   private:
//     const std::string _name;
//     const std::string _sex;
//     int _hp = 0;
//     int _mp = 0;
//     int aggressivity = 0;
//     int DefenseForce = 0;
// };
// void Diamond()
// {
//     for (int i = 0; i < 8; i++)
//     {
//         for (int j = 0; j < 8 - i; j++)
//         {
//             std::cout << " ";
//         }

//         for (int j = 0; j < 2 * i + 1; j++)
//         {
//             std::cout << "*";
//         }
//         std::cout << "\n";
//     }
//     for (int i = 8 - 2; i >= 0; i--)
//     {
//         for (int j = 0; j < (8 - i); j++)
//         {
//             std::cout << " ";
//         }
//         for (int j = 0; j < 2 * i + 1; j++)
//         {
//             std::cout << "*";
//         }
//         std::cout << "\n";
//     }
// }
// void Triangle()
// {
//     for (int i = 0; i < 8; i++)
//     {
//         for (int j = 0; j < 8 - i; j++)
//         {
//             std::cout << " ";
//         }

//         for (int j = 0; j < 2 * i + 1; j++)
//         {
//             std::cout << "*";
//         }
//         std::cout << "\n";
//     }
//}
// double xiaoshujiajian(double a, double b)
// {
//     return a + b;
// }
// std::string kanshuchang(std::string x)
// {
//     if (x == "树")
//     {
//         return "木棍";
//     }
//     else
//     {
//         return "我是砍树场,只砍树";
//     }
// }
// int jiafa(int a, int b)
// {
//     return a + b;
// }
// void ExternalFxchangeFunction(int *a, int *b)
// {
//     if (*a < *b)
//     {
//         int linshi = *b;
//         *b = *a;
//         *a = linshi;
//     }
// }
// void player(std::string name, std::string job, int level, std::string Armor, std::string skill1, std::string skill2, std::string skill3)
// {
//     std::cout << "您的姓名是" << name << std::endl
//               << "您的职业是:" << job << std::endl
//               << "您的等级是" << level << std::endl
//               << "您的护甲是:" << Armor << std::endl
//               << job << "技能一" << skill1 << std::endl
//               << job << "技能二" << skill2 << std::endl
//               << job << "技能三" << skill3 << std::endl;
//}
int main()
{
    system("chcp 65001");
    system("cls");
    int 女儿生日的年份 = 1948;
    int 女儿生日的月份;
    int 女儿生日的日期;
    int 女儿的岁数 = 11;
    int 女儿的金钱 = 500;
    int 跨星座日期[]{20, 19, 21, 20, 21, 22, 23, 23, 23, 24, 23, 22};
    int a, b, c, d;
    std::array<int, 5> 女儿的基本信息;
    std::array<std::string, 5> 女儿基本信息的名字 = {"体力", "智力", "魅力", "道德", "气质"};
    std::string 父亲的名字;
    std::string 女儿的名字;
    std::string 女儿的星座;
    std::string 星座[12][2] = {
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
        {"射手座", "山羊座"}};
    std::cout << "请输入父亲的姓名: ";
    std::cin >> 父亲的名字;
    std::cout << "请输入女儿的姓名: ";
    std::cin >> 女儿的名字;
    std::cout << "请输入女儿的生日(MM DD): ";
    std::cin >> 女儿生日的月份 >> 女儿生日的日期;
    女儿的星座 = 星座[女儿生日的月份 - 1][女儿生日的日期 / 跨星座日期[女儿生日的月份 - 1]];
    std::cout << "公元1659年,勇者" << 父亲的名字 << "收养了小女孩" << 女儿的名字 << "!" << std::endl;
    std::cout << "女儿的详细信息:" << std::endl;
    std::cout << "姓名: " << 女儿的名字 << std::endl;
    std::cout << "生日: " << 女儿生日的年份 << "-" << 女儿生日的月份 << "-" << 女儿生日的日期 << std::endl;
    std::cout << "星座: " << 女儿的星座 << std::endl;
    std::cout << "年龄: " << 女儿的岁数 << std::endl;
    std::cout << "金钱: " << 女儿的金钱 << std::endl;
    std::cout << "***************游戏开始***************" << std::endl;
    if (女儿的星座 == "白羊座")
    {
        女儿的基本信息[0] = 80;
        女儿的基本信息[1] = 15;
        女儿的基本信息[2] = 15;
        女儿的基本信息[3] = 11;
        女儿的基本信息[4] = 21;
    }
    else if (女儿的星座 == "金牛座")
    {
        女儿的基本信息[0] = 46;
        女儿的基本信息[1] = 30;
        女儿的基本信息[2] = 28;
        女儿的基本信息[3] = 20;
        女儿的基本信息[4] = 29;
    }
    else if (女儿的星座 == "双子座")
    {
        女儿的基本信息[0] = 50;
        女儿的基本信息[1] = 35;
        女儿的基本信息[2] = 23;
        女儿的基本信息[3] = 8;
        女儿的基本信息[4] = 20;
    }
    else if (女儿的星座 == "巨蟹座")
    {
        女儿的基本信息[0] = 40;
        女儿的基本信息[1] = 31;
        女儿的基本信息[2] = 33;
        女儿的基本信息[3] = 17;
        女儿的基本信息[4] = 33;
    }
    else if (女儿的星座 == "狮子座")
    {
        女儿的基本信息[0] = 85;
        女儿的基本信息[1] = 9;
        女儿的基本信息[2] = 11;
        女儿的基本信息[3] = 20;
        女儿的基本信息[4] = 37;
    }
    else if (女儿的星座 == "处女座")
    {
        女儿的基本信息[0] = 35;
        女儿的基本信息[1] = 28;
        女儿的基本信息[2] = 36;
        女儿的基本信息[3] = 18;
        女儿的基本信息[4] = 40;
    }
    else if (女儿的星座 == "天秤座")
    {
        女儿的基本信息[0] = 42;
        女儿的基本信息[1] = 33;
        女儿的基本信息[2] = 25;
        女儿的基本信息[3] = 32;
        女儿的基本信息[4] = 28;
    }
    else if (女儿的星座 == "天蝎座")
    {
        女儿的基本信息[0] = 50;
        女儿的基本信息[1] = 25;
        女儿的基本信息[2] = 40;
        女儿的基本信息[3] = 18;
        女儿的基本信息[4] = 17;
    }
    else if (女儿的星座 == "射手座")
    {
        女儿的基本信息[0] = 57;
        女儿的基本信息[1] = 31;
        女儿的基本信息[2] = 15;
        女儿的基本信息[3] = 19;
        女儿的基本信息[4] = 20;
    }
    else if (女儿的星座 == "山羊座")
    {
        女儿的基本信息[0] = 56;
        女儿的基本信息[1] = 21;
        女儿的基本信息[2] = 16;
        女儿的基本信息[3] = 25;
        女儿的基本信息[4] = 23;
    }
    else if (女儿的星座 == "水瓶座")
    {
        女儿的基本信息[0] = 43;
        女儿的基本信息[1] = 43;
        女儿的基本信息[2] = 20;
        女儿的基本信息[3] = 23;
        女儿的基本信息[4] = 17;
    }
    else if (女儿的星座 == "双鱼座")
    {
        女儿的基本信息[0] = 41;
        女儿的基本信息[1] = 20;
        女儿的基本信息[2] = 29;
        女儿的基本信息[3] = 23;
        女儿的基本信息[4] = 32;
    }
    for (int 年 = 1659; 年 <= 1659 + 7; 年++)
    {

        for (int 月 = (年 == 1659) ? 6 : 1; 月 <= 12; 月++)
        {
            if (月 == 女儿生日的月份)
            {
                std::string h;
                int h1, h2, h3, h4, h5;
                std::cout << "\n本月" << 女儿生日的日期 << "号是女儿" << 女儿的名字 << "的生日,要不要送礼物呢?(y/n)";
                std::cin >> h;
                if (女儿的金钱 >= 100)
                {
                    if (h == "y" || h == "Y" || h == "yes" || h == "Yes" || h == "YES")
                    {
                        srand(time(NULL));
                        女儿的金钱 -= 100;
                        女儿的基本信息[0] += h1 = rand() % 16;
                        女儿的基本信息[1] += h2 = rand() % 16;
                        女儿的基本信息[2] += h3 = rand() % 16;
                        女儿的基本信息[3] += h4 = rand() % 16;
                        女儿的基本信息[4] += h5 = rand() % 16;
                        std::cout << "\n您花费了100元金币给" << 女儿的名字 << "买了一件精美的礼物!" << std::endl;
                        std::cout << "体力增加" << h1 << std::endl;
                        std::cout << "智力增加" << h2 << std::endl;
                        std::cout << "魅力增加" << h3 << std::endl;
                        std::cout << "道德增加" << h4 << std::endl;
                        std::cout << "气质增加" << h5 << std::endl;
                    }
                }
                else
                {
                    std::cout << "\n您的金币不够,请去打工赚钱!" << std::endl;
                }
            }
            std::cout << "\n当前时间: " << 年 << "-" << 月 << std::endl;
            std::cout << "1.查看状态\n2.安排行程\n3.亲子谈话" << std::endl;
            std::cout << "请选择: ";
            std::cin >> a;
            switch (a)
            {
                case 1:
                    std::cout << "\n女儿的详细信息:" << std::endl;
                    std::cout << "姓名: " << 女儿的名字 << std::endl;
                    std::cout << "生日: " << 女儿生日的年份 << "-" << 女儿生日的月份 << "-" << 女儿生日的日期 << std::endl;
                    std::cout << "星座: " << 女儿的星座 << std::endl;
                    std::cout << "年龄: " << 女儿的岁数 << std::endl;
                    std::cout << "金钱: " << 女儿的金钱 << std::endl;
                    std::cout << std::left;
                    for (int i = 0; i < 5; i++)
                    {
                        std::cout << 女儿基本信息的名字[i] << ": " << std::setw(3) << 女儿的基本信息[i];
                        int 实心方框 = 女儿的基本信息[i] / 10;
                        for (int j = 0; j < 10; j++)
                        {
                            if (j < 实心方框)
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
                case 2: {
                    std::string 每月的部分[] = {"上旬", "中旬", "下旬"};
                    for (int i = 0; i < 3; i++)
                    {
                        std::cout << "\n-- " << 月 << "月 --" << 每月的部分[i] << std::endl;
                        std::cout << "1.学习武艺\n2.上私塾\n3.学习礼法\n4.出城修行\n5.打工赚钱" << std::endl;
                        std::cout << "请选择: ";
                        std::cin >> a;
                        if (女儿的金钱 > 0)
                        {
                            srand(time(NULL));
                            if (a == 1)
                            {
                                女儿的基本信息[0] += b = rand() % 10;
                                女儿的基本信息[2] += c = rand() % 10;
                                女儿的金钱 -= d = rand() % 51;
                                std::cout << "\n学习张无忌好榜样!" << std::endl;
                                std::cout << "经过勤学苦练以后, 体力增加 " << b << ",魅力增加" << c << ",金钱减少" << d << "!" << std::endl;
                            }
                            else if (a == 2)
                            {
                                女儿的基本信息[1] += b = rand() % 10;
                                女儿的基本信息[3] += c = rand() % 10;
                                女儿的金钱 -= d = rand() % 51;
                                std::cout << "\n不学礼,无以立!" << std::endl;
                                std::cout << "经过努力学习之后, 智力增加 " << b << ",道德增加" << c << ",金钱减少" << d << "!" << std::endl;
                            }
                            else if (a == 3)
                            {
                                女儿的基本信息[3] += b = rand() % 10;
                                女儿的基本信息[4] += c = rand() % 10;
                                女儿的金钱 -= d = rand() % 51;
                                std::cout << "\n礼尚往来,往而不来非礼也;来而不往亦非礼也!" << std::endl;
                                std::cout << "认真朗读之后, 道德增加 " << b << ",气质增加" << c << ",金钱减少" << d << "!" << std::endl;
                            }
                            else if (a == 4)
                            {
                                女儿的基本信息[3] += b = rand() % 10;
                                女儿的基本信息[4] += c = rand() % 10;
                                女儿的金钱 -= d = rand() % 51;
                                std::cout << "\n静以修身,俭以养德;非淡泊无以明志，非宁静无以致远!" << std::endl;
                                std::cout << "经过修行以后, 道德增加 " << b << ",气质增加" << c << ",金钱减少" << d << "!" << std::endl;
                            }
                        }
                        else if (a == 5)
                        {
                            女儿的金钱 += d = rand() % 101;
                            std::cout << "\n通过努力打工,赚到了" << d << "个金币!" << std::endl;
                        }
                        else
                        {
                            std::cout << "\n您的金币不够,请去打工赚钱!" << std::endl;
                        }
                    }
                    break;
                }
                case 3: {
                    int i;
                    std::cout << "\n1.打招呼\n2.严厉的教育\n3.给零用钱" << std::endl;
                    std::cout << "请选择: ";
                    std::cin >> i;
                    srand(time(NULL));
                    if (i == 1)
                    {
                        女儿的基本信息[3] += b = rand() % 6;
                        std::cout << "\n女儿" << 女儿的名字 << "对父亲" << 父亲的名字 << "打了一声招呼!" << std::endl;
                        std::cout << "道德增加" << b << std::endl;
                    }
                    else if (i == 2)
                    {
                        女儿的基本信息[3] += b = rand() % 16;
                        std::cout << "\n父亲" << 父亲的名字 << "对女儿" << 女儿的名字 << "进行了一番严厉的教育!" << std::endl;
                        std::cout << "道德增加" << b << std::endl;
                    }
                    else
                    {
                        女儿的金钱 += d = rand() % 21;
                        std::cout << "\n父亲" << 父亲的名字 << "友好的给了女儿" << 女儿的名字 << d << "块零用钱!" << std::endl;
                    }
                    break;
                }
            }
        }
        女儿的岁数++;
    }
    std::cout << "***************游戏结束***************" << std::endl;
    int e = 0;
    for (int i = 0; i < 5; i++)
    {
        e += 女儿的基本信息[i];
    }
    if (女儿的金钱 >= 0)
    {
        if (e >= 2000)
        {
            std::cout << "\n最优游戏结果: 登基为女王殿下!" << std::endl;
            std::cout << "总分为:" << e << "!" << std::endl;
        }
        else if (e >= 1800 && e < 2000)
        {
            std::cout << "\n次优游戏结果: 成为王妃!" << std::endl;
            std::cout << "总分为:" << e << "!" << std::endl;
        }
        else if (e >= 1200 && e < 1600)
        {
            int f = 女儿的基本信息[0];
            int g = 0;
            for (int i = 1; i < 5; i++)
            {
                if (f < 女儿的基本信息[i])
                {
                    f = 女儿的基本信息[i];
                    g = i;
                }
            }
            if ("道德" == 女儿基本信息的名字[g] && 女儿的基本信息[2] > 女儿的基本信息[4])
            {
                std::cout << "\n经过长期的训练," << 女儿的名字 << "成为一名光荣的高级祭祀!" << std::endl;
                std::cout << "总分为: " << e << "!" << std::endl;
            }
        }
    }
    else
    {
        srand(time(NULL));
        if (rand() % 2 == 1)
        {
            std::cout << "\n经过长期的训练," << 女儿的名字 << "成为一名修女!" << std::endl;
            std::cout << "总分为:" << e << "!" << std::endl;
        }
        else
        {
            std::cout << "\n经过长期的训练," << 女儿的名字 << "成为一名作家!" << std::endl;
            std::cout << "总分为:" << e << "!" << std::endl;
        }
    }

    // Diamond();
    // Triangle();
    // int dengji = 15;
    // int shuzu[5] = {1, 2, 3, 4, 5};
    // srand(time(NULL));
    // int hp1 = 300;
    // int hp2 = 300;
    // int minat1[2] = {20, 60};
    // int minat2[2] = {20, 60};
    // double *a = new double(3.141592653589793238462643383279502884197169399375105820974944592307816406286);
    // std::cout << "指针a本身的地址大小:" << sizeof(&a) << " 指针a本身地址:" << &a << std::endl;
    // std::cout << "指针a指向的地址的大小:" << sizeof(a) << " 指针a指向的地址:" << a << std::endl;
    // std::cout << "指针a指向的地址的值大小:" << sizeof(*a) << " 指针a指向的值:" << *a << std::endl;
    // delete a;
    // a = nullptr;
    // std::cout << "删除后:" << std::endl;
    // std::cout << "指针a本身的地址大小:" << sizeof(&a) << " 指针a本身地址:" << &a << std::endl;
    // std::cout << "指针a指向的地址的大小:" << sizeof(a) << " 指针a指向的地址:" << a << std::endl;
    // std::cout << "指针a指向的地址的值大小:" << sizeof(*a) << " 指针a指向的值:" << *a << std::endl;
    // std::cout << "***************欢迎来到拳皇小游戏***************" << std::endl;
    // Sleep(1000);
    // while (hp1 >= 1 || hp2 >= 1)
    // {
    //     int gong1 = rand() % (minat1[1] - minat1[0]) + minat1[0];
    //     int gong2 = rand() % (minat2[1] - minat2[0]) + minat2[0];
    //     hp1 -= gong2;
    //     if (hp1 <= 0)
    //     {
    //         std::cout << "KO~bobo获胜!!!" << std::endl;
    //         break;
    //     }

    //     std::cout << "玩家1本次攻击力:" << gong1 << "!\t"
    //               << "还剩" << hp1 << "点血!" << std::endl;

    //     Sleep(1000);
    //     hp2 -= gong1;
    //     if (hp2 <= 0)
    //     {
    //         std::cout << "KO~xuanxuan获胜!!!" << std::endl;
    //         break;
    //     }
    //     std::cout << "玩家2本次攻击力:" << gong2 << "!\t"
    //               << "还剩" << hp2 << "点血!" << std::endl;
    //     Sleep(100);
    // }
    // std::string class1 = "class1里的东西";
    // std::string class2 = "class2里的东西";
    // std::string *ptr_1 = &class1;
    // std::string *ptr_2 = &class2;
    // std::string **ptrptr_1 = &ptr_1;
    // std::string **ptrptr_2 = &ptr_2;
    // std::cout << "交换前class的值: " << class1 << "\t" << class2 << std::endl;
    // std::cout << "交换前ptr的值: " << **ptrptr_1 << "\t" << **ptrptr_2 << std::endl;
    // std::cout << std::endl;
    // std::string **temp = ptrptr_1;
    // ptrptr_1 = ptrptr_2;
    // ptrptr_2 = temp;
    // std::cout << "交换后class的值: " << class1 << "\t" << class2 << std::endl;
    // std::cout << "交换后ptr的值: " << **ptrptr_1 << "\t" << **ptrptr_2 << std::endl;
    // // int tree = 100, cow = 150;
    // int *water = &tree;
    // std::string www = "asdfggg";
    // tree += 11;
    // *water += 22;
    // std::cout << "tree的值:" << tree << " tree的地址:" << &tree << std::endl;
    // std::cout << "water指向的值" << *water << " water指向的地址" << water << " water自己的地址" << &water << std::endl;
    // std::cout << "交换前tree=" << tree << " cow=" << cow << std::endl;
    // ExternalFxchangeFunction(&tree, &cow);
    // std::cout << "交换后ree=" << tree << " cow=" << cow << std::endl;
    // std::cout << jiafa(100, 200) << std::endl;
    // std::cout << kanshuchang("树") << std::endl;
    // std::cout << xiaoshujiajian(1.11, 2.22) << std::endl;
    // player("cow", "刺客", 50, "血魔之怒", "暗袭要害", "真气拳", "杀手无敌万物灭");
    // std::cout << std::endl;
    // player("tree", "战士", 50, "超级无敌闪电黑耀附魔甲", "惊树骇浪", "飞树手里剑", "含笑半步癫");
    //std::string account = "bobo";
    // std::string mima = "bb2009125";
    // std::string account1;
    // std::string mima1;
    // int level = 1;
    // int jishuqi = 0;

    // while (jishuqi < 3)
    // {
    //     std::cout << "请输入您的游戏账号:";
    //     std::cin >> account1;
    //     std::cout << "请输入您的游戏密码:";
    //     std::cin >> mima1;
    //     if ((account1 == account) && (mima1 == mima))
    //     {
    //         std::cout << "输入正确,登陆成功" << std::endl;
    //         break;
    //     }
    //     else
    //     {
    //         std::cout << "输入错误,请再输一次" << std::endl;
    //     }
    //     jishuqi++;
    //     if (jishuqi >= 3)
    //     {
    //         std::cout << "你输了,输入密码" << jishuqi << "次还失败,估计你是机器人" << std::endl;
    //         return 0;
    //     }
    // }
    // std::cout << "您的等级是:" << level << std::endl;
    // std::cout << "*********************姓名:百里守约\n性别:男*************************" << std::endl;
    // std::cout << "种族:人*************************" << std::endl;
    // std::cout << "*************************职业:射手 " << std::endl;
    // std::cout << "技能:1.狂风之息2.静谧之眼3.逃脱" << std::endl;
    // std::cout << "*************************攻击力:" << 600 * level << std::endl;
    // std::cout << "防御力:" << 50 * level;
    // std::cout << "攻击范围:" << 10 * level * 0.5;
    // std::cout << "血量:" << 5000 * level * 0.5;
    // std::cout << "*****************您的游戏账号名字是:" << account << std::endl;
    // std::cout << ((x == y) && (x == z) && (y == z)) << std::endl;

    // std::cout << ((x != y) || (x == z) || (y != z)) << std::endl;

    // int w = 1;
    // int q = 0;

    // while (w <= 1000)
    // {
    //     std::cout << "第" << w << "次" << std::endl;
    //     q = q + w;
    //     w = w + 1;
    // }

    // std::cout << "1 - 1000的累加和为:" << q << std::endl;

    // while (x > 0)
    // {
    //     std::cout << "阿斯蒂芬\t"
    //               << "第" << x << "次" << std::endl;
    //     x++;
    // }
    // int x = 5;
    // int y = 6;
    // int z = 11;
    // std::cout << "请输入您的游戏账号:";
    // std::cin >> account1;
    // std::cout << "请输入您的游戏密码:";
    // std::cin >> mima1;
    // // std::cout << "*****************您的游戏账号名字是:" << account << std::endl;
    // // std::cout << ((x == y) && (x == z) && (y == z)) << std::endl;

    // // std::cout << ((x != y) || (x == z) || (y != z)) << std::endl;
    // if (account1 == account && (mima1 == mima))
    // {
    //     std::cout << "您的等级是:" << level << std::endl;
    //     std::cout << "*********************姓名:百里守约\n性别:男*************************" << std::endl;
    //     std::cout << "种族:人*************************" << std::endl;
    //     std::cout << "*************************职业:射手 " << std::endl;
    //     std::cout << "技能:1.狂风之息2.静谧之眼3.逃脱" << std::endl;
    //     std::cout << "*************************攻击力:" << 600 * level << std::endl;
    //     std::cout << "防御力:" << 50 * level;
    //     std::cout << "攻击范围:" << 10 * level * 0.5;

    //     std::cout << "血量:" << 5000 * level * 0.5;
    // }
    // else
    // {
    //     std::cout << "您输入的账号或密码错误" << std::endl;
    // }
    // #include <iostream>
    // int main()
    // {

    //     system("chcp 65001");
    //     system("cls");
    //     std::string account = "bobo";
    //     std::string mima = "bb2009125";
    //     std::string account1;
    //     std::string mima1;
    //     int level = 55;
    //     std::cout << "请输入您的游戏账号:";
    //     std::cin >> account1;
    //     std::cout << "请输入您的游戏密码:";
    //     std::cin >> mima1;
    //     // std::cout << "*****************您的游戏账号名字是:" << account << std::endl;
    //     if (account1 != account)
    //     {
    //         std::cout << "你输入的账号错误" << std::endl;
    //         return 0;
    //     }

    //     if (mima1 != mima)
    //     {
    //         std::cout << "你输入的密码错误" << std::endl;
    //         return 0;
    //     }
    //     std::cout << "您的等级是:" << level << std::endl;
    //     std::cout << "*********************姓名:百里守约\n性别:男*************************" << std::endl;
    //     std::cout << "种族:人*************************" << std::endl;
    //     std::cout << "*************************职业:射手 " << std::endl;
    //     std::cout << "技能:1.狂风之息2.静谧之眼3.逃脱" << std::endl;
    //     std::cout << "*************************攻击力:" << 600 * level << std::endl;
    //     std::cout << "防御力:" << 50 * level;
    //     std::cout << "攻击范围:" << 10 * level * 0.5;

    //     std::cout << "血量:" << 5000 * level * 0.5;
    // system("chcp 65001");
    // system("cls");
    // int x = 125;
    // int y;
    // std::cout << "**********猜数字游戏**********" << std::endl;
    // std::cout << "*********请输入一个整数*********" << std::endl;
    // std::cin >> y;
    // if (y > x)
    // {
    //     std::cout << "你猜大了,被宇宙中心的黑洞吞噬了!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << std::endl;
    // }
    // else if (y == x)
    // {
    //     std::cout << "恭喜你你猜对了,赏你一个你最爱吃的黄金大嘴巴子,你可以去买彩票了!" << std::endl;
    // }
    // else
    // {
    //     std::cout << "你猜小了,被脱光了衣服扔到基因改造牢里改造成傻逼了!!!!!!!!!!!!!" << std::endl;
    // }

    return 0;
}
