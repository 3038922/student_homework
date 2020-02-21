#include <iostream>
void jiafa(int a, int b)
{
    std::cout << a + b << std::endl;
}
void xiaoshujiafa(double c, double d)
{

    std::cout << c + d << std::endl;
}
std::string zi(std::string e)
{
    if (e == "牛")
        return "牛";
    else
        return "牛牛牛";
}
void palyer(std::string name, int level, std::string mayjor, std::string skill1, std::string skill2, std::string skill3)
{
    std::cout << "名字：" << name << std::endl;
    std::cout << "等级：" << level << std::endl;
    std::cout << "职业：" << mayjor << std::endl;
    std::cout << "技能1：" << skill1 << std::endl;
    std::cout << "技能2：" << skill2 << std::endl;
    std::cout << "技能3：" << skill3 << std::endl;
}
int main()
{
    jiafa(6, 6);
    xiaoshujiafa(7, 8);
    std::cout << zi("牛");

    return 0;
}