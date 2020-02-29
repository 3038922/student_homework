#include <Windows.h>
#include <array>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <random>
#include <string>
#include <vector>
void suiji()
{
    //生成 0 到 9 之间（包含）均匀分布的随机数
    std::uniform_real_distribution<double> u(0, 1);
    std::default_random_engine e; // 生成无符号随机整数
    for (size_t i = 0; i < 10; i++)
        // 将 u 作为随机数源
        // 每个调用返回在指定范围内并服从均匀分布的值
        std::cout << u(e) << " ";
    std::cout << std::endl;
}
void suiji2()
{
    std::default_random_engine e; // 生成随机无符号数
    for (size_t i = 0; i < 10; i++)
        // e() “调用”对象来生成下一个随机数
        std::cout << e() << std::endl;
}
int suiji(int a, int b)
{
    std::uniform_real_distribution<double> u(a, b);
    std::default_random_engine e;
    return u(e);
}