#include <iostream>
using namespace std;
int main()
{
    system("cls");
    system("chcp 65001");
    std::string zhanghao = "lucas";
    std::string mima = "2011";
    std::string zhanghao1;
    std::string mima1;
    int level = 90;
    int c = 1;
    int d = 0;
    while (d <= 3)
    {
        std::cout << "请输入您的账号: ";
        std::cin >> zhanghao1;
        std::cout << "请输入您的密码: ";
        std::cin >> mima1;
        if ((zhanghao1 == zhanghao) && (mima1 == mima))
        {
            std::cout << "输对了，登陆成功" << std::endl;
            break;
        }
        else
        {
            std::cout << "输错了！" << std::endl;
        }
        d++;
        if (d > 3)
        {
            std::cout << "大笨蛋" << d << "还错！！！！！！！" << std::endl;
        }
    }
    std::cout << "您的账号：" << zhanghao1;
    if ((zhanghao1 != zhanghao1) || (mima != mima1))
    {
        std::cout << "账号错了或密码错了" << std::endl;
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