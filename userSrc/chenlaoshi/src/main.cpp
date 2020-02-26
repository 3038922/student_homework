#include "../include/userAPI.hpp"
#include <iostream>
#include <windows.h>
void asdf(int **a, int **b)
{
    int *temp = *a;
    *a = *b;
    *b = temp;
}
void asdf(std::string **a, std::string **b)
{
    std::string *temp = *a;
    *a = *b;
    *b = temp;
}
int _jiafa(int a, int b)
{
    return a + b;
}
double _jiafa(double a, double b)
{
    return a + b;
}
void coutZhengfangxing()
{
    for (int a = 0; a < 10; a++)
    {
        for (int b = 0; b < 10; b++)
        {
            std::cout << " □ ";
        }
        std::cout << std::endl;
    }
}
void coutZhiJiaoSanJiaoXing()
{
}
int main(int argc, char *argv[])
{
    coutZhengfangxing();

    // double array[2] = {2.22, 12.2};
    // std::cout << array[0] << " " << array[1] << std::endl;
    // std::cout << "array[0]的地址:" << *array << " array[1]的地址:" << *(array + 1) << std::endl;

    // std::string *a = new std::string("牛肉蒸最聪明");
    // std::string *b = new std::string("狗大树最奇葩");
    // std::cout << "交换前: a=" << *a << " b=" << *b << std::endl;
    // asdf(&a, &b);
    // std::cout << "交换后: a=" << *a << " b=" << *b << std::endl;

    // std::cout << "指针a本身的地址大小:" << sizeof(&a) << " 指针a本身地址:" << &a << std::endl;
    // std::cout << "指针a指向的地址的大小:" << sizeof(a) << " 指针a指向的地址:" << a << std::endl;
    // std::cout << "指针a指向的地址的值大小:" << sizeof(*a) << " 指针a指向的值:" << *a << std::endl;
    // delete a;
    // delete b;
    // a = b = nullptr;
    // std::cout << "删除后:" << std::endl;
    // std::cout << "指针a本身的地址大小:" << sizeof(&a) << " 指针a本身地址:" << &a << std::endl;
    // std::cout << "指针a指向的地址的大小:" << sizeof(a) << " 指针a指向的地址:" << a << std::endl;
    // // std::cout << "指针a指向的地址的值大小:" << sizeof(*a) << " 指针a指向的值:" << *a << std::endl;
    // std::cout << "121212" << std::endl;
    // std::cout << "交换前指向的地址 a:" << a << " b:" << b << std::endl;
    // std::cout << "交换前值 a:" << *a << " b:" << *b << std::endl;

    // swap(&a, &b);
    // std::cout << "交换后指向地址 a:" << a << " b:" << b << std::endl;
    // std::cout << "交换后值 a:" << *a << " b:" << *b << std::endl;
    // delete a;
    // delete b;

    // b = nullptr;

    // lv_init();
    // hal_init();
    // demo_create();
    // while (1)
    // {
    //     lv_task_handler();
    //     Sleep(10); /*Just to let the system breathe */
    // }

    return 0;
}
