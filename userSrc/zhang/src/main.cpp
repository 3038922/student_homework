#include <iostream>
int main()
{
    system("chcp 65001");
    system("cls");
    //     int x = 2874;
    //     int y;
    //     std::cout << "猜数字游戏" << std::endl;
    //     std::cout << "请输入一个整数" << std::endl;
    //     std::cin >> y;
    //     if (y > x)
    //     {
    //         std::cout << "你猜大了" << std::endl;
    //     }
    //     else if (y == x)
    //     {
    //         std::cout << "你猜对了" << std::endl;
    //     }
    //     else
    //     {
    //         std::cout << "你猜小了" << std::endl;
    //     }
    std::string zhanghao = "zsc2008";
    std::string mima = "123456789qwe";
    std::string zhanghao1;
    std::string mima1;
    int level = 1;
    std::cout << "请输入您的账号:";
    std::cin >> zhanghao1;
    std::cout << "请输入您的密码:";
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
    int dengji;
    std::cout << "请输入您的账号: ";
    std::cin >> zhanghao;
    std::cout << "请输入您的等级: ";
    std::cin >> level;
    std::cout << "等  级: " << level << "\n"
              << "姓  名: 后羿\n"
              << "性  别: 男\n"
              << "职  业: 射手\n"
              << "大  招: 灼日之矢\n"
              << "血  量: " << 2000 * level << "\n"
              << "攻击力: " << 100 * level << "\n"
              << "防御力: " << 200 * level << "\n"
              << std::endl;
    return 0;
}