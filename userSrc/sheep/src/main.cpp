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
int main()
{
    std::cout << jiafa(1, 2) << std::endl;
    std::cout << xiaoshujiafa(2.2, 1.2) << std::endl;
    std::cout << gongchang("牛") << std::endl;

    return 0;
}
