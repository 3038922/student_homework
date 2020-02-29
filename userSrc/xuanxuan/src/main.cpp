#include <iostream>
#include <random>
#include <time.h>
#include <windows.h>
int jiafa(int a, int b)
{
    return a + b;
}
double jiafa(double a, double b)
{
    return a + b;
}
std::string gongchang(std::string a)
{
    return a == "牛" ? "牛肉" : "我是牛肉加工厂,只加工牛肉!";
}
void player(std::string name, std::string gender, std::string job, std::string skill1, std::string skill2, std::string skill3, int level)
{
    std::cout << "姓  名: " << name << std::endl
              << "等  级: " << level << std::endl
              << "性  别: " << gender << std::endl
              << "职  业: " << job << std::endl
              << "血  量: " << 250 * level << std::endl
              << "攻击力: " << 50 * level << std::endl
              << "防御力: " << 20 * level << std::endl
              << "技能 1: " << skill1 << std::endl
              << "技能 2: " << skill2 << std::endl
              << "技能 3: " << skill3 << std::endl;
}
void waiguajiaohuan(int *x, int *y)
{
    if (*x < *y)
    {
        int linshi;
        linshi = *x;
        *x = *y;
        *y = linshi;
    }
}
void jiaohuan(int **a, int **b)
{

    int *temp = *a;
    *a = *b;
    *b = temp;
}
void jiaohuan(std::string **a, std::string **b)
{

    std::string *temp = *a;
    *a = *b;
    *b = temp;
}
void cout_zhengfangxing()
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
}
void cout_sanjiaoxing_zhijiao()
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
}
void cout_sanjiaoxing_dengbian()
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10 - i - 1; j++)
        {
            std::cout << "  ";
        }
        for (int k = 0; k < i * 2 + 1; k++)
        {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
}
class people
{
  public:
    people(std::string name, std::string sex, int hp, int damage, int defense) : _name(name), _sex(sex), _hp(hp), _damage(damage), _defense(defense)
    {
        std::cout << _name << ",这是你的详细信息:" << std::endl;
        std::cout << "你的姓名是: " << _name << "\n"
                  << "你的性别是: " << _sex << "\n"
                  << "你的血量是: " << _hp << "\n"
                  << "你的攻击力是: " << _damage << "\n"
                  << "你的防御力是: " << _defense << std::endl;
    }
    void eat(people *people, std::string food)
    {
        std::cout << people->_name << "吃掉了" << food << "!" << std::endl;
    }
    void play(people *people, std::string toy)
    {
        std::cout << people->_name << "正在玩完" << toy << "!" << std::endl;
    }
    void sleep(people *people, double time)
    {
        std::cout << people->_name << "睡了" << time << "个小时!" << std::endl;
    }
    void ShowHp()
    {
        std::cout << _name << "当前血量: " << _hp << "!" << std::endl;
    }
    int ReturnHp()
    {
        return _hp;
    }
    void fight(people *people)
    {
        if (_sex == "女")
        {
            int InjuryCaused = 20 + _damage / (1 + people->_defense * ReturnRandomNumber());
            std::cout << _name << "攻击了" << people->_name << "!" << std::endl;
            std::cout << "造成了" << InjuryCaused << "点伤害!" << std::endl;
            people->_hp -= InjuryCaused;
            counterattack(people);
        }
        else
        {
            int InjuryCaused = _damage / (1 + people->_defense * ReturnRandomNumber());
            std::cout << _name << "攻击了" << people->_name << "!" << std::endl;
            std::cout << "造成了" << InjuryCaused << "点伤害!" << std::endl;
            people->_hp -= InjuryCaused;
            counterattack(people);
        }
    }

