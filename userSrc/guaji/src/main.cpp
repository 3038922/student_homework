#include <iostream>
void player(std::string Name, std::string job, int Level, int life, int Attack, int Defense)
{
    std::cout << "姓名:" << Name << std::endl;
    std::cout << "职业:" << job << std::endl;
    std::cout << "等级:" << Level << std::endl;
    std::cout << "血量:" << life * Level << std::endl;
    std::cout << "攻击力:" << Attack * Level << std::endl;
    std::cout << "防御力:" << Defense * Level << std::endl;
}
void jh(int *a, int *b)
{
    if (*a < *b)
    {
        int ls = *b;
        *b = *a;
        *a = ls;
    }
}
int main()
{
    system("chcp 65001");
    int a = 100;
    int b = 200;
    std::cout << "交换前:a=" << a << "\tb=" << b << std::endl;
    jh(&a, &b);
    std::cout << "交换后:a=" << a << "\tb=" << b << std::endl;
    //player("吕布", "战士", 15, 1000, 200, 150);
    return 0;
}