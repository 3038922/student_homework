#include <iostream>
#include <windows.h>
void 菱形()
{
    //上半段
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8 - i; j++)
        {
            printf(" ");
        }

        for (int j = 0; j < 2 * i + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    //下半段
    for (int i = 8 - 2; i >= 0; i--)
    {
        for (int j = 0; j < (8 - i); j++)
        {
            printf(" ");
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
void 直角三角()
{
    for (int i = 1; i <= 8; i++)
    {
        for (int j = 1; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
void 等腰三角()
{
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8 - i; j++)
        {
            printf(" ");
        }

        for (int j = 0; j < 2 * i + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
void player(std::string Name, std::string job, int Level, int life, int Attack, int Defense)
{
    std::cout << "姓名:" << Name << std::endl;
    std::cout << "职业:" << job << std::endl;
    std::cout << "等级:" << Level << std::endl;
    std::cout << "血量:" << life * Level << std::endl;
    std::cout << "攻击力:" << Attack * Level << std::endl;
    std::cout << "防御力:" << Defense * Level << std::endl;
}
void swap(std::string *a, std::string *b)
{
    std::string temp = *a;
    *a = *b;
    *b = temp;
}
void swap(std::string **a, std::string **b)
{
    std::string *temp = *a;
    *a = *b;
    *b = temp;
}
void swap(int *a, int *b)
{
    if (*a < *b)
    {
        int temp = *b;
        *b = *a;
        *a = temp;
    }
}
int main()
{
    system("chcp 65001");
    直角三角();
    std::cout << "\n";
    等腰三角();
    std::cout << "\n";
    菱形();
    /*
    std::string *a = new std::string("abcd");
    std::string *b = new std::string("dcba");
    std::cout << "交换前:a=" << *a << "\tb=" << *b << std::endl;
    swap(&a, &b);
    std::cout << "交换后:a=" << *a << "\tb=" << *b << std::endl;

    std::cout << "指针a本身的地址大小:" << sizeof(&a) << " 指针a本身地址:" << &a << std::endl;
    std::cout << "指针a指向的地址的大小:" << sizeof(a) << " 指针a指向的地址:" << a << std::endl;
    std::cout << "指针a指向的地址的值大小:" << sizeof(*a) << " 指针a指向的值:" << *a << std::endl;
    delete a;
    delete b;
    a = nullptr;
    b = nullptr;
    std::cout << "删除后:" << std::endl;
    std::cout << "指针a本身的地址大小:" << sizeof(&a) << " 指针a本身地址:" << &a << std::endl;
    std::cout << "指针a指向的地址的大小:" << sizeof(a) << " 指针a指向的地址:" << a << std::endl;
    //std::cout << "指针a指向的地址的值大小:" << sizeof(*a) << " 指针a指向的值:" << *a << std::endl;
    int a, b;
    std::cout << "请输入要交换的数字:" << std::endl;
    std::cin >> a >> b;
    std::cout << "交换前:a=" << a << "\tb=" << b << std::endl;
    swap(&a, &b);
    std::cout << "交换后:a=" << a << "\tb=" << b << std::endl;
    player("吕布", "战士", 15, 1000, 200, 150);
    */
    return 0;
}