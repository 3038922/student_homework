#include <iostream>

int main(int argc, char *argv[])
{
    std::string *a = new std::string("aaa");
    std::cout << "原来地址大小:" << sizeof(&a) << " 指针a本身地址:" << &a << std::endl;
    std::cout << "指向的地址的大小:" << sizeof(a) << " 指针a指向的地址:" << a << std::endl;
    std::cout << "指针a指向的地址的值大小:" << sizeof(*a) << " 指针a指向的值:" << *a << std::endl;
    delete a;
    a = nullptr;
    std::cout << "删除后:" << std::endl;
    std::cout << "原来地址大小:" << sizeof(&a) << " 指针a本身地址:" << &a << std::endl;
    std::cout << "指向的地址的大小:" << sizeof(a) << " 指针a指向的地址:" << a << std::endl;
    std::cout << "指针a指向的地址的值大小:" << sizeof(*a) << " 指针a指向的值:" << *a << std::endl;
}