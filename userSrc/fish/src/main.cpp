#include <iostream>
int jiafa(int a, int b)
{
    std::cin >> a;
    std::cin >> b;
    std::cout << a + b << std::endl;
    return a + b;
}
double xiaoshujiafa(double c, double d)
{
    std::cin >> c;
    std::cin >> d;
    std::cout << c + d << std::endl;
    return c + d;
}
std::string zifu(std::string e)
{
    if (e == "鱼")
    {
        std::cout << "我是鱼" << std::endl;
    }
    else
    {
        std::cout << "鱼是我" << std::endl;
    }
    return e;
}
int main()
{
    system("chcp 65001");
    std::cout << jiafa(1, 2) << std::endl;
    std::cout << xiaoshujiafa(1.1, 1.2) << std::endl;
    std::cout << zifu("鱼") << std::endl;
}
