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
    int jishuqi = 0;

    while (jishuqi < 3)
    {
        std::cout << "请输入您的账号: ";
        std::cin >> zhanghao1;
        std::cout << "请输入您的密码: ";
        std::cin >> mima1;
        if ((zhanghao1 == zhanghao) && (mima1 == mima))
        {
            std::cout << "输入正确，登陆成功。" << std::endl;
            break;
        }
        else
        {
            std::cout << "输入错误，请重试。" << std::endl;
        }
        jishuqi++;
        if (jishuqi >= 3)
        {
            std::cout << "输了" << jishuqi << "次还错" << std::endl;
            return 0;
        }
    }
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