#include <iostream>
#include <windows.h>
// int main();
// {
//    std::string father_name;
//    std::string daughter_name;
//     int month;
//     int day;
//     std::string constell;
//     int baseinfos[5];
//     std::string constell_names[12][2] =
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
//         }
// }
class hero
{
  public:
    hero(std::string name, std::string sex, int hp, int mp, int attack, int defence) : _name(name), _sex(sex), _hp(hp), _mp(mp), _attack(attack), _defence(defence)
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
        int hurt = _attack / (1 + hero->_defence * 1);
        std::cout << _name << " 攻击了 " << hero->_name << std::endl;
        std::cout << "造成了 " << hurt << " 点伤害" << std::endl;
        hero->_hp -= hurt;
        fanji(hero);
    }

    int hp()
    {
        return _hp;
    }

  private:
    const std::string _name;
    const std::string _sex;
    int _hp = 0;
    int _mp = 0;
    int _attack = 0;
    int _defence = 0;
    void fanji(hero *hero)
    {
        int hurt = hero->_attack / (1 + _defence * 0.05) / 2;
        std::cout << hero->_name << " 反击了 " << _name << std::endl;
        std::cout << "造成了 " << hurt << " 点伤害" << std::endl;
        _hp -= hurt;
    }
};
int main(int argc, char *argv[])
{
    hero a("孙悟空", "男", 200, 10, 80, 50);
    hero b("貂蝉", "女", 100, 100, 100, 80);
    while (a.hp() > 0 || b.hp() > 0)
    {
        std::cout << std::endl;
        a.attack(&b);
        std::cout << std::endl;
        b.attack(&a);
        std::cout << std::endl;
    }
    a.showHp();
    b.showHp();
    std::cout << rand() << std::endl;
    // // 打印正方形
    // std::cout << "打印正方形:" << std::endl;
    // int a, b
    // for (a = 0; a < 11; a++)
    // {
    //     for (b = 0; b < 11; b++)
    //         std::cout << " * ";
    //     std::cout << std::endl;
    // }
    // // 打印直角三角形
    // std::cout << "打印直角三角形:" << std::endl;
    // int z = 1;
    // int c, d;
    // for (c = 0; c < 11; c++)
    // {
    //     if (z < 11)
    //     {
    //         for (d = 0; d < z; d++)
    //             std::cout << " * ";
    //         std::cout << std::endl;
    //         z++;
    //     }
    // }
    // // 打印等腰三角形
    // std::cout << "打印等腰三角形:" << std::endl;
    // int y = 1;
    // int e, f, g;
    // for (e = 0; e < y; e++)
    // {
    //     if (g > 0)
    //     {
    //         for (g = 5; g < 6; g--)
    //             std::cout << " ";
    //     }
    // if (y < 11)
    // {
    //     for (f = 0; f < y; f++)
    //         std::cout << " * ";
    //     std::cout << std::endl;
    //     y++;
    // }
    // }
    return 0;
}
// void jiao(int **a, int **b)
// {
//     int *temp = *a;
//     *a = *b;
//     *b = temp;
// }
// int main()
// {
//     double *a = new double(12.34);
//     std::cout << "指针a本身的地址大小:" << sizeof(&a) << " 指针a本身地址:" << &a
//               << "指针a指向的地址的大小:" << sizeof(a) << " 指针a指向的地址:" << a
//               << "指针a指向的地址的值大小:" << sizeof(*a) << " 指针a指向的值:" << *a << std::endl;
//     delete a;
//     a = nullptr;
//     std::cout << "指针a本身的地址大小:" << sizeof(&a) << " 指针a本身地址:" << &a
//               << "指针a指向的地址的大小:" << sizeof(a) << " 指针a指向的地址:" << a
//               << "指针a指向的地址的值大小:" << sizeof(*a) << " 指针a指向的值:" << *a << std::endl;
//     while (1)
//     {
//         double *a = new double(235.56);
//         std::cout << "不要点" << std::endl;
//         Sleep(10);
//     }
// }

// void jiaohuan(int *a, int *b, int *c, int *d, int *e, int *f)
// {
//     if (*a < *b)
//     {
//         int lingshi = *a;
//         *a = *b;
//         *b = lingshi;
//     }
//     if (*a < *c)
//     {
//         int lingshi = *a;
//         *a = *c;
//         *c = lingshi;
//     }
//     if (*a < *d)
//     {
//         int lingshi = *a;
//         *a = *d;
//         *d = lingshi;
//     }
//     if (*a < *e)
//     {
//         int lingshi = *a;
//         *a = *e;
//         *e = lingshi;
//     }
//     if (*a < *f)
//     {
//         int lingshi = *a;
//         *a = *f;
//         *f = lingshi;
//     }
// }
// int main()
// {
//     system("chcp 65001");
//     system("cls");
//     int a = 10, b = 50, c = 100, d = 500, e = 1000, f = 5000;
//     jiaohuan(&a, &b, &c, &d, &e, &f);
// std::cout << "a的攻击力:" << a << std::endl;
// std::cout << "b的攻击力:" << b << std::endl;
// std::cout << "c的攻击力:" << c << std::endl;
// std::cout << "d的攻击力:" << d << std::endl;
// std::cout << "e的攻击力:" << e << std::endl;
// std::cout << "f的攻击力:" << f << std::endl;
// }

