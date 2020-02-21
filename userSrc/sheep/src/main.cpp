#include <iostream> // 首先导入 螺丝刀所在的工具库
//牛->工厂->肉牛;
int jiafa(int a, int b);
double xiaoshujiafa(double a, double b);
std::string gongchang(std::string a)
{
    if (a == "牛")
        return "牛肉";
    else
        return "我是牛肉厂 只加工牛肉";
}
void player(std::string name, int level, std::string job, std::string skill1, std::string skill2, std::string skill3)
{
    std::cout << "姓名:" << name << "\n"
              << "等级:" << level << "\n"
              << "职业:" << job << "\n"
              << "召唤师技能一:" << skill1 << "\n"
              << "召唤师技能二:" << skill2 << "\n"
              << "召唤师技能三:" << skill3 << "\n";
}
int main()
{
    std::cout << jiafa(1, 2) << std::endl;
    std::cout << xiaoshujiafa(2.2, 1.2) << std::endl;
    std::cout << gongchang("牛") << std::endl;

    return 0;
}
