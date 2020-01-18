#include <iostream>
int main()
{
    std::system("chcp 65001");
    std::system("cls");
    // &&:且 ||:或
    //    int a = 3
    //    int b = 2
    //    int c = 5
    //   std::cout << ((a==b)&&(b==c)) std::endl;
    //    std::cout << ((a==b)||(b==c)) std::endl;
    // if (zhanghao1 != zhanghao)
    // {
    //     std::cout << "您的账号错误" << std::endl;
    //     return 0;
    // }
    // if (mima1 != mima)
    // {
    //     std::cout << "你输入的密码错误" << std::endl;
    //     return 0;
    // }
    //    if ((zhanghao1 != zhanghao) || (mima1 != mima))
    //    {  std::cout << "\n防御力：" << 98 * level * 0.5;
    //     std::cout << "\n攻击力：" << 90000 * level * 10;
    //     std::cout << "\n生命：" << 100000 * level * 0.2;
    //     std::cout << "\n等级：" << level;
    //     return 0;
    //    }
    //   {   std::cout << "您输入的账号或密码错误" << std::endl
    //   return 0;
    //   }
    //     int jishuqi = 1;
    //     int jieguo = 0;
    //     while (jishuqi < 9999999999)
    //     {
    //         std::cout << jishuqi << " 傻逼 " << std::endl;
    //         jieguo = jieguo + jishuqi;
    //         jishuqi = jishuqi + 1;
    //     }
    //     std::cout << jieguo << std::endl;
    // }
    std::string zhanghao = "HLOVEJ";
    std::string mima = "896236";
    std::string zhanghao1;
    std::string mima1;
    int level = 10;
    int jishuqi = 0;
    while (jishuqi < 3)
    {
        std::cout << "请输入您的账号:";
        std::cin >> zhanghao1;
        std::cout << "请输入您的密码:";
        std::cin >> mima1;
        if ((zhanghao1 == zhanghao) && (mima1 == mima))
        {
            std::cout << "输入正确,登陆成功" << std::endl;
            break;
        }
        else
        {
            std::cout << "你输入的密码错误,再试一次" << std::endl;
        }
        if ((zhanghao1 == zhanghao) && (mima1 == mima))
            jishuqi++;
        if (jishuqi >= 3)
        {
            std::cout << "你是傻逼,输了" << jishuqi << "次,还错!!!" << std::endl;
            return 0;
        }
    }
    {
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
}