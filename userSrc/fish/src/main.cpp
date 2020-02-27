#include <iostream>
#include <windows.h>
int jiaohuan(int *a, int *b)
{
    if (*a < *b)
    {
        int lingshi = *a;
        *b = *a;
        lingshi = *b;
    }
    return 0;
}
int main()
{
    system("chcp 65001");
    while (1 < 100)
    {
        std::string *a = new std::string("hh");
        Sleep(10);
    }
}
