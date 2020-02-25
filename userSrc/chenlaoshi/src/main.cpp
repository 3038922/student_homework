#include "../include/userAPI.hpp"
#include <iostream>
void swap(int **a, int **b)
{
    int *temp = *a;
    *a = *b;
    *b = temp;
}
int main(int argc, char *argv[])
{

    int *a, *b;
    a = new int(10);
    b = new int(20);

    std::cout << "交换前指向的地址 a:" << a << " b:" << b << std::endl;
    std::cout << "交换前值 a:" << *a << " b:" << *b << std::endl;

    swap(&a, &b);
    std::cout << "交换后指向地址 a:" << a << " b:" << b << std::endl;
    std::cout << "交换后值 a:" << *a << " b:" << *b << std::endl;
    delete a;
    delete b;
    a = nullptr;
    b = nullptr;

    lv_init();
    hal_init();
    demo_create();
    while (1)
    {
        lv_task_handler();
        Sleep(10); /*Just to let the system breathe */
    }

    return 0;
}
