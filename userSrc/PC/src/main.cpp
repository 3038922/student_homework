#include <iostream>
int main()
{
    system("chcp 65001");
    system("cls");
    std::string account;
    int level = 15;
    std::cout << "请输入您的账号:" << account << std::endl;
    std::cin >> account;
    std::cout << "请您输入您的等级:";
    std::cin >> level;
    std::cout << "您的账号是:" << account << "\n";
    std::cout << "***/姓名\\***：百里守约\n"
              << "***/职业\\***：射手\n"
              << "***/种族\\***:人\n"
              << "\n***/生命值\\***：" << 1100 * level * 0.9
              << "\n***/攻击力\\***:" << 1100 * level * 0.8
              << "\n***/防御力\\***:" << 1112 * level * 0.5
              << "\n***/蓝条\\***:" << 1210 * level * 0.3
              << std::endl;
    return 0;
}