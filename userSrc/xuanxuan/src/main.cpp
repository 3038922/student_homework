#include <iostream>
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
    std::string *a = new std::string("aaa");
    std::string *b = new std::string("bbb");
    int *c = new int(111);
    int *d = new int(222);
    std::cout << "string类型交换: " << std::endl;
    std::cout << *a << "\t" << *b << std::endl;
    jiaohuan(&a, &b);
    std::cout << *a << "\t" << *b << std::endl;
    std::cout << "int类型交换: " << std::endl;
    std::cout << *c << "\t" << *d << std::endl;
    jiaohuan(&c, &d);
    std::cout << *c << "\t" << *d << std::endl;
    delete a;
    a = nullptr;
    delete a;
    b = nullptr;
    delete b;
    c = nullptr;
    delete d;
    d = nullptr;
    std::string array[2] = {"xuanxuan", "bobo"};
    std::cout << "array[0]的值: " << *array << "\t"
              << "array[1]的值: " << *(array + 1) << std::endl;
    std::cout << "array[0]的地址: " << array << "\t"
              << "array[1]的地址: " << array + 1 << std::endl;
    cout_zhengfangxing(); //正方形
    std::cout << std::endl;
    cout_sanjiaoxing_zhijiao(); //直角三角形
    std::cout << std::endl;
    cout_sanjiaoxing_dengbian(); //等边三角型
    return 0;
}