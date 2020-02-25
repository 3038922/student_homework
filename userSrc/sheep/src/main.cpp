#include <iostream> // 首先导入 螺丝刀所在的工具库
//牛->工厂->肉牛;
// int jiafa(int a, int b);
// double xiaoshujiafa(double a, double b);
// std::string gongchang(std::string a)
// {
//     if (a == "牛")
//         return "牛肉";
//     else
//         return "我是牛肉厂 只加工牛肉";
// }
// void player(std::string Name, std::string job, int Level, int Hp, int Mp, std::string Weapon, int Attack, std::string Armor, int Defense, int mony, std::string skill1, std::string skill2, std::string skill3)
// {

//     std::cout << "姓名:" << Name << std::endl
//               << "职业:" << job << std::endl
//               << "等级:" << Level << std::endl
//               << "血量:" << Hp << std::endl
//               << "蓝量" << Mp << std::endl
//               << "武器:" << Weapon << std::endl
//               << "攻击力:" << Attack << std::endl
//               << "防具:" << Armor << std::endl
//               << "防御力:" << Defense << std::endl
//               << "金钱数:" << mony << std::endl
//               << job << "技能一" << skill1 << std::endl
//               << job << "技能二" << skill2 << std::endl
//               << job << "技能三" << skill3 << std::endl;
// }
// void aaa(std::string *a, std::string *b)
// {
//     *a = *a ^ *b;
//     *b = *a + *b;
//     *a = *a + *b;
// }
void swap(int **a, int **b)
{
    int *temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    std::string c = "c", d = "d";
    std::string *a = &c, *b = &d;
    std::cout << "a:" << *a << "b:" << *b << std::endl;
    swap(a, b);
    std::cout << "a:" << *a << "b:" << *b << std::endl;
    return 0;
}
