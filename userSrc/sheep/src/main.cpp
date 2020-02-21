#include <iostream> // 首先导入 螺丝刀所在的工具库
//牛->工厂->肉牛;
int jiafa(int a, int b);
double xiaoshujiafa(double a, double b);
std::string gongchang(std::string a)
{
    if (a == "牛")
        return "牛肉";
    else
        return "我是牛肉厂 只加工牛肉";
}
void player(std::string name, int level, std::string job, std::string skill1, std::string skiil2, std::string skill3)
{
    std::cout << "等  级: " << dengji << "\n"
              << "姓  名: 后羿\n"
              << "性  别: 男♂\n"
              << "职  业: 射手\n"
              << "技能 1: 多重箭矢\n"
              << "技能 2: 落日余晖\n"
              << "大  招: 灼日之矢\n"
              << "血  量: " << 250 * dengji << "\n"
              << "攻击力: " << 50 * dengji << "\n"
              << "防御力: " << 20 * dengji << "\n"
              << std::endl;
}
int main()
{
    std::cout << jiafa(1, 2) << std::endl;
    std::cout << xiaoshujiafa(2.2, 1.2) << std::endl;
    std::cout << gongchang("牛") << std::endl;

    return 0;
}
