#include <iostream>

void kantreechang(int tree, int futou)
{

    int lisnhi = tree * futou;
    std::cout << lisnhi << std::endl;
    int x = 0;
    x = tree;
    tree = futou;
    futou = x;
    std::cout << tree << "+" << futou << std::endl;
    lisnhi = tree + futou;
    std::cout << futou << std::endl;
}
int main()
{

    system("chcp 65001");
    system("cls");
    std::string account = "bobo";
    std::string mima = "bb2009125";
    std::string account1;
    std::string mima1;
    int level = 1;
    int jishuqi = 1;
    int jieguo = 0;
    int linshi = 0;
    int t = 1, f = 2;
    kantreechang(t, f);
    // int shuzu[3] = {1, 2, 3};
    // // linshi = shuzu[0];
    // // shuzu[0] = shuzu[1];
    // // shuzu[1] = linshi;

    // for (int i = 1; i <= 3; i++)
    // {
    //     std::cout << shuzu[jishuqi - 1] << std::endl;
    //     jishuqi++;
    // }

    // while (jishuqi <= 3)
    // {
    //     std::cout << shuzu[jishuqi - 1] << std::endl;
    //     jishuqi++;
    // }
    // for (int jishuqi = 1; jishuqi <= 100; jishuqi += 1)
    // {

    //     jieguo += jishuqi;
    // }
    // std::cout << "数字是：" << jieguo << std::endl;
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