// //实际把教室里东西搬了一次 效率很低 很慢
// void swap(std::string *a, std::string *b)
// {
//     std::string temp = *a; //搬到走廊
//     *a = *b;               //B把东西搬进A;
//     *b = temp;
// }
//     double aa = 3.15;
//     std::string class1 = "阿斯顿";
//     std::string class2 = "asdasd";
//     std::string *ptr_1 = &class1;
//     std::string *ptr_2 = &class2;
//     std::string **ptrptr_1 = &ptr_1;
//     std::string **ptrptr_2 = &ptr_2;
//     std::cout << "class1的值" << class1 << " class1的地址" << &class1 << std::endl;
//     std::cout << "ptr_1指向的值" << *ptr_1 << " ptr_1指向的地址" << ptr_1 << " ptr_1自己的地址:" << &ptr_1 << std::endl;
//     std::cout << "ptrptr_1指向的值" << **ptrptr_1 << " ptrptr_1指向的地址" << *ptrptr_1 << " ptrptr_1指向的指针的地址" << ptrptr_1 << " ptrptr_1自己的地址:" << &ptrptr_1 << std::endl;
//     std::cout << "交换前class地址:" << &class1 << " " << &class2 << std::endl;
//     std::cout << "交换前ptr:" << ptrptr_1 << " " << ptrptr_2 << std::endl;
//     std::string **temp = ptrptr_1;
//     ptrptr_1 = ptrptr_2;
//     ptrptr_2 = temp;
//     std::cout << "交换后class地址" << &class1 << " " << &class2 << std::endl;
//     std::cout << "交换后ptr:" << ptrptr_1 << " " << ptrptr_2 << std::endl;
// swap(&class1, &class2);
// std::cout << "class1:" << class1 << " class2:" << class2 << std::endl;

//     int x = 2874;
//     int y;
//     std::cout << "猜数字游戏" << std::endl;
//     std::cout << "请输入一个整数" << std::endl;
//     std::cin >> y;
//     if (y > x)
//     {
//         std::cout << "你猜大了" << std::endl;
//     }
//     else if (y == x)
//     {
//         std::cout << "你猜对了" << std::endl;
//     }
//     else
//     {
//         std::cout << "你猜小了" << std::endl;
//     }
// std::string zhanghao = "zsc2008";
// std::string mima = "123456789qwe";
// std::string zhanghao1;
// std::string mima1;
// int level = 1;
// int jishuqi = 0;

// while (jishuqi < 3)
// {
//     std::cout << "请输入您的账号: ";
//     std::cin >> zhanghao1;
//     std::cout << "请输入您的密码: ";
//     std::cin >> mima1;
//     if ((zhanghao1 == zhanghao) && (mima1 == mima))
//     {
//         std::cout << "输入正确，登陆成功。" << std::endl;
//         break;
//     }
//     else
//     {
//         std::cout << "输入错误，请重试。" << std::endl;
//     }
//     jishuqi++;
//     if (jishuqi >= 3)
//     {
//         std::cout << "输了" << jishuqi << "次还错" << std::endl;
//         return 0;
//     }
// }
// void player(int level, std::string Name, std::string job, std::string skill1, std::string skill2, std::string skill3, int Mp, int Hp, int Defense, int Attack)
// {
//     std::cout << "姓  名:" << Name << std::endl
//               << "职  业:" << job << std::endl
//               << "等  级:" << level << std::endl
//               << job << "技能一:" << skill1 << std::endl
//               << job << "技能二:" << skill2 << std::endl
//               << job << "大  招:" << skill3 << std::endl
//               << "蓝  量:" << Mp * level << std::endl
//               << "血  量:" << Hp * level << std::endl
//               << "防御力:" << Defense * level << std::endl
//               << "攻击力:" << Attack * level << std::endl;
// }
// int main()
// {
//     system("chcp 65001");
//     system("cls");
//     player(5, "玩家一", "法师", "打一下", "打两下", "打五下", 400, 400, 100, 50);
//     std::cout << std::endl;
//     player(5, "玩家二", "战士", "捅一下", "捅两下", "捅五下", 100, 300, 200, 100);
// }