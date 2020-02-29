// #include <array>
// #include <ctime>
// #include <iomanip>
// #include <iostream>
// #include <vector>
// #include <windows.h>
// void swap(int **a, int **b)
// {
//     int *temp = *a;
//     *a = *b;
//     *b = temp;
// } int main(int argc, char *argv[])
// {
//     std::string *a = new std::string("毛轩轩最聪明");

//     // b = new int(20);
//     std::cout << "指针a本身的地址大小:" << sizeof(&a) << " 指针a本身地址:" << &a << std::endl;
//     std::cout << "指针a指向的地址的大小:" << sizeof(a) << " 指针a指向的地址:" << a << std::endl;
//     std::cout << "指针a指向的地址的值大小:" << sizeof(*a) << " 指针a指向的值:" << *a << std::endl;
//     delete a;
//     a = nullptr;
//     std::cout << "删除后:" << std::endl;
//     std::cout << "指针a本身的地址大小:" << sizeof(&a) << " 指针a本身地址:" << &a << std::endl;
//     std::cout << "指针a指向的地址的大小:" << sizeof(a) << " 指针a指向的地址:" << a << std::endl;
//     std::cout << "指针a指向的地址的值大小:" << sizeof(*a) << " 指针a指向的值:" << *a << std::endl;
//     {
//         std::string *a = new std::string("点一下玩一年");
//         Sleep(10);
//     }
//     return 0;
// }
// void player(std::string Name, std::string job, int Level, int Hp, std::string Weapon, int Attack, std::string Armor, int Defense, std::string skill1, std::string skill2, std::string skill3)
// {
//     std::cout << "姓名:" << Name << std::endl
//               << "职业:" << job << std::endl
//               << "等级:" << Level << std::endl
//               << "血量:" << Hp << std::endl
//               << "武器:" << Weapon << std::endl
//               << "攻击力:" << Attack * Level << std::endl
//               << "防具:" << Armor << std::endl
//               << "防御力:" << Defense * Level << std::endl
//               << job << "技能一" << skill1 << std::endl
//               << job << "技能二" << skill2 << std::endl
//               << job << "技能三" << skill3 << std::endl;
// }
// void waiguajiaohuan(int *a, int *b)
// {
//     if (*a < *b)
//     {
//         int linshi = *b;
//         *b = *a;
//         *a = linshi;
//     }
// }
// int main()
// {
//     system("chcp 65001");
//     system("cls");
//     int xuanxuan = 100, fish = 200;
//     std::string z = "asdfas";
//     int *cow = &xuanxuan;
//     xuanxuan += 12;
//     *cow += 33;
//     std::cout << "xuanxuan的值:" << xuanxuan << " xuanxuan的地址:" << &xuanxuan << std::endl;
//     std::cout << "cow指向的值" << *cow << " cow指向的地址" << cow << " cow自己的地址" << &cow << std::endl;
//     std::cout << "交换前 xuanxuan=" << xuanxuan << " fish=" << fish << std::endl;
//     waiguajiaohuan(&xuanxuan, &fish);
//     std::cout << "交换后 xuanxuan=" << xuanxuan << " fish=" << fish << std::endl;
//     return 0;
// }

//{
// system("chcp 65001");
// system("cls");
// std::string zhanghao = "huangxinyang";
// std::string mima = "330822200911221213";
// std::string zhanghao1;
// std::string mima1;
// int level = 15;

