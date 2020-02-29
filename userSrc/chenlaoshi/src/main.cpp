
#include "publicAPI.hpp"
#include <iostream>
#include <windows.h>

class Mouse
{
  public:                                                     //公有的
    Mouse(std::string a, std::string b) : _name(a), _color(b) //构造函数
    {
        std::cout << "Mouse类 创建成功!" << std::endl;
    }
    ~Mouse() //析构函数
    {
        std::cout << "Mouse类 删除成功!" << std::endl;
    }
    void showColor()
    {
        std::cout << _name << " 是 " << _color << std::endl;
    }
    void showName()
    {
        std::cout << "我叫: " << _name << std::endl;
    }

  private: //私有的a
    std::string _name, _color;
};
int main(int argc, char *argv[])
{
    Mouse w("王老鼠", "灰色");
    Mouse g("狗老鼠", "黑色");
    w.showName();
    g.showName();
    w.showColor();
    g.showColor();
    Hero sunwukong("孙悟空", "男", 200, 10, 80, 50);
    Hero diaocha("貂蝉", "女", 100, 100, 100, 80);
    while (sunwukong.hp() > 0 || diaocha.hp() > 0)
    {
        std::cout << std::endl;
        sunwukong.attack(&diaocha);
        std::cout << std::endl;
        diaocha.attack(&sunwukong);
        std::cout << std::endl;
    }
    sunwukong.showHp();
    diaocha.showHp();

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
    std::cout << "程序结束" << std::endl;
    return 0;
}
