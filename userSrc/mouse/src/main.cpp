#include <iostream>
using namespace std;
void jiafa(int a, int b)
{
    cout << a + b << endl;
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
int main()
{
    jiafa(1, 2);
    xsjf(3.14, 6.28);
    lsgc("老鼠");

    return 0;
}