// int b = 0;
// while (b <= 3)
// {
//     std::cout << "请输入您的账号:";
//     std::cin >> zhanghao1;
//     std::cout << "请输入您的密码:";
//     std::cin >> mima1;
//     if ((zhanghao == zhanghao1) && (mima == mima1))
//     {
//         std::cout << "输入正确,正在进入程序" << std::endl;
//         std::cout << "您的等级是:15" << std::endl;
//         std::cout << "您的账号是:huangxinyang"
//                   << "\n";
//         std::cout << "***/姓名\\***：百里守约\n"
//                   << "***/职业\\***：射手\n"
//                   << "***/种族\\***:人\n"
//                   << "\n***/生命值\\***：" << 1100 * level * 0.9
//                   << "\n***/攻击力\\***:" << 1100 * level * 0.8
//                   << "\n***/防御力\\***:" << 1112 * level * 0.5
//                   << "\n***/蓝条\\***:" << 1210 * level * 0.3
//                   << std::endl;
//         break;
//     }
//     else
//     {
//         std::cout << "请在输入一次大笨蛋" << std::endl;
//     }
//     b++;
//     if (b >= 3)
//     {
//         std::cout << "傻逼,这" << b << "次还错" << std::endl;
//         return 0;
//     }
// //}void asdf(int **a, int **b)
// int main()
// {
//     system("chcp 65001");
//     system("cls");
//     int 女儿生日的年份 = 1948;
//     int 女儿生日的月份;
//     int 女儿生日的日期;
//     int 女儿的岁数 = 11;
//     int 女儿的金钱 = 500;
//     int 跨星座日期[]{20, 19, 21, 20, 21, 22, 23, 23, 23, 24, 23, 22};
//     int a, b, c, d;
//     std::array<int, 5> 女儿的基本信息;
//     std::array<std::string, 5> 女儿基本信息的名字 = {"体力", "智力", "魅力", "道德", "气质"};
//     std::string 父亲的名字;
//     std::string 女儿的名字;
//     std::string 女儿的星座;
//     std::string 星座[12][2] = {
//         {"山羊座", "水瓶座"},
//         {"水瓶座", "双鱼座"},
//         {"双鱼座", "白羊座"},
//         {"白羊座", "金牛座"},
//         {"金牛座", "双子座"},
//         {"双子座", "巨蟹座"},
//         {"巨蟹座", "狮子座"},
//         {"狮子座", "处女座"},
//         {"处女座", "天秤座"},
//         {"天秤座", "天蝎座"},
//         {"天蝎座", "射手座"},
//         {"射手座", "山羊座"}};
//     std::cout << "请输入父亲的姓名: ";
//     std::cin >> 父亲的名字;
//     std::cout << "请输入女儿的姓名: ";
//     std::cin >> 女儿的名字;
//     std::cout << "请输入女儿的生日(MM DD): ";
//     std::cin >> 女儿生日的月份 >> 女儿生日的日期;
//     女儿的星座 = 星座[女儿生日的月份 - 1][女儿生日的日期 / 跨星座日期[女儿生日的月份 - 1]];
//     std::cout << "公元1659年,勇者" << 父亲的名字 << "收养了小女孩" << 女儿的名字 << "!" << std::endl;
//     std::cout << "女儿的详细信息:" << std::endl;
//     std::cout << "姓名: " << 女儿的名字 << std::endl;
//     std::cout << "生日: " << 女儿生日的年份 << "-" << 女儿生日的月份 << "-" << 女儿生日的日期 << std::endl;
//     std::cout << "星座: " << 女儿的星座 << std::endl;
//     std::cout << "年龄: " << 女儿的岁数 << std::endl;
//     std::cout << "金钱: " << 女儿的金钱 << std::endl;
//     std::cout << "***************游戏开始***************" << std::endl;
//     if (女儿的星座 == "白羊座")
//     {
//         女儿的基本信息[0] = 80;
//         女儿的基本信息[1] = 15;
//         女儿的基本信息[2] = 15;
//         女儿的基本信息[3] = 11;
//         女儿的基本信息[4] = 21;
//     }
//     else if (女儿的星座 == "金牛座")
//     {
//         女儿的基本信息[0] = 46;
//         女儿的基本信息[1] = 30;
//         女儿的基本信息[2] = 28;
//         女儿的基本信息[3] = 20;
//         女儿的基本信息[4] = 29;
//     }
//     else if (女儿的星座 == "双子座")
//     {
//         女儿的基本信息[0] = 50;
//         女儿的基本信息[1] = 35;
//         女儿的基本信息[2] = 23;
//         女儿的基本信息[3] = 8;
//         女儿的基本信息[4] = 20;
//     }
//     else if (女儿的星座 == "巨蟹座")
//     {
//         女儿的基本信息[0] = 40;
//         女儿的基本信息[1] = 31;
//         女儿的基本信息[2] = 33;
//         女儿的基本信息[3] = 17;
//         女儿的基本信息[4] = 33;
//     }
//     else if (女儿的星座 == "狮子座")
//     {
//         女儿的基本信息[0] = 85;
//         女儿的基本信息[1] = 9;
//         女儿的基本信息[2] = 11;
//         女儿的基本信息[3] = 20;
//         女儿的基本信息[4] = 37;
//     }
//     else if (女儿的星座 == "处女座")
//     {
//         女儿的基本信息[0] = 35;
//         女儿的基本信息[1] = 28;
//         女儿的基本信息[2] = 36;
//         女儿的基本信息[3] = 18;
//         女儿的基本信息[4] = 40;
//     }
//     else if (女儿的星座 == "天秤座")
//     {
//         女儿的基本信息[0] = 42;
//         女儿的基本信息[1] = 33;
//         女儿的基本信息[2] = 25;
//         女儿的基本信息[3] = 32;
//         女儿的基本信息[4] = 28;
//     }
//     else if (女儿的星座 == "天蝎座")
//     {
//         女儿的基本信息[0] = 50;
//         女儿的基本信息[1] = 25;
//         女儿的基本信息[2] = 40;
//         女儿的基本信息[3] = 18;
//         女儿的基本信息[4] = 17;
//     }
//     else if (女儿的星座 == "射手座")
//     {
//         女儿的基本信息[0] = 57;
//         女儿的基本信息[1] = 31;
//         女儿的基本信息[2] = 15;
//         女儿的基本信息[3] = 19;
//         女儿的基本信息[4] = 20;
//     }
//     else if (女儿的星座 == "山羊座")
//     {
//         女儿的基本信息[0] = 56;
//         女儿的基本信息[1] = 21;
//         女儿的基本信息[2] = 16;
//         女儿的基本信息[3] = 25;
//         女儿的基本信息[4] = 23;
//     }
//     else if (女儿的星座 == "水瓶座")
//     {
//         女儿的基本信息[0] = 43;
//         女儿的基本信息[1] = 43;
//         女儿的基本信息[2] = 20;
//         女儿的基本信息[3] = 23;
//         女儿的基本信息[4] = 17;
//     }
//     else if (女儿的星座 == "双鱼座")
//     {
//         女儿的基本信息[0] = 41;
//         女儿的基本信息[1] = 20;
//         女儿的基本信息[2] = 29;
//         女儿的基本信息[3] = 23;
//         女儿的基本信息[4] = 32;
//     }
//     for (int 年 = 1659; 年 <= 1659 + 7; 年++)
//     {

