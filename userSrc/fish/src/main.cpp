#include <iostream>
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
    int x, y;
    std::cin >> x;
    std::cout << std::endl;
    std::cin >> y;
    jiaohuan(&x, &y);
    x += 100;
    std::cout << "x开挂后:" << x << "y制裁后:" << y << std::endl;
}
