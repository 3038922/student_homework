#include <iostream>
int main()
{

    system("chcp 65001");
    system("cls");
    std::string zhanghao = "adsf";
    std::string mima = "20110215";
    std::string zhanghao1;
    std::string mima1;
    int level = 1;
    std::cout << "请输入您的账号: ";
    std::cin >> zhanghao1;
    std::cout << "请输入您的密码: ";
    std::cin >> mima1;
    if (zhanghao1 != zhanghao)
    {
        std::cout << "你输入的账号错误" << std::endl;
        return 0;
    }

    if (mima1 != mima)
    {
        std::cout << "你输入的密码错误" << std::endl;
        return 0;
    }
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