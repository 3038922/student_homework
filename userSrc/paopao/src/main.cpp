#include <iostream>
#include <time.h>
void l(int d, int p)
{
    int as = 0;
    as = d;
    d = p;
    p = as;
    std::cout << d << " " << p << std::endl;
}

int main()
{
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
    // int iii = 5;
    // int qazw[12] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 11, 22};

    // int q = 0;
    // while (q < 3)
    // {
    //     std::cout << "请输入您的账号";
    //     std::cin >> zhanghao1;
    //     std::cout << "请输入您的密码";
    //     std::cin >> mima1;
    //     if ((zhanghao1 == zhanghao) && (mima == mima1))
    //     {
    //         std::cout << "输入正确,已登录" << std::endl;
    //         break;
    //     }
    //     else
    //     {
    //         std::cout << "输入错误,请重试" << std::endl;
    //     }
    //     q++;
    //     if (q >= 3)
    //     {
    //         std::cout << "你已退出" << std::endl;
    //         return 0;
    //     }
    // }
    // std::cout << "等级" << iii << "\n";
    // std::cout << "姓名: 请问\n";
    // std::cout << "性别: 男\n";
    // std::cout << "职业: 法师\n";
    // std::cout << "生命: 12\n";
    // std::cout << "攻击: 15\n";
    // std::cout << "防御: 25\n";
}