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
void a(int level, std::string name, std::string mayjor, std::string skill1, std::string skill2, std::string skill3)
{
    std::cout << "等级：" << level << std::endl;
    std::cout << "名字：" << name << std::endl;
    std::cout << "职业：" << mayjor << std::endl;
    std::cout << "技能1：" << skill1 << std::endl;
    std::cout << "技能2：" << skill2 << std::endl;
    std::cout << "技能3：" << skill3 << std::endl;
}
void jiaohuan(int *a, int *b)
{
    if (*a < *b)
    {
        int temp;
        temp = *b;
        *b = *a;
        *a = temp;
    }
}
int main()
{
    int c;
    int b;
    std::cin >> c >> b;
    xiaoshujiafa(7, 8);
    std::cout << zi("牛");
    a(5, "玩家1", "战士", "技能1", "技能2", "技能3");
    a(5, "玩家2", "战士", "技能1", "技能2", "技能3");
    jiaohuan(&c, &b);
    std::cout << c << '\t' << b << std::endl;
    return 0;
}