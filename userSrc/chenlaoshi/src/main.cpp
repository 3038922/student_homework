#include "../include/userAPI.hpp"
#include <iostream>
#include <windows.h>
class hero
{
  public:
    hero(std::string name, std::string sex, int hp, int mp, int gongjili) : _name(name), _sex(sex), _hp(hp), _mp(mp), _gongjili(gongjili)
    {
        std::cout << name << " 初始化成功" << std::endl;
    }
    void showHp()
    {
        std::cout << _name << "当前血量" << _hp << std::endl;
    }
    void showMp()
    {
        std::cout << _name << "当前蓝量" << _mp << std::endl;
    }

  private:
    const std::string _name;
    const std::string _sex;
    int _hp = 0;
    int _mp = 0;
    int _gongjili = 0;
    int _fangyuli = 0;
};
int main(int argc, char *argv[])
{
    int a;
    double b;
    std::string c;
    hero d("孙悟空", "男", 100, 10, 100);
    hero e("貂蝉", "女", 10, 100, 100);
    d.showHp();
    d.showMp();
    e.showMp();
    e.showHp();
    d.showHp();
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
