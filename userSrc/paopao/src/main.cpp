#include <iostream>

int main()
{
    std::string zhanghao = "qaz";
    std::string mima = "123";
    std::string zhanghao1;
    std::string mima1;
    int iii = 5;
    std::cout << "请输入您的账号";
    std::cin >> zhanghao1;
    std::cout << "请输入您的密码";
    std::cin >> mima1;
    if (zhanghao1 != zhanghao)
    {
        std::cout << "你输入的账号错误" << std::endl;
        return 0;
    }
    if (mima != mima1)
    {
        std::cout << "你输入的密码错误" << std::endl;
        return 0;
    }

    std::cout << "等级" << iii << "\n";
    std::cout << "姓名: 请问\n";
    std::cout << "性别: 男\n";
    std::cout << "职业: 法师\n";
    std::cout << "生命: 12\n";
    std::cout << "攻击: 15\n";
    std::cout << "防御: 25\n";