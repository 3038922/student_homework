#include <iostream>
using namespace std;
int main()
{
    system("chcp 65001");
    string z = "liuluozheng";
    string m = "8982E";
    string z1;
    string m1;
    int aj = 1;
    cout << "请输入您的账号" << endl;
    cin >> z1;
    cout << "请输入您的密码" << endl;
    cin >> m1;
    if (z != z)
    {

        return 0;
    }
    if (m != m1)
    {

        cout << "你输入的账号和密码错误!!!" << endl;
        return 0;
    }
    cout << "您的等级是: " << aj << std::endl;
    std::cout << "姓名：凯皇\n性别：男♂\n";
    cout << "种族：凯皇——战士\n";
    cout << "技能1攻击力: " << 1000000 * aj << "\n";
    cout << "技能2攻击力: " << 10000000 * aj << "\n";
    cout << "技能3攻击力: " << 100000000 * aj << "\n";
    cout << "生命力：" << 10000 * aj << "\n"
         << endl;

    return 0;
}