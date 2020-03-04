#pragma once
#include <iostream>
#include <random>
int jiafa(int a, int b)
{
    return a + b;
}
double jiafa(double a, double b)
{
    return a + b;
}
std::string gongchang(std::string a)
{
    return a == "牛" ? "牛肉" : "我是牛肉加工厂,只加工牛肉!";
}
void player(std::string name, std::string gender, std::string job, std::string skill1, std::string skill2, std::string skill3, int level)
{
    std::cout << "姓  名: " << name << std::endl
              << "等  级: " << level << std::endl
              << "性  别: " << gender << std::endl
              << "职  业: " << job << std::endl
              << "血  量: " << 250 * level << std::endl
              << "攻击力: " << 50 * level << std::endl
              << "防御力: " << 20 * level << std::endl
              << "技能 1: " << skill1 << std::endl
              << "技能 2: " << skill2 << std::endl
              << "技能 3: " << skill3 << std::endl;
}
void waiguajiaohuan(int *x, int *y)
{
    if (*x < *y)
    {
        int linshi;
        linshi = *x;
        *x = *y;
        *y = linshi;
    }
}
void jiaohuan(int **a, int **b)
{

    int *temp = *a;
    *a = *b;
    *b = temp;
}
void jiaohuan(std::string **a, std::string **b)
{

    std::string *temp = *a;
    *a = *b;
    *b = temp;
}
void cout_zhengfangxing()
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
}
void cout_sanjiaoxing_zhijiao()
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
}
void cout_sanjiaoxing_dengbian()
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10 - i - 1; j++)
        {
            std::cout << "  ";
        }
        for (int k = 0; k < i * 2 + 1; k++)
        {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
}
class people
{
  public:
    people(std::string name, std::string sex, int hp, int damage, int defense) : _name(name), _sex(sex), _hp(hp), _damage(damage), _defense(defense)
    {
        std::cout << _name << ",这是你的详细信息:" << std::endl;
        std::cout << "你的姓名是: " << _name << "\n"
                  << "你的性别是: " << _sex << "\n"
                  << "你的血量是: " << _hp << "\n"
                  << "你的攻击力是: " << _damage << "\n"
                  << "你的防御力是: " << _defense << std::endl;
    }
    void eat(people *people, std::string food)
    {
        std::cout << people->_name << "吃掉了" << food << "!" << std::endl;
    }
    void play(people *people, std::string toy)
    {
        std::cout << people->_name << "正在玩完" << toy << "!" << std::endl;
    }
    void sleep(people *people, double time)
    {
        std::cout << people->_name << "睡了" << time << "个小时!" << std::endl;
    }
    void ShowHp()
    {
        std::cout << _name << "当前血量: " << _hp << "!" << std::endl;
    }
    int ReturnHp()
    {
        return _hp;
    }
    void fight(people *people)
    {
        if (_sex == "女")
        {
            int InjuryCaused = 20 + _damage / (1 + people->_defense * ReturnRandomNumber());
            std::cout << _name << "攻击了" << people->_name << "!" << std::endl;
            std::cout << "造成了" << InjuryCaused << "点伤害!" << std::endl;
            people->_hp -= InjuryCaused;
            counterattack(people);
        }
        else
        {
            int InjuryCaused = _damage / (1 + people->_defense * ReturnRandomNumber());
            std::cout << _name << "攻击了" << people->_name << "!" << std::endl;
            std::cout << "造成了" << InjuryCaused << "点伤害!" << std::endl;
            people->_hp -= InjuryCaused;
            counterattack(people);
        }
    }

  private:
    std::string _name;
    std::string _sex;
    int _hp;
    int _damage;
    int _defense;
    double ReturnRandomNumber()
    {
        std::mt19937 rng;
        rng.seed(std::random_device()());
        /** 整数随机数 */
        std::uniform_int_distribution<std::mt19937::result_type> random_int(1, 10);
        /** 小数随机数 */
        std::uniform_real_distribution<double> random_double(0, 1);
        return random_double(rng);
    }
    void counterattack(people *people)
    {
        if (people->_sex == "女")
        {
            int InjuryCaused = 10 + people->_damage / (1 + _defense * ReturnRandomNumber()) / 2;
            std::cout << people->_name << "反击了" << _name << "!" << std::endl;
            std::cout << "造成了" << InjuryCaused << "点伤害!" << std::endl;
            _hp -= InjuryCaused;
        }
        else
        {
            int InjuryCaused = people->_damage / (1 + _defense * ReturnRandomNumber()) / 2;
            std::cout << people->_name << "反击了" << _name << "!" << std::endl;
            std::cout << "造成了" << InjuryCaused << "点伤害!" << std::endl;
            _hp -= InjuryCaused;
        }
    }
};
class Tree
{
  public:
    Tree(double altitude, double diameter, int age, std::string type, std::string color) : _altitude(altitude), _diameter(diameter), _age(age), _type(type), _color(color)
    {
        std::cout << "Tree类生成成功!" << std::endl;
    }
    ~Tree()
    {
        std::cout << "Tree类删除成功!" << std::endl;
    }
    void ShowAltitude()
    {
        std::cout << "这棵树的高度是: " << _altitude << "米" << std::endl;
    }
    void ShowDiameter()
    {
        std::cout << "这棵树的直径是: " << _diameter << "米" << std::endl;
    }
    void ShowAge()
    {
        std::cout << "这棵树的年龄是: " << _age << "岁" << std::endl;
    }
    void ShowType()
    {
        std::cout << "这棵树的种类是: " << _type << std::endl;
    }
    void ShowColor()
    {
        std::cout << "这棵树的颜色是: " << _color << std::endl;
    }

  private:
    double _altitude;
    double _diameter;
    int _age;
    std::string _type;
    std::string _color;
};