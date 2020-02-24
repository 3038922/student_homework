#include <iostream>
using namespace std;
int jf(int a, int b)
{
    return a + b;
}
double xsjf(double a, double b)
{
    return a + b;
}
string lsgc(string laoshu)
{
    if (laoshu == "老鼠")
    {
        return "老鼠肉";
    }
    else
    {
        return "只加工老鼠肉";
    }
}
void jh(int *a, int *b)
{
    int linshi = *b;
    *b = *a;
    *a = linshi;
}
void play(string name, string zhuangbei, string zhiye, string jn1, string jn2, string jn3, int lever, int hp, int gongjili, int hujiazhi, int jinbi)
{
    std::cout << "姓名:" << name << endl
              << "装备:" << zhuangbei << endl
              << "职业:" << zhiye << endl
              << zhiye << "技能一" << jn1 << endl
              << zhiye << "技能二" << jn2 << endl
              << zhiye << "技能三" << jn3 << endl
              << "等级" << lever << endl
              << "攻击力:" << gongjili * lever << endl
              << "防御力:" << hujiazhi * lever << endl
              << "金钱数:" << jinbi << endl;
}
int main()
{
    int a = 1000;
    int b = 2000;
    system("chcp 65001");
    system("cls");
    play("蔡徐坤", "篮球", "射手", "篮球投射", "鸡你太美", "篮球乱射", 6666, 6666, 6666, 6666, 6666);
    std::cout << std::endl;
    play("古天乐", "麻痹戒指", "战士", "爆装备", "元宝回收", "元宝换钱", 999, 999, 999, 999, 999);
    cout << jf(1, 6) << endl;
    cout << xsjf(3.14, 6.28) << endl;
    cout << lsgc("老鼠") << endl;
    jh(&a, &b);
    cout << "交换后的值是" << a << "     " << b;
    return 0;
}
