#include <iostream>

int main()
{
    std::string zhanghao = "qaz";
    std::string mima = "123";
    std::string zhanghao1;
    std::string mima1;
    int iii = 5;

    int q = 0;
    while (q < 3)
    {
        std::cout << "请输入您的账号";
        std::cin >> zhanghao1;
        std::cout << "请输入您的密码";
        std::cin >> mima1;
        if ((zhanghao1 == zhanghao) && (mima == mima1))
        {
            std::cout << "输入正确,已登录" << std::endl;
            break;
        }
        else
        {
            std::cout << "输入错误,请重试" << std::endl;
        }
        q++;
        if (q >= 3)
        {
            std::cout << "你已退出" << std::endl;
            return 0;
        }
    }
    std::cout << "等级" << iii << "\n";
    std::cout << "姓名: 请问\n";
    std::cout << "性别: 男\n";
    std::cout << "职业: 法师\n";
    std::cout << "生命: 12\n";
    std::cout << "攻击: 15\n";
    std::cout << "防御: 25\n";
}