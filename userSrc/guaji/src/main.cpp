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
int main()
{
    player("吕布", "战士", 15, 1000, 200, 150);
    return 0;
}