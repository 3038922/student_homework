#include <iostream>
int main()
{
    system("chcp 65001");
    system("cls");
    std::string zhanghao = "asdf";
    std::string mima = "20110215";
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
            std::cout << "输入正确,登录成功" << std::endl;
            break; //跳出当前循环
        }
        else
        {
            std::cout << "输入错误,请再试一次" << std::endl;
        }
        jishuqi++;
        if (jishuqi >= 3)
        {
            std::cout << "你是大笨蛋 输了 " << jishuqi << " 次还错!!!!" << std::endl;
            return 0; //结束程序 后面的话不执行了.
        }
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