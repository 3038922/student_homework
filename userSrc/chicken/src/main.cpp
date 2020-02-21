#include <iostream>
using namespace std;
int zhengshu(int a)
{
    return a;
}
double xiaoshu(double a)
{
    return a;
}
std::string zifu(std::string a)
{
    return (a == "chicken") ? "shadoulesschicken" : "chicken";
}
int main()
{
    system("chcp 65001");
    cout << zhengshu(3) << endl;
    cout << xiaoshu(3.5) << endl;
    cout << zifu("chicken") << endl;
    return 0;
}