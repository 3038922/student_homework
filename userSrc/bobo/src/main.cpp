#include <iostream>

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
void externalexchangefunction(int *a, int *b)
{
    if (*a < *b)
    {
        int linshi = *b;
        *b = *a;
        *a = linshi;
    }
}
void player(std::string name, std::string job, int level, std::string Armor, std::string skill1, std::string skill2, std::string skill3)
{
    std::cout << "您的姓名是" << name << std::endl
              << "您的职业是:" << job << std::endl
              << "您的等级是" << level << std::endl
              << "您的护甲是:" << Armor << std::endl
              << job << "技能一" << skill1 << std::endl
              << job << "技能二" << skill2 << std::endl
              << job << "技能三" << skill3 << std::endl;
}
int main()
{
    system("chcp 65001");
    system("cls");
    int tree = 150, cow = 100;
    std::string z = "asdfas";
    int *water = &cow;
    cow += 11;
    *water += 22;
    std::cout << "cow的值:" << cow << " cow的地址:" << &cow << std::endl;
    std::cout << "指向的值" << *water << "water指向的地址" << water << " water自己的地址" << water << std::endl;
    std::cout << "交换前cow=" << cow << " tree=" << tree << std::endl;
    externalexchangefunction(&tree, &cow);
    std::cout << "交换后cow=" << cow << " tree=" << tree << std::endl;
    // std::cout << jiafa(100, 200) << std::endl;
    // std::cout << kanshuchang("树") << std::endl;
    // std::cout << xiaoshujiajian(1.11, 2.22) << std::endl;
    player("cow", "刺客", 50, "血魔之怒", "暗袭要害", "真气拳", "杀手无敌万物灭");
    std::cout << std::endl;
    player("tree", "战士", 50, "超级无敌闪电黑耀附魔甲", "惊树骇浪", "飞树手里剑", "含笑半步癫");
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