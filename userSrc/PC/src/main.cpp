#include <iostream>
void player(std::string Name, std::string job, int Level, int Hp, std::string Weapon, int Attack, std::string Armor, int Defense, std::string skill1, std::string skill2, std::string skill3)
{
    std::cout << "姓名:" << Name << std::endl
              << "职业:" << job << std::endl
              << "等级:" << Level << std::endl
              << "血量:" << Hp << std::endl
              << "武器:" << Weapon << std::endl
              << "攻击力:" << Attack * Level << std::endl
              << "防具:" << Armor << std::endl
              << "防御力:" << Defense * Level << std::endl
              << job << "技能一" << skill1 << std::endl
              << job << "技能二" << skill2 << std::endl
              << job << "技能三" << skill3 << std::endl;
}
void waiguajiaohuan(int *a, int *b)
{
    if (*a < *b)
    {
        int linshi = *b;
        *b = *a;
        *a = linshi;
    }
}
int main()
{
    system("chcp 65001");
    system("cls");
    int xuanxuan = 100, fish = 200;
    std::string z = "asdfas";
    int *cow = &xuanxuan;
    xuanxuan += 12;
    *cow += 33;
    std::cout << "xuanxuan的值:" << xuanxuan << " xuanxuan的地址:" << &xuanxuan << std::endl;
    std::cout << "cow指向的值" << *cow << " cow指向的地址" << cow << " cow自己的地址" << &cow << std::endl;
    std::cout << "交换前 xuanxuan=" << xuanxuan << " fish=" << fish << std::endl;
    waiguajiaohuan(&xuanxuan, &fish);
    std::cout << "交换后 xuanxuan=" << xuanxuan << " fish=" << fish << std::endl;
    return 0;
}

//{
// system("chcp 65001");
// system("cls");
// std::string zhanghao = "huangxinyang";
// std::string mima = "330822200911221213";
// std::string zhanghao1;
// std::string mima1;
// int level = 15;

// int b = 0;
// while (b <= 3)
// {
//     std::cout << "请输入您的账号:";
//     std::cin >> zhanghao1;
//     std::cout << "请输入您的密码:";
//     std::cin >> mima1;
//     if ((zhanghao == zhanghao1) && (mima == mima1))
//     {
//         std::cout << "输入正确,正在进入程序" << std::endl;
//         std::cout << "您的等级是:15" << std::endl;
//         std::cout << "您的账号是:huangxinyang"
//                   << "\n";
//         std::cout << "***/姓名\\***：百里守约\n"
//                   << "***/职业\\***：射手\n"
//                   << "***/种族\\***:人\n"
//                   << "\n***/生命值\\***：" << 1100 * level * 0.9
//                   << "\n***/攻击力\\***:" << 1100 * level * 0.8
//                   << "\n***/防御力\\***:" << 1112 * level * 0.5
//                   << "\n***/蓝条\\***:" << 1210 * level * 0.3
//                   << std::endl;
//         break;
//     }
//     else
//     {
//         std::cout << "请在输入一次大笨蛋" << std::endl;
//     }
//     b++;
//     if (b >= 3)
//     {
//         std::cout << "傻逼,这" << b << "次还错" << std::endl;
//         return 0;
//     }
// }
//}