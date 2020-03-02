#include "../include/motor.hpp"
#include <iostream>
#include <time.h>
#include <windows.h>

// &&:且 ||:或
//    int a = 3
//    int b = 2
//    int c = 5
//   std::cout << ((a==b)&&(b==c)) std::endl;
//    std::cout << ((a==b)||(b==c)) std::endl;
// if (zhanghao1 != zhanghao)
// {
//     std::cout << "您的账号错误" << std::endl;
//     return 0;
// }
// if (mima1 != mima)
// {
//     std::cout << "你输入的密码错误" << std::endl;
//     return 0;
// }
//    if ((zhanghao1 != zhanghao) || (mima1 != mima))
//    {  std::cout << "\n防御力：" << 98 * level * 0.5;
//     std::cout << "\n攻击力：" << 90000 * level * 10;
//     std::cout << "\n生命：" << 100000 * level * 0.2;
//     std::cout << "\n等级：" << level;
//     return 0;
//    }
//   {   std::cout << "您输入的账号或密码错误" << std::endl
//   return 0;
//   }
//     int jishuqi = 1;
//     int jieguo = 0;
//     while (jishuqi < 9999999999)
//     {
//         std::cout << jishuqi << " 傻逼 " << std::endl;
//         jieguo = jieguo + jishuqi;
//         jishuqi = jishuqi + 1;
//     }
//     std::cout << jieguo << std::endl;
// }
//     std::string zhanghao = "HLOVEJ";
//     std::string mima = "896236";
//     std::string zhanghao1;
//     std::string mima1;
//     int level = 10;
//     int jishuqi = 0;
//     while (jishuqi < 3)
//     {
//         std::cout << "请输入您的账号:";
//         std::cin >> zhanghao1;
//         std::cout << "请输入您的密码:";
//         std::cin >> mima1;
//         if ((zhanghao1 == zhanghao) && (mima1 == mima))
//         {
//             std::cout << "输入正确,登陆成功" << std::endl;
//             break;
//         }
//         else
//         {
//             std::cout << "你输入的密码错误,再试一次" << std::endl;
//         }
//         if ((zhanghao1 == zhanghao) && (mima1 == mima))
//             jishuqi++;
//         if (jishuqi >= 3)
//         {
//             std::cout << "你是傻逼,输了" << jishuqi << "次,还错!!!" << std::endl;
//             return 0;
//         }
//     }
//     {
//         std::cout << "等 级:";
//         std::cin >> level;
//         std::cout << "姓 名：关公\n"
//                   << std::endl;
//         std::cout << "性 别：男\n"
//                   << std::endl;
//         std::cout << "职 业： 战士\n"
//                   << std::endl;
//         std::cout << "技 能：一刀两断\n"
//                   << std::endl;
//         std::cout << "生 命：" << 100 * level * 1.5 << std::endl;
//         std::cout << "攻 击 力：" << 199 * level * 4.0 << std::endl;
//         std::cout << "防 御 力" << 50 * level * 0.5 << std::endl;
//         return 0;
//     }
// }
// srand(time(NULL)); //生成随机数
// std::string zhanghao = "qaz";
// std::string mima = "123";
// std::string zhanghao1;
// std::string mima1;
// int p1Hp = 550;           //设置玩家1血量
// int p2Hp = 500;           //设置玩家2血量
// int P1gong[2] = {20, 60}; //设置玩家一攻击力上下限
// int P2gong[2] = {25, 65}; //设置玩家二攻击力上下限

