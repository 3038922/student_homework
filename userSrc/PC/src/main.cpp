#include <iostream>
int main()
{
    system("chcp 65001");
    system("cls");
    std::string zhanghao = "huangxinyang";
    std::string mima = "330822200911221213";
    std::string zhanghao1;
    std::string mima1;
    int level = 15;

    int b = 0;
    while (b <= 3)
    {
        std::cout << "请输入您的账号:";
        std::cin >> zhanghao1;
        std::cout << "请输入您的密码:";
        std::cin >> mima1;
        if ((zhanghao == zhanghao1) && (mima == mima1))
        {
            std::cout << "输入正确,正在进入程序" << std::endl;
            std::cout << "您的等级是:15" << std::endl;
            std::cout << "您的账号是:huangxinyang"
                      << "\n";
            std::cout << "***/姓名\\***：百里守约\n"
                      << "***/职业\\***：射手\n"
                      << "***/种族\\***:人\n"
                      << "\n***/生命值\\***：" << 1100 * level * 0.9
                      << "\n***/攻击力\\***:" << 1100 * level * 0.8
                      << "\n***/防御力\\***:" << 1112 * level * 0.5
                      << "\n***/蓝条\\***:" << 1210 * level * 0.3
                      << std::endl;
            break;
        }
        else
        {
            std::cout << "请在输入一次大笨蛋" << std::endl;
        }
        b++;
        if (b >= 3)
        {
            std::cout << "傻逼,这" << b << "次还错" << std::endl;
            return 0;
        }
    }
}