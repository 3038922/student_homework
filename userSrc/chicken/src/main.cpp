#include <Windows.h>
#include <iostream>
/*
int zhengshu(int a)
{
    return a;
}
double xiaoshu(double a)
{
    return a;
}
std::string zifu(std::string a)
{
    return (a == "chicken") ? "shadoulesschicken" : "chicken";
}
*/
void waigua(int *a, int *b)
{
    int temp = *b;
    *b = *a;
    *a = temp;
}
int main()
{
    std::string *a = new std::string("点一下完一年");
    std::cout << "指针a的值:" << *a << "指向的地址:" << a << "本身的地址:" << &a << std::endl;
    delete a;
    a = nullptr;
    /*
    system("chcp 65001");
    int a = 100, b = 200;
    std::cout << "更改前:";
    std::cout << "a = " << a << " b = " << b << std::endl;
    waigua(&a, &b);
    std::cout << "更改后:";
    std::cout << "a = " << a << " b = " << b << std::endl;
    //cout << zhengshu(3) << endl;
    //cout << xiaoshu(3.5) << endl;
    //cout << zifu("chicken") << endl;
    */
    return 0;
}