// while (1)
// {
//     int P1g = rand() % (P1gong[1] - P1gong[0]) + P1gong[0]; //计算玩家1攻击力
//     int P2g = rand() % (P2gong[1] - P2gong[0]) + P2gong[0]; //计算玩家2攻击力
//     p2Hp -= P1g;                                            //玩家二受到攻击
//     if (p2Hp <= 0)                                          //如果玩家2血量小于1，说明死了，跳出循环；
//     {
//         std::cout << "p1 win!" << std::endl;
//         break;
//     }
//     std::cout << "p2-" << P1g << "点血 还剩" << p2Hp << "点血" << std::endl; //输出每次
//     p1Hp -= P2g;                                                             //玩家1受到攻击
//     if (p1Hp <= 0)                                                           //如果玩家1血量小于1，说明死了，跳出循环；
//     {
//         std::cout << "p2 win!" << std::endl;
//         break;
//     }
//     std::cout << "p1-" << P2g << "点血 还剩" << p1Hp << "点血" << std::endl; //输出每次
// }
// double xiaoshujiajian(double a, double b)
// {
//     return a + b;
// }
// std::string kanshuchang(std::string x)
// {
//     if (x == "猪")
//     {
//         return "猪肉";
//     }
//     else
//     {
//         return "我是猪肉场,我只加工猪肉";
//     }
// }
// int jiafa(int a, int b)
// {
//     return a + b;
// }
//     void externalexchangefunction(int *a, int *b)

//     if (*a < *b)
//     {
//         int linshi = *b;
//         *b = *a;
//         *a = linshi;
//     }
// }
// void player(std::string name, std::string job, int level, std::string Armor, std::string skill1, std::string skill2, std::string skill3);
// void swap(int **a, int **b)
// {
//     int *temp = *a;
//     *a = *b;
//     *b = temp;
// }
// int main(int argc, char *argv[])
// {

//     std::string class1 = "class1里的东西";
//     std::string class2 = "class2里的东西";
//     std::string *ptr_1 = &class1;
//     std::string *ptr_2 = &class2;
//     std::string **ptrptr_1 = &ptr_1;
//     std::string **ptrptr_2 = &ptr_2;
//     std::cout << "交换前class的值: " << class1 << "\t" << class2 << std::endl;
//     std::cout << "交换前ptr的值: " << **ptrptr_1 << "\t" << **ptrptr_2 << std::endl;
//     std::cout << std::endl;
//     std::string **temp = ptrptr_1;
//     ptrptr_1 = ptrptr_2;
//     ptrptr_2 = temp;
//     std::cout << "交换后class的值: " << class1 << "\t" << class2 << std::endl;
//     std::cout << "交换后ptr的值: " << **ptrptr_1 << "\t" << **ptrptr_2 << std::endl;
//     return 0;
// }
//    double *a = new double(qwertyuiopasdfghjklzxcvbnm);
//     std::cout << "指针a本身的地址大小:" << sizeof(&a) << " 指针a本身地址:" << &a << std::endl;
//     std::cout << "指针a指向的地址的大小:" << sizeof(a) << " 指针a指向的地址:" << a << std::endl;
//     std::cout << "指针a指向的地址的值大小:" << sizeof(*a) << " 指针a指向的值:" << *a << std::endl;
//     delete a;
//     a = nullptr;
//     std::cout << "删除后:" << std::endl;
//     std::cout << "指针a本身的地址大小:" << sizeof(&a) << " 指针a本身地址:" << &a << std::endl;
//     std::cout << "指针a指向的地址的大小:" << sizeof(a) << " 指针a指向的地址:" << a << std::endl;
//     std::cout << "指针a指向的地址的值大小:" << sizeof(*a) << " 指针a指向的值:" << *a << std::endl;

