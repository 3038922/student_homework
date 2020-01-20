#include <iostream>
using namespace std;
int main()
{
    system("cls");
    system("chcp 65001");
    std::string account;
    std::string zhanghao = "lucas";
    std::string mima = "20110312";
    std::string zhanghao1;
    std::string mima1;
    int level = 1;
    std::cout << "请输入您的账号: ";
    std::cin >> account;
    std::cout << "请输入您的等级: ";
    std::cin >> level;
    std::cout << "您的账号：" << account;
    if (zhanghao1 != zhanghao1)
    {
        std::cout << "账号错了 " << std::endl;
        return 0;
    }
    if (mima != mima1)
    {
        std::cout << "密码错了" << std::endl;
        return 0;
    }
    std::cout << "\n姓名：白起";
    std::cout << "\n蓝条：" << 80 * level * 19;
    std::cout << "\n防御力：" << 98880 * level * 90;
    std::cout << "\n攻击力：" << 90000 * level * 10;
    std::cout << "\n生命：" << 100000 * level * 0.2;
    std::cout << "\n等级：10" << level;
    return 0;
}