#include <iostream> // 首先导入 螺丝刀所在的工具库
void player(std::string Name, std::string job, int Level, int Hp, int Mp, std::string Weapon, int Attack, std::string Armor, int Defense, int mony, std::string skill1, std::string skill2, std::string skill3)
{
    std::cout << "姓名:" << Name << std::endl
              << "职业:" << job << std::endl
              << "等级:" << Level << std::endl
              << "血量:" << Hp << std::endl
              << "蓝量" << Mp << std::endl
              << "武器:" << Weapon << std::endl
              << "攻击力:" << Attack * Level << std::endl
              << "防具:" << Armor << std::endl
              << "防御力:" << Defense * Level << std::endl
              << "金钱数:" << mony << std::endl
              << job << "技能一" << skill1 << std::endl
              << job << "技能二" << skill2 << std::endl
              << job << "技能三" << skill3 << std::endl;
}
int main()
{
    system("chcp 65001");
    system("cls");
    player("sheep", "魔法师", 1, 100, 200, "小匕首", 20, "一级头", 10, 10, "羊叫", "羊跳", "羊癫疯");
    std::cout << std::endl;
    player("mouse", "战士", 1, 200, 1, "小匕首", 20, "一级头", 10, 10, "老鼠叫", "老鼠跳", "鼠癫疯");
    return 0;
}
