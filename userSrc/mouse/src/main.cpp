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
int main()
{
    cout << jf(1, 6) << endl;
    cout << xsjf(3.14, 6.28) << endl;
    cout << lsgc("老鼠") << endl;

    return 0;
}