// {
//     std::string *a = new std::string("aaa");
//     std::string *b = new std::string("bbb");
//     int *c = new int(111);
//     int *d = new int(222);
//     std::cout << "string类型交换: " << std::endl;
//     std::cout << *a << "\t" << *b << std::endl;
//     jiaohuan(&a, &b);
//     std::cout << *a << "\t" << *b << std::endl;
//     std::cout << "int类型交换: " << std::endl;
//     std::cout << *c << "\t" << *d << std::endl;
//     jiaohuan(&c, &d);
//     std::cout << *c << "\t" << *d << std::endl;
//     delete a;
//     a = nullptr;
//     delete a;
//     b = nullptr;
//     delete b;
//     c = nullptr;
//     delete d;
//     d = nullptr;
//     std::string array[2] = {"xuanxuan", "bobo"};
//     std::cout << "array[0]的值: " << *array << "\t"
//               << "array[1]的值: " << *(array + 1) << std::endl;
//     std::cout << "array[0]的地址: " << array << "\t"
//               << "array[1]的地址: " << array + 1 << std::endl;
//     cout_zhengfangxing();
//     std::cout << std::endl;
//     cout_sanjiaoxing_zhijiao();
//     std::cout << std::endl;
//     cout_sanjiaoxing_dengbian();
//     return 0;
// }
// #include <iostream>
// #include <windows.h>
// class hero
// {
//   public:
//     hero(std::string name, std::string sex, int hp, int mp, int gongjili, int fangyuli) : _name(name), _sex(sex), _hp(hp), _mp(mp), _gongjili(gongjili), _fangyuli(fangyuli)
//     {
//         std::cout << name << " 初始化成功" << std::endl;
//     }
//     void showHp()
//     {
//         std::cout << _name << "当前血量" << _hp << std::endl;
//     }
//     void showMp()
//     {
//         std::cout << _name << "当前蓝量" << _mp << std::endl;
//     }
//     void attack(hero *hero)
//     {
//         int zaochengdeshanghai = _gongjili / (1 + hero->_fangyuli * 0.09);
//         std::cout << _name << " 攻击了 " << hero->_name << std::endl;
//         std::cout << "造成了 " << zaochengdeshanghai << " 点伤害" << std::endl;
//         hero->_hp -= zaochengdeshanghai;
//         fanji(hero);
//     }
//     void fanji(hero *hero)
//     {
//         int zaochengdeshanghai = hero->_gongjili / (1 + _fangyuli * 0.05) / 2;
//         std::cout << hero->_name << " 反击了 " << _name << std::endl;
//         std::cout << "造成了 " << zaochengdeshanghai << " 点伤害" << std::endl;
//         _hp -= zaochengdeshanghai;
//     }
//     /**
//      * @brief 返回当前血量
//      *
//      * @return int 当前的血量
//      */
//     int hp()
//     {
//         return _hp;
//     }

//   private:
//     const std::string _name;
//     const std::string _sex;
//     int _hp = 0;
//     int _mp = 0;
//     int _gongjili = 0;
//     int _fangyuli = 0;
// };
// int main(int argc, char *argv[])
// {
//     hero sunwukong("孙悟空", "男", 200, 10, 80, 50);
//     hero diaocha("貂蝉", "女", 100, 100, 100, 80);
//     while (sunwukong.hp() > 0 || diaocha.hp() > 0)
//     {
//         std::cout << std::endl;
//         sunwukong.attack(&diaocha);
//         std::cout << std::endl;
//         diaocha.attack(&sunwukong);
//         std::cout << std::endl;
//     }
//     sunwukong.showHp();
//     diaocha.showHp();
// }
class Glass
{
  public:
    Glass(std::string a, std::string b, std::string c) : _name(a), _color(b), _cpan(c)
    {
        std::cout << "Glass类创建成功" << std::endl;
    }
    ~Glass()
    {
        std::cout << "Glass类创建成功" << std::endl;
    }
    void showColor()
    {
        std::cout << _name << "是" << _color << std::endl;
    }
    void showName()
    {
        std::cout << "我叫：" << _name << std::endl;
    }
    void showCpan()
    {
        std::cout << _name << "我的镜片种类有：" << _cpan << "蓝光" << std::endl;
    }

  private:
    std::string _name, _color, _cpan;
};
int main()
{
    Glass s("散光Glass", "绿色", "118");
    Glass j("近视Glass", "五颜六色的绿色", "118");
    s.showName();
    s.showCpan();
    j.showName();
}
