#include <iostream>
using namespace std;
/*
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
*/
void waigua(int *a, int *b)
{
    int temp = *b;
    *b = *a;
    *a = temp;
}
int main()
{
    system("chcp 65001");
    int a = 100, b = 200;
    cout << "更改前:";
    cout << "a = " << a << " b = " << b << endl;
    waigua(&a, &b);
    cout << "更改后:";
    cout << "a = " << a << " b = " << b << endl;
    //cout << zhengshu(3) << endl;
    //cout << xiaoshu(3.5) << endl;
    //cout << zifu("chicken") << endl;
    return 0;
}