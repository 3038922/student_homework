#include <iostream>
// int main()
// {
//     system("chcp 65001");
//     system("cls");
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
// std::string zhanghao = "zsc2008";
// std::string mima = "123456789qwe";
// std::string zhanghao1;
// std::string mima1;
// int level = 1;
// int jishuqi = 0;

// while (jishuqi < 3)
// {
//     std::cout << "请输入您的账号: ";
//     std::cin >> zhanghao1;
//     std::cout << "请输入您的密码: ";
//     std::cin >> mima1;
//     if ((zhanghao1 == zhanghao) && (mima1 == mima))
//     {
//         std::cout << "输入正确，登陆成功。" << std::endl;
//         break;
//     }
//     else
//     {
//         std::cout << "输入错误，请重试。" << std::endl;
//     }
//     jishuqi++;
//     if (jishuqi >= 3)
//     {
//         std::cout << "输了" << jishuqi << "次还错" << std::endl;
//         return 0;
//     }
// }
void player(int level, std::string Name, std::string job, std::string skill1, std::string skill2, std::string skill3, int Mp, int Hp, int Defense, int Attack)
{
    std::cout << "姓  名:" << Name << std::endl
              << "职  业:" << job << std::endl
              << "等  级:" << level << std::endl
              << job << "技能一:" << skill1 << std::endl
              << job << "技能二:" << skill2 << std::endl
              << job << "大  招:" << skill3 << std::endl
              << "蓝  量:" << Mp * level << std::endl
              << "血  量:" << Hp * level << std::endl
              << "防御力:" << Defense * level << std::endl
              << "攻击力:" << Attack * level << std::endl;
}
int main()
{
    system("chcp 65001");
    system("cls");
    player(5, "玩家一", "法师", "打一下", "打两下", "打五下", 400, 400, 100, 50);
    std::cout << std::endl;
    player(5, "玩家二", "战士", "捅一下", "捅两下", "捅五下", 100, 300, 200, 100);
}