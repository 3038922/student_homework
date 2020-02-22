#include <iostream>
void player(int level, int attack, int Hp, int Mp, std::string name, std::string weapon, std::string defense, std::string job, std::string pskill, std::string skill1, std::string skill2, std::string skill3, std::string skill4)
{
    std::cout << "姓名：" << name << std::endl;
    std::cout << "等级：" << level << std::endl;
    std::cout << "职业：" << job << std::endl;
    std::cout << "武器:" << weapon << std::endl;
    std::cout << "防具:" << defense << std::endl;
    std::cout << "伤害:" << attack * level << std::endl;
    std::cout << "血量:" << Hp * level << std::endl;
    std::cout << "蓝量:" << Mp * level << std::endl;
    std::cout << "被动技能:" << pskill << std::endl;
    std::cout << "技能1：" << skill1 << std::endl;
    std::cout << "技能2：" << skill2 << std::endl;
    std::cout << "技能3：" << skill3 << std::endl;
    std::cout << "技能4：" << skill4 << std::endl;
}
int main()
{
    system("chcp 65001");
    player(18, 234, 3666, 9999, "疾风剑豪      亚索", "疾风之刃", "亡者的板甲", "刺客", "浪客之道", "斩钢闪", "风之壁障", "踏前斩", "狂风绝息斩");
    std::cout
        << std::endl;
    player(18, 435, 4666, 9999, "暗裔剑魔      亚托克斯", "饮血巨剑", "振兴之铠", "战士", "赐死剑气", "暗裔利刃", "恶火束链", "暗影冲决", "大灭");
    return 0;
}

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
    
        return 0;
}*/