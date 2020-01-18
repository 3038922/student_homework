#include <iostream>

int main()
{

    system("chcp 65001");
    system("cls");
    std::string account = "bobo";
    std::string mima = "bb2009125";
    std::string account1;
    std::string mima1;
    int level = 1;
    int x = 5;
    int y = 6;
    int z = 11;
    std::cout << ((x == y) && (x == z) && (y == z)) << std::endl;

    std::cout << ((x != y) || (x == z) || (y != z)) << std::endl;
    // std::cout << "请输入您的游戏账号:";
    // std::cin >> account1;
    // std::cout << "请输入您的游戏密码:";
    // std::cin >> mima1;
    // std::cout << "*****************您的游戏账号名字是:" << account << std::endl;
}