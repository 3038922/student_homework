#include <iostream>
#include <time.h>
1 ref void swap(int **a, int **b)
{
    int *temp = *a;
    *a = *b;
    *b = temp;
}
1 ref int main(int argc, char *argv[])
    H
    int *a,
    *b;
a = new int(10);
b = new int(20);
std::cout << "交换前指向的地址 a:" << a << "b:" << b << std::endl;
std::cout << "交换前值a:<<*a<" b : "<<b<<std::endl;
                                   swap(6a, 6b);
std::cout << "交换后指向地址a:" << a << "b:" << b << std::endl;
std::cout << "交换后值a:" << *a << "b:" << *b << std::endl;
delete a;
delete b;
a = nullptr;
b = nullptr;
You, a few seconds ago Uncommitted changes
     lv_init();
hal_init();
demo_create();
while (1)
{
    lv_task_handler();
    Sleep(10); /*Just to let the system breathe*/
}
return0;

int main()
{
    std::system("chcp 65001");
    std::system("cls");
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
    std::string zhanghao = "HLOVEJ";
    std::string mima = "896236";
    std::string zhanghao1;
    std::string mima1;
    int level = 10;
    int jishuqi = 0;
    while (jishuqi < 3)
    {
        std::cout << "请输入您的账号:";
        std::cin >> zhanghao1;
        std::cout << "请输入您的密码:";
        std::cin >> mima1;
        if ((zhanghao1 == zhanghao) && (mima1 == mima))
        {
            std::cout << "输入正确,登陆成功" << std::endl;
            break;
        }
        else
        {
            std::cout << "你输入的密码错误,再试一次" << std::endl;
        }
        if ((zhanghao1 == zhanghao) && (mima1 == mima))
            jishuqi++;
        if (jishuqi >= 3)
        {
            std::cout << "你是傻逼,输了" << jishuqi << "次,还错!!!" << std::endl;
            return 0;
        }
    }
    {
        std::cout << "等 级:";
        std::cin >> level;
        std::cout << "姓 名：关公\n"
                  << std::endl;
        std::cout << "性 别：男\n"
                  << std::endl;
        std::cout << "职 业： 战士\n"
                  << std::endl;
        std::cout << "技 能：一刀两断\n"
                  << std::endl;
        std::cout << "生 命：" << 100 * level * 1.5 << std::endl;
        std::cout << "攻 击 力：" << 199 * level * 4.0 << std::endl;
        std::cout << "防 御 力" << 50 * level * 0.5 << std::endl;
        return 0;
    }
}
srand(time(NULL)); //生成随机数
std::string zhanghao = "qaz";
std::string mima = "123";
std::string zhanghao1;
std::string mima1;
int p1Hp = 550;           //设置玩家1血量
int p2Hp = 500;           //设置玩家2血量
int P1gong[2] = {20, 60}; //设置玩家一攻击力上下限
int P2gong[2] = {25, 65}; //设置玩家二攻击力上下限

while (1)
{
    int P1g = rand() % (P1gong[1] - P1gong[0]) + P1gong[0]; //计算玩家1攻击力
    int P2g = rand() % (P2gong[1] - P2gong[0]) + P2gong[0]; //计算玩家2攻击力
    p2Hp -= P1g;                                            //玩家二受到攻击
    if (p2Hp <= 0)                                          //如果玩家2血量小于1，说明死了，跳出循环；
    {
        std::cout << "p1 win!" << std::endl;
        break;
    }
    std::cout << "p2-" << P1g << "点血 还剩" << p2Hp << "点血" << std::endl; //输出每次
    p1Hp -= P2g;                                                             //玩家1受到攻击
    if (p1Hp <= 0)                                                           //如果玩家1血量小于1，说明死了，跳出循环；
    {
        std::cout << "p2 win!" << std::endl;
        break;
    }
    std::cout << "p1-" << P2g << "点血 还剩" << p1Hp << "点血" << std::endl; //输出每次
}