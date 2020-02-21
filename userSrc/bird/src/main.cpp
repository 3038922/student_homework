#include <iostream>
void player(std::string name, int level, std::string job, std::string skill1, std::string skill2, std::string skill3, std::string skill4)
{
    std::cout << "角色名：" << name << std::endl;
    std::cout << "角色等级：" << level << std::endl;
    std::cout << "角色职业：" << job << std::endl;
    std::cout << "技能1：" << skill1 << std::endl;
    std::cout << "技能2：" << skill2 << std::endl;
    std::cout << "技能3：" << skill3 << std::endl;
    std::cout << "技能4：" << skill4 << std::endl;
}

int jiafa(int a, int b)
{
    std::cin >> a;
    std::cin >> b;
    std::cout << a + b << std::endl;
}
double xiaoshujiafa(double x, double y)
{
    std::cin >> x;
    std::cin >> y;
    std::cout << x + y << std::endl;
}
std::string factory(std::string m)
{
    if (m == "鸡")
    {
        std::cout << "鸡肉" << std::endl;
    }
    else
    {
        std::cout << "鸡你太美" << std::endl;
    }
}
int main()
{
    std::cout << jiafa(23, 24) << std::endl;
    std::cout << xiaoshujiafa(2.3, 2.4) << std::endl;
    std::cout << factory("鸡") << std::endl;
    std::cout << factory("蔡某人") << std::endl;
}
int main()
{
    system("chcp 65001");

    /*
    //数组的排序(冒泡排序)
    int nums[] = {15, 25, 90, 23, 9};
    int temp = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4 - i; j++)
        {
            if (nums[j] > nums[j + 1])
            {
                temp = nums[j];
                nums[j + 1] = nums[j];
                nums[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        std::cout << nums[i] << std::endl;
    }

    //数组的排序(选择排序)

    int nums[] = {15, 25, 90, 23, 9};
    int min = nums[0];
    int minx = 0;
    int temp = 0;
    for (int i = 0; i < 5; i++)
    {
        min = nums[i];
        minx = i;
        for (int j = i + 1; j < 4 - i; j++)
        {
            if (nums[j] < min)
            {
                min = nums[j];
                minx = j;
            }
        }

        temp = nums[minx];
        nums[minx] = nums[i];
        nums[i] = temp;
    }
    for (int i = 0; i < 5; i++)
    {
        std::cout << nums[i] << std::endl;
    }

    //初学数组
    int nums[7] = {8, 4, 2, 1, 23, 344, 12};
    int m = 0;
    for (int i = 0; i <= 7; i++)
    {
        std::cout << nums[i];
    }
    std::cout << std::endl;
    for (int i = 0; i <= 7; i++)
    {
        m += nums[i];
    }
    std::cout << "和为" << m << "平均值为" << m / 7 << std::endl;
    int max = nums[0];
    int n = 0;
    for (int i = 0; i < 7; i++)
    {
        if (nums[i] > max)
        {
            nums[i] = max;
            n = i;
        }
    }
    std::cout << "最大值为" << max << std::endl;
    std::cout << "最大值的下标为" << n << std::endl;
    //图形打印
    //上半部分
    for (int i = 0; i <= 5; i++)
    {
        for (int k = 0; k <= 2 - i; k++)
        {
            std::cout << " " << std::endl;
        }
        for (int j = 0; j <= i * 2; j++)
        {
            std::cout << "*" << std::endl;
        }
        std::cout << std::endl;
    }
    //下半部分
    for (int i = 0; i <= 3; i++)
    {
        for (int k = 0; k <= i; k++)
        {
            std::cout << " " << std::endl;
        }
        for (int j = 0; j <= 4 - 2 * i; j++)
        {
            std::cout << "*" << std::endl;
        }
        std::cout << std::endl;
    }
    * /
        return 0;
}
//###*2 0
//##***1 2
//#*****0 4
//*******
//#*****0 4
//##***1 2
//###*2 0
//
