#include <iostream>
#include <time.h>
#include <windows.h>
void jiaohuan(int x, int y)
{
    int linshi;
    std::cout << "交换前:" << x << "," << y << std::endl;
    linshi = x;
    x = y;
    y = linshi;
    std::cout << "交换后:" << x << "," << y << std::endl;
}
void jiafa(int a, int b)
{
    std::cout << a + b << std::endl;
}
void xiaoshujiafa(double a, double b)
{
    std::cout << a + b << std::endl;
}
std::string gongchang(std::string a)
{
    return (a == "牛") ? "牛肉" : "我是牛肉加工厂, 只加工牛肉!";
}
void player(std::string name, int level, std::string job, std::string skiil1, std::string skiil2, std::string skiil3)
{
    std::cout << "等  级: " << level << "\n"
              << "姓  名: " << name << "\n"
              << "性  别: 男♂\n"
              << "职  业: " << job << "\n"
              << "技能 1: " << skiil1 << "\n"
              << "技能 2: " << skiil2 << "\n"
              << "技能 3: " << skiil3 << "\n"
              << "血  量: " << 250 * level << "\n"
              << "攻击力: " << 50 * level << "\n"
              << "防御力: " << 20 * level << std::endl;
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
    //jiaohuan(1, 2);
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
    jiafa(1, 2);
    xiaoshujiafa(1.1, 2.2);
    std::cout << gongchang("羊") << std::endl;
    player("xuanxuan", 999, "射手", "多重箭矢", "落日余晖", "灼日之矢");
    return 0;
}