//         for (int 月 = (年 == 1659) ? 6 : 1; 月 <= 12; 月++)
//         {
//             if (月 == 女儿生日的月份)
//             {
//                 std::string h;
//                 int h1, h2, h3, h4, h5;
//                 std::cout << "\n本月" << 女儿生日的日期 << "号是女儿" << 女儿的名字 << "的生日,要不要送礼物呢?(y/n)";
//                 std::cin >> h;
//                 if (女儿的金钱 >= 100)
//                 {
//                     if (h == "y" || h == "Y" || h == "yes" || h == "Yes" || h == "YES")
//                     {
//                         srand(time(NULL));
//                         女儿的金钱 -= 100;
//                         女儿的基本信息[0] += h1 = rand() % 16;
//                         女儿的基本信息[1] += h2 = rand() % 16;
//                         女儿的基本信息[2] += h3 = rand() % 16;
//                         女儿的基本信息[3] += h4 = rand() % 16;
//                         女儿的基本信息[4] += h5 = rand() % 16;
//                         std::cout << "\n您花费了100元金币给" << 女儿的名字 << "买了一件精美的礼物!" << std::endl;
//                         std::cout << "体力增加" << h1 << std::endl;
//                         std::cout << "智力增加" << h2 << std::endl;
//                         std::cout << "魅力增加" << h3 << std::endl;
//                         std::cout << "道德增加" << h4 << std::endl;
//                         std::cout << "气质增加" << h5 << std::endl;
//                     }
//                 }
//                 else
//                 {
//                     std::cout << "\n您的金币不够,请去打工赚钱!" << std::endl;
//                 }
//             }
//             std::cout << "\n当前时间: " << 年 << "-" << 月 << std::endl;
//             std::cout << "1.查看状态\n2.安排行程\n3.亲子谈话" << std::endl;
//             std::cout << "请选择: ";
//             std::cin >> a;
//             switch (a)
//             {
//                 case 1:
//                     std::cout << "\n女儿的详细信息:" << std::endl;
//                     std::cout << "姓名: " << 女儿的名字 << std::endl;
//                     std::cout << "生日: " << 女儿生日的年份 << "-" << 女儿生日的月份 << "-" << 女儿生日的日期 << std::endl;
//                     std::cout << "星座: " << 女儿的星座 << std::endl;
//                     std::cout << "年龄: " << 女儿的岁数 << std::endl;
//                     std::cout << "金钱: " << 女儿的金钱 << std::endl;
//                     std::cout << std::left;
//                     for (int i = 0; i < 5; i++)
//                     {
//                         std::cout << 女儿基本信息的名字[i] << ": " << std::setw(3) << 女儿的基本信息[i];
//                         int 实心方框 = 女儿的基本信息[i] / 10;
//                         for (int j = 0; j < 10; j++)
//                         {
//                             if (j < 实心方框)
//                             {
//                                 std::cout << "■";
//                             }
//                             else
//                             {
//                                 std::cout << "□";
//                             }
//                         }
//                         std::cout << std::endl;
//                     }
//                     break;
//                 case 2: {
//                     std::string 每月的部分[] = {"上旬", "中旬", "下旬"};
//                     for (int i = 0; i < 3; i++)
//                     {
//                         std::cout << "\n-- " << 月 << "月 --" << 每月的部分[i] << std::endl;
//                         std::cout << "1.学习武艺\n2.上私塾\n3.学习礼法\n4.出城修行\n5.打工赚钱" << std::endl;
//                         std::cout << "请选择: ";
//                         std::cin >> a;
//                         if (女儿的金钱 > 0)
//                         {
//                             srand(time(NULL));
//                             if (a == 1)
//                             {
//                                 女儿的基本信息[0] += b = rand() % 10;
//                                 女儿的基本信息[2] += c = rand() % 10;
//                                 女儿的金钱 -= d = rand() % 51;
//                                 std::cout << "\n学习张无忌好榜样!" << std::endl;
//                                 std::cout << "经过勤学苦练以后, 体力增加 " << b << ",魅力增加" << c << ",金钱减少" << d << "!" << std::endl;
//                             }
//                             else if (a == 2)
//                             {
//                                 女儿的基本信息[1] += b = rand() % 10;
//                                 女儿的基本信息[3] += c = rand() % 10;
//                                 女儿的金钱 -= d = rand() % 51;
//                                 std::cout << "\n不学礼,无以立!" << std::endl;
//                                 std::cout << "经过努力学习之后, 智力增加 " << b << ",道德增加" << c << ",金钱减少" << d << "!" << std::endl;
//                             }
//                             else if (a == 3)
//                             {
//                                 女儿的基本信息[3] += b = rand() % 10;
//                                 女儿的基本信息[4] += c = rand() % 10;
//                                 女儿的金钱 -= d = rand() % 51;
//                                 std::cout << "\n礼尚往来,往而不来非礼也;来而不往亦非礼也!" << std::endl;
//                                 std::cout << "认真朗读之后, 道德增加 " << b << ",气质增加" << c << ",金钱减少" << d << "!" << std::endl;
//                             }
//                             else if (a == 4)
//                             {
//                                 女儿的基本信息[3] += b = rand() % 10;
//                                 女儿的基本信息[4] += c = rand() % 10;
//                                 女儿的金钱 -= d = rand() % 51;
//                                 std::cout << "\n静以修身,俭以养德;非淡泊无以明志，非宁静无以致远!" << std::endl;
//                                 std::cout << "经过修行以后, 道德增加 " << b << ",气质增加" << c << ",金钱减少" << d << "!" << std::endl;
//                             }
//                         }
//                         else if (a == 5)
//                         {
//                             女儿的金钱 += d = rand() % 101;
//                             std::cout << "\n通过努力打工,赚到了" << d << "个金币!" << std::endl;
//                         }
//                         else
//                         {
//                             std::cout << "\n您的金币不够,请去打工赚钱!" << std::endl;
//                         }
//                     }
//                     break;
//                 }
//                 case 3: {
//                     int i;
//                     std::cout << "\n1.打招呼\n2.严厉的教育\n3.给零用钱" << std::endl;
//                     std::cout << "请选择: ";
//                     std::cin >> i;
//                     srand(time(NULL));
//                     if (i == 1)
//                     {
//                         女儿的基本信息[3] += b = rand() % 6;
//                         std::cout << "\n女儿" << 女儿的名字 << "对父亲" << 父亲的名字 << "打了一声招呼!" << std::endl;
//                         std::cout << "道德增加" << b << std::endl;
//                     }
//                     else if (i == 2)
//                     {
//                         女儿的基本信息[3] += b = rand() % 16;
//                         std::cout << "\n父亲" << 父亲的名字 << "对女儿" << 女儿的名字 << "进行了一番严厉的教育!" << std::endl;
//                         std::cout << "道德增加" << b << std::endl;
//                     }
//                     else
//                     {
//                         女儿的金钱 += d = rand() % 21;
//                         std::cout << "\n父亲" << 父亲的名字 << "友好的给了女儿" << 女儿的名字 << d << "块零用钱!" << std::endl;
//                     }
//                     break;
//                 }
//             }
//         }
//         女儿的岁数++;
//     }
//     std::cout << "***************游戏结束***************" << std::endl;
//     int e = 0;
//     for (int i = 0; i < 5; i++)
//     {
//         e += 女儿的基本信息[i];
//     }
//     if (女儿的金钱 >= 0)
//     {
//         if (e >= 2000)
//         {
//             std::cout << "\n最优游戏结果: 登基为女王殿下!" << std::endl;
//             std::cout << "总分为:" << e << "!" << std::endl;
//         }
//         else if (e >= 1800 && e < 2000)
//         {
//             std::cout << "\n次优游戏结果: 成为王妃!" << std::endl;
//             std::cout << "总分为:" << e << "!" << std::endl;
//         }
//         else if (e >= 1200 && e < 1600)
//         {
//             int f = 女儿的基本信息[0];
//             int g = 0;
//             for (int i = 1; i < 5; i++)
//             {
//                 if (f < 女儿的基本信息[i])
//                 {
//                     f = 女儿的基本信息[i];
//                     g = i;
//                 }
//             }
//             if ("道德" == 女儿基本信息的名字[g] && 女儿的基本信息[2] > 女儿的基本信息[4])
//             {
//                 std::cout << "\n经过长期的训练," << 女儿的名字 << "成为一名光荣的高级祭祀!" << std::endl;
//                 std::cout << "总分为: " << e << "!" << std::endl;
//             }
//         }
//     }
//     else
//     {
//         srand(time(NULL));
//         if (rand() % 2 == 1)
//         {
//             std::cout << "\n经过长期的训练," << 女儿的名字 << "成为一名修女!" << std::endl;
//             std::cout << "总分为:" << e << "!" << std::endl;
//         }
//         else
//         {
//             std::cout << "\n经过长期的训练," << 女儿的名字 << "成为一名作家!" << std::endl;
//             std::cout << "总分为:" << e << "!" << std::endl;
//         }
//     }
//     return 0;
// }
#include <iostream>
#include <windows.h>
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
        std::cout << _name << "当前蓝条" << _mp << std::endl;
    }
    void attack(hero *hero)
    {
        int zaochengdeshanghai = _gongjili / (1 + hero->_fangyuli * 0.09);
        std::cout << _name << " 攻击了 " << hero->_name << std::endl;
        std::cout << "造成了 " << zaochengdeshanghai << " 点伤害" << std::endl;
        hero->_hp -= zaochengdeshanghai;
        fanji(hero);
    }
    void fanji(hero *hero)
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
int main(int argc, char *argv[])
{
    hero sunwukong("赵云", "男", 659, 1000, 87, 50);
    hero diaocha("貂蝉", "女", 178, 109, 111, 89);
    while (sunwukong.hp() > 0 || diaocha.hp() > 0)
    {
        std::cout << std::endl;
        sunwukong.attack(&diaocha);
        std::cout << std::endl;
        diaocha.attack(&sunwukong);
        std::cout << std::endl;
    }
    sunwukong.showHp();
    diaocha.showHp();
}