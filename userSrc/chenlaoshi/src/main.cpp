#include "../include/userAPI.hpp"
#include <iostream>
#include <windows.h>
void swap(int **a, int **b)
{
    int *temp = *a;
    *a = *b;
    *b = temp;
}
int main(int argc, char *argv[])
{
    std::string *a = new std::string("毛轩轩最聪明");

    // b = new int(20);
    std::cout << "指针a本身的地址大小:" << sizeof(&a) << " 指针a本身地址:" << &a << std::endl;
    std::cout << "指针a指向的地址的大小:" << sizeof(a) << " 指针a指向的地址:" << a << std::endl;
    std::cout << "指针a指向的地址的值大小:" << sizeof(*a) << " 指针a指向的值:" << *a << std::endl;
    delete a;
    a = nullptr;
    std::cout << "删除后:" << std::endl;
    std::cout << "指针a本身的地址大小:" << sizeof(&a) << " 指针a本身地址:" << &a << std::endl;
    std::cout << "指针a指向的地址的大小:" << sizeof(a) << " 指针a指向的地址:" << a << std::endl;
    std::cout << "指针a指向的地址的值大小:" << sizeof(*a) << " 指针a指向的值:" << *a << std::endl;
    while (1)
    {
        std::string *a = new std::string("点一下玩一年");
        Sleep(10);
    }
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