  private:
    std::string _name;
    std::string _sex;
    int _hp;
    int _damage;
    int _defense;
    double ReturnRandomNumber()
    {
        std::mt19937 rng;
        rng.seed(std::random_device()());
        std::uniform_real_distribution<double> distribution(0, 1);
        return distribution(rng);
    }
    void counterattack(people *people)
    {
        if (people->_sex == "女")
        {
            int InjuryCaused = 10 + people->_damage / (1 + _defense * ReturnRandomNumber()) / 2;
            std::cout << people->_name << "反击了" << _name << "!" << std::endl;
            std::cout << "造成了" << InjuryCaused << "点伤害!" << std::endl;
            _hp -= InjuryCaused;
        }
        else
        {
            int InjuryCaused = people->_damage / (1 + _defense * ReturnRandomNumber()) / 2;
            std::cout << people->_name << "反击了" << _name << "!" << std::endl;
            std::cout << "造成了" << InjuryCaused << "点伤害!" << std::endl;
            _hp -= InjuryCaused;
        }
    }
};
int main()
{
    system("chcp 65001");
    system("cls");
    system("color 0b");
    std::string zhanghao1 = "2864692889";
    std::string mima1 = "zzx20090203";
    std::string zhanghao2;
    std::string mima2;
    int dengji = 15;
    int shuzu[5] = {1, 2, 3, 4, 5};
    srand(time(NULL));
    int hp1 = 300;
    int hp2 = 300;
    int minat1[2] = {20, 60};
    int minat2[2] = {20, 60};
    // std::cout << "请输入您的账号: ";
    // std::cin >> zhanghao2;
    // std::cout << "请输入您的密码: ";
    // std::cin >> mima2;
    // if (zhanghao1 != zhanghao2)
    // {
    //     std::cout << "您输入的账号错误!" << std::endl;
    //     return 0;
    // }
    // if (mima1 != mima2)
    // {
    //     std::cout << "您输入的密码错误!" << std::endl;
    //     return 0;
    // }
    // system("cls");
    // std::cout << "登录成功!\n";
    // std::cout << "等  级: " << dengji << "\n"
    //           << "姓  名: 后羿\n"
    //           << "性  别: 男♂\n"
    //           << "职  业: 射手\n"
    //           << "技能 1: 多重箭矢\n"
    //           << "技能 2: 落日余晖\n"
    //           << "大  招: 灼日之矢\n"
    //           << "血  量: " << 250 * dengji << "\n"
    //           << "攻击力: " << 50 * dengji << "\n"
    //           << "防御力: " << 20 * dengji << "\n"
    //           << std::endl;
    /**************************************************/
    // for (int i = 1; i <= 5; i++)
    // {
    //     std::cout << "shuzu[" << i << "]:" << shuzu[i - 1] << std::endl;
    // }
    /**************************************************/
    // std::cout << "***************欢迎来到拳皇小游戏***************" << std::endl;
    // Sleep(1000);
    // while (hp1 >= 1 || hp2 >= 1)
    // {
    //     int gong1 = rand() % (minat1[1] - minat1[0]) + minat1[0];
    //     int gong2 = rand() % (minat2[1] - minat2[0]) + minat2[0];
    //     hp1 -= gong2;
    //     if (hp1 <= 0)
    //     {
    //         std::cout << "KO~玩家2获胜!!!" << std::endl;
    //         break;
    //     }
    //     std::cout << "玩家1本次攻击力:" << gong1 << "!\t"
    //               << "还剩" << hp1 << "点血!" << std::endl;
    //     Sleep(1000);
    //     hp2 -= gong1;
    //     if (hp2 <= 0)
    //     {
    //         std::cout << "KO~玩家1获胜!!!" << std::endl;
    //         break;
    //     }
    //     std::cout << "玩家2本次攻击力:" << gong2 << "!\t"
    //               << "还剩" << hp2 << "点血!" << std::endl;
    //     Sleep(1000);
    // }
    /**************************************************/
    // std::cout << zhengshujiafa(1, 2) << std::endl;s
    // std::cout << xiaoshujiafa(1.1, 2.2) << std::endl;
    // std::cout << gongchang("羊") << std::endl;
    // player("轩轩", "男", "刺客", "轩轩叫", "轩轩跳", "轩轩巅峰", 999);
    // std::cout << std::endl;
    // player("波波", "男", "战士", "波波叫", "波波跳", "波波巅峰", 666);
    /**************************************************/
    // int sheep = 1, pig = 200;
    // int *pc = &sheep;
    // sheep += 100;
    // *pc += 999;
    // std::cout << "交换前: sheep = " << sheep << "\t"
    //           << "pig = " << pig << std::endl;
    // waiguajiaohuan(&sheep, &pig);
    // std::cout << "交换后: sheep = " << sheep << "\t"
    //           << "pig = " << pig << std::endl;
    /**************************************************/
    // int a = 1;
    // double b = 3.14;
    // std::string c = "xuanxuan";
    // std::string *d = &c;
    // std::cout << "int的大小: " << sizeof(a) << std::endl;
    // std::cout << "double的大小: " << sizeof(b) << std::endl;
    // std::cout << "string的大小: " << sizeof(c) << std::endl;
    // std::cout << "string指针的大小: " << sizeof(*d) << std::endl;
    /**************************************************/
    // std::string class1 = "class1里的东西";
    // std::string class2 = "class2里的东西";
    // // zhizhengjiaohuan(&class1, &class2);
    // // std::cout << "class1: " << class1 << "\tclass2: " << class2 << std::endl;
    // std::string *ptr_1 = &class1;
    // std::string *ptr_2 = &class2;
    // std::string **ptrptr_1 = &ptr_1;
    // std::string **ptrptr_2 = &ptr_2;
    // // std::cout << "class1的值: " << class1 << "\tclass1的地址: " << &class1 << std::endl;
    // // std::cout << "ptr_1指向的值: " << *ptr_1 << "\tptr_1指向的地址: " << ptr_1 << "\tptr_1自己的地址: " << &ptr_1 << std::endl;
    // // std::cout << "ptrptr_1指向的值: " << **ptrptr_1 << "\tptrptr_1指向的地址: " << *ptrptr_1 << "\tptrptr_1指向的指针的地址: " << ptrptr_1 << "\tptrptr_1自己的地址: " << &ptrptr_1 << std::endl;
    // std::cout << "交换前class的值: " << class1 << "\t" << class2 << std::endl;
    // std::cout << "交换前ptr的值: " << **ptrptr_1 << "\t" << **ptrptr_2 << std::endl;
    // std::cout << std::endl;
    // std::string **temp = ptrptr_1;
    // ptrptr_1 = ptrptr_2;
    // ptrptr_2 = temp;
    // std::cout << "交换后class的值: " << class1 << "\t" << class2 << std::endl;
    // std::cout << "交换后ptr的值: " << **ptrptr_1 << "\t" << **ptrptr_2 << std::endl;
    /**************************************************/
    // double *a = new double(3.14);
    // std::cout << "指针a本身的地址大小: " << sizeof(&a) << "\t指针a本身地址: " << &a << std::endl;
    // std::cout << "指针a指向的地址的大小: " << sizeof(a) << "\t指针a指向的地址: " << a << std::endl;
    // std::cout << "指针a指向的地址的值大小: " << sizeof(*a) << "\t指针a指向的值: " << *a << std::endl;
    // delete a;
    // a = nullptr;
    // std::cout << "删除后:" << std::endl;
    // std::cout << "指针a本身的地址大小: " << sizeof(&a) << "\t指针a本身地址: " << &a << std::endl;
    // std::cout << "指针a指向的地址的大小: " << sizeof(a) << "\t指针a指向的地址: " << a << std::endl;
    // std::cout << "指针a指向的地址的值大小: " << sizeof(*a) << "\t指针a指向的值: " << *a << std::endl;
    // std::string b;
    // std::cout << "是否执行病毒程序(y/n)? ";
    // std::cin >> b;
    // if (b == "y" || b == "Y" || b == "yes" || b == "Yes" || b == "YES")
    // {
    //     for (;;)
    //     {
    //         std::string *bingdu = new std::string("点一下玩一年");
    //         Sleep(10);
    //     }
    // }
    // else
    // {
    //     std::cout << "病毒未执行!!!" << std::endl;
    // }
    /**************************************************/
    // std::string *a = new std::string("aaa");
    // std::string *b = new std::string("bbb");
    // int *c = new int(111);
    // int *d = new int(222);
    // std::cout << "string类型交换: " << std::endl;
    // std::cout << *a << "\t" << *b << std::endl;
    // jiaohuan(&a, &b);
    // std::cout << *a << "\t" << *b << std::endl;
    // std::cout << "int类型交换: " << std::endl;
    // std::cout << *c << "\t" << *d << std::endl;
    // jiaohuan(&c, &d);
    // std::cout << *c << "\t" << *d << std::endl;
    // delete a;
    // a = nullptr;
    // delete a;
    // b = nullptr;
    // delete b;
    // c = nullptr;
    // delete d;
    // d = nullptr;
    // std::string array[2] = {"xuanxuan", "bobo"};
    // std::cout << "array[0]的值: " << *array << "\t"
    //           << "array[1]的值: " << *(array + 1) << std::endl;
    // std::cout << "array[0]的地址: " << array << "\t"
    //           << "array[1]的地址: " << array + 1 << std::endl;
    // cout_zhengfangxing(); //正方形
    // std::cout << std::endl;
    // cout_sanjiaoxing_zhijiao(); //直角三角形
    // std::cout << std::endl;
    // cout_sanjiaoxing_dengbian(); //等边三角型
    /**************************************************/
    people xuanxuan("轩轩", "男", 500, 200, 20);
    std::cout << std::endl;
    /** 男版波波 */
    people bobo("波波", "男", 500, 200, 20);
    /** 女版波波(女版波波会有攻击力加成) */
    // people bobo("波波", "女", 500, 150, 15);
    std::cout << std::endl;
    // xuanxuan.eat(&xuanxuan, "羊肉");
    // bobo.eat(&bobo, "牛肉");
    // xuanxuan.play(&xuanxuan, "玩具牛");
    // bobo.play(&bobo, "玩具羊");
    // xuanxuan.sleep(&xuanxuan, 9);
    // bobo.sleep(&bobo, 9.5);
    while (xuanxuan.ReturnHp() > 0 && bobo.ReturnHp() > 0)
    {
        xuanxuan.fight(&bobo);
        std::cout << std::endl;
        bobo.fight(&xuanxuan);
        std::cout << std::endl;
    }
    xuanxuan.ShowHp();
    bobo.ShowHp();
    return 0;
}
/**************************小公主养成记*************************/
// #include <array>
// #include <cstdlib>
// #include <ctime>
// #include <iomanip>
// #include <iostream>
// #include <vector>
// #include <windows.h>
// using namespace std;
// int main()
// {
//     int 女儿生日的年份 = 1948;
//     int 女儿生日的月份;
//     int 女儿生日的日期;
//     int 女儿的岁数 = 11;
//     int 女儿的金钱 = 500;
//     int 跨星座日期[]{20, 19, 21, 20, 21, 22, 23, 23, 23, 24, 23, 22};
//     int a, b, c, d;
//     array<int, 5> 女儿的基本信息;
//     array<string, 5> 女儿基本信息的名字 = {"体力", "智力", "魅力", "道德", "气质"};
//     string 父亲的名字;
//     string 女儿的名字;
//     string 女儿的星座;
//     string 星座[12][2] = {
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
//     cout << "请输入父亲的姓名: ";
//     cin >> 父亲的名字;
//     cout << "请输入女儿的姓名: ";
//     cin >> 女儿的名字;
//     cout << "请输入女儿的生日(MM DD): ";
//     cin >> 女儿生日的月份 >> 女儿生日的日期;
//     system("cls");
//     女儿的星座 = 星座[女儿生日的月份 - 1][女儿生日的日期 / 跨星座日期[女儿生日的月份 - 1]];
//     cout << "公元1659年,勇者" << 父亲的名字 << "收养了小女孩" << 女儿的名字 << "!" << endl;
//     cout << "女儿的详细信息:" << endl;
//     cout << "姓名: " << 女儿的名字 << endl;
//     cout << "生日: " << 女儿生日的年份 << "-" << 女儿生日的月份 << "-" << 女儿生日的日期 << endl;
//     cout << "星座: " << 女儿的星座 << endl;
//     cout << "年龄: " << 女儿的岁数 << endl;
//     cout << "金钱: " << 女儿的金钱 << endl;
//     cout << "***************游戏开始***************" << endl;
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
//                 string h;
//                 int h1, h2, h3, h4, h5;
//                 cout << "\n本月" << 女儿生日的日期 << "号是女儿" << 女儿的名字 << "的生日,要不要送礼物呢?(y/n)";
//                 cin >> h;
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
//                         cout << "\n您花费了100元金币给" << 女儿的名字 << "买了一件精美的礼物!" << endl;
//                         cout << "体力增加" << h1 << endl;
//                         cout << "智力增加" << h2 << endl;
//                         cout << "魅力增加" << h3 << endl;
//                         cout << "道德增加" << h4 << endl;
//                         cout << "气质增加" << h5 << endl;
//                     }
//                 }
//                 else
//                 {
//                     cout << "\n您的金币不够,请去打工赚钱!" << endl;
//                 }
//             }
//             cout << "\n当前时间: " << 年 << "-" << 月 << endl;
//             cout << "1.查看状态\n2.安排行程\n3.亲子谈话" << endl;
//             cout << "请选择: ";
//             cin >> a;
//             switch (a)
//             {
//                 case 1:
//                     cout << "\n女儿的详细信息:" << endl;
//                     cout << "姓名: " << 女儿的名字 << endl;
//                     cout << "生日: " << 女儿生日的年份 << "-" << 女儿生日的月份 << "-" << 女儿生日的日期 << endl;
//                     cout << "星座: " << 女儿的星座 << endl;
//                     cout << "年龄: " << 女儿的岁数 << endl;
//                     cout << "金钱: " << 女儿的金钱 << endl;
//                     cout << left;
//                     for (int i = 0; i < 5; i++)
//                     {
//                         cout << 女儿基本信息的名字[i] << ": " << setw(3) << 女儿的基本信息[i];
//                         int 实心方框 = 女儿的基本信息[i] / 10;
//                         for (int j = 0; j < 10; j++)
//                         {
//                             if (j < 实心方框)
//                             {
//                                 cout << "■";
//                             }
//                             else
//                             {
//                                 cout << "□";
//                             }
//                         }
//                         cout << endl;
//                     }
//                     break;
//                 case 2: {
//                     string 每月的部分[] = {"上旬", "中旬", "下旬"};
//                     for (int i = 0; i < 3; i++)
//                     {
//                         cout << "\n-- " << 月 << "月 --" << 每月的部分[i] << endl;
//                         cout << "1.学习武艺\n2.上私塾\n3.学习礼法\n4.出城修行\n5.打工赚钱" << endl;
//                         cout << "请选择: ";
//                         cin >> a;
//                         if (女儿的金钱 > 0)
//                         {
//                             srand(time(NULL));
//                             if (a == 1)
//                             {
//                                 女儿的基本信息[0] += b = rand() % 10;
//                                 女儿的基本信息[2] += c = rand() % 10;
//                                 女儿的金钱 -= d = rand() % 51;
//                                 cout << "\n学习张无忌好榜样!" << endl;
//                                 cout << "经过勤学苦练以后, 体力增加 " << b << ",魅力增加" << c << ",金钱减少" << d << "!" << endl;
//                             }
//                             else if (a == 2)
//                             {
//                                 女儿的基本信息[1] += b = rand() % 10;
//                                 女儿的基本信息[3] += c = rand() % 10;
//                                 女儿的金钱 -= d = rand() % 51;
//                                 cout << "\n不学礼,无以立!" << endl;
//                                 cout << "经过努力学习之后, 智力增加 " << b << ",道德增加" << c << ",金钱减少" << d << "!" << endl;
//                             }
//                             else if (a == 3)
//                             {
//                                 女儿的基本信息[3] += b = rand() % 10;
//                                 女儿的基本信息[4] += c = rand() % 10;
//                                 女儿的金钱 -= d = rand() % 51;
//                                 cout << "\n礼尚往来,往而不来非礼也;来而不往亦非礼也!" << endl;
//                                 cout << "认真朗读之后, 道德增加 " << b << ",气质增加" << c << ",金钱减少" << d << "!" << endl;
//                             }
//                             else if (a == 4)
//                             {
//                                 女儿的基本信息[3] += b = rand() % 10;
//                                 女儿的基本信息[4] += c = rand() % 10;
//                                 女儿的金钱 -= d = rand() % 51;
//                                 cout << "\n静以修身,俭以养德;非淡泊无以明志，非宁静无以致远!" << endl;
//                                 cout << "经过修行以后, 道德增加 " << b << ",气质增加" << c << ",金钱减少" << d << "!" << endl;
//                             }
//                         }
//                         else if (a == 5)
//                         {
//                             女儿的金钱 += d = rand() % 101;
//                             cout << "\n通过努力打工,赚到了" << d << "个金币!" << endl;
//                         }
//                         else
//                         {
//                             cout << "\n您的金币不够,请去打工赚钱!" << endl;
//                         }
//                     }
//                     break;
//                 }
//                 case 3: {
//                     int i;
//                     cout << "\n1.打招呼\n2.严厉的教育\n3.给零用钱" << endl;
//                     cout << "请选择: ";
//                     cin >> i;
//                     srand(time(NULL));
//                     if (i == 1)
//                     {
//                         女儿的基本信息[3] += b = rand() % 6;
//                         cout << "\n女儿" << 女儿的名字 << "对父亲" << 父亲的名字 << "打了一声招呼!" << endl;
//                         cout << "道德增加" << b << endl;
//                     }
//                     else if (i == 2)
//                     {
//                         女儿的基本信息[3] += b = rand() % 16;
//                         cout << "\n父亲" << 父亲的名字 << "对女儿" << 女儿的名字 << "进行了一番严厉的教育!" << endl;
//                         cout << "道德增加" << b << endl;
//                     }
//                     else
//                     {
//                         女儿的金钱 += d = rand() % 21;
//                         cout << "\n父亲" << 父亲的名字 << "友好的给了女儿" << 女儿的名字 << d << "块零用钱!" << endl;
//                     }
//                     break;
//                 }
//             }
//         }
//         女儿的岁数++;
//     }
//     cout << "***************游戏结束***************" << endl;
//     int e = 0;
//     for (int i = 0; i < 5; i++)
//     {
//         e += 女儿的基本信息[i];
//     }
//     if (女儿的金钱 >= 0)
//     {
//         if (e >= 2000)
//         {
//             cout << "\n最优游戏结果: 登基为女王殿下!" << endl;
//             cout << "总分为:" << e << "!" << endl;
//         }
//         else if (e >= 1800 && e < 2000)
//         {
//             cout << "\n次优游戏结果: 成为王妃!" << endl;
//             cout << "总分为:" << e << "!" << endl;
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
//                 cout << "\n经过长期的训练," << 女儿的名字 << "成为一名光荣的高级祭祀!" << endl;
//                 cout << "总分为: " << e << "!" << endl;
//             }
//         }
//     }
//     else
//     {
//         srand(time(NULL));
//         if (rand() % 2 == 1)
//         {
//             cout << "\n经过长期的训练," << 女儿的名字 << "成为一名修女!" << endl;
//             cout << "总分为:" << e << "!" << endl;
//         }
//         else
//         {
//             cout << "\n经过长期的训练," << 女儿的名字 << "成为一名作家!" << endl;
//             cout << "总分为:" << e << "!" << endl;
//         }
//     }
//     return 0;
// }