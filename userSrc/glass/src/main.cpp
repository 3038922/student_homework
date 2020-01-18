#include <iostream>
int main()
{
    // std::system("65001");

    // std::system("cls");
    // int x = 1234567890;
    // int y;
    int level = 10;
    // std::cout << "lovelovelovelovelovelovelovelovelovelovelove猜数字游戏lovelovelovelovelovelovelovelovelovelove" << std::endl;
    // std::cout << "lovelovelovelovelovelovelovelovelovelovelovelove猜一个整数lovelovelovelovelovelovelovelovelovelove" << std::endl;
    // std::cin >> y;
    // if (y > x)
    // {
    //     std::cout << "你猜大了" << std::endl;
    // }
    // else if (y == x)
    // {
    //     std::cout << "你猜对了" << std::endl;
    // }
    // if (y < x)
    // {
    //     std::cout << "你猜小了" << std::endl;
    // }
    std::string zhanghao = "HLOVEJ";
    std::string mima = "896236";
    std::string zhanghao1;
    std::string mima1;
    std::cout << "请输入您的账号";
    std::cin >> zhanghao1;
    std::cout << "请输入您的密码:" << std::endl;
    std::cin >> mima1;
    if (zhanghao1 != zhanghao)
    {
        std::cout << "您的账号错误" << std::endl;

        return 0;
    }
    if (mima1 != mima)
    {
        std::cout << "你输入的密码错误" << std::endl;
        return 0;
    }
    std::cout << "\n防御力：" << 98 * level * 0.5;
    std::cout << "\n攻击力：" << 90000 * level * 10;
    std::cout << "\n生命：" << 100000 * level * 0.2;
    std::cout << "\n等级：10" << level;
}
