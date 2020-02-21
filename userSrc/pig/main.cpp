#include <iostream>
void jiafa(int a, int b)
{
    std::cout << a + b << std::endl;
}
void xiaoshujiafa(double c, double d)
{

    std::cout << c + d << std::endl;
}
std::string zi(std::string e)
{
    if (e == "牛")
        return "牛";
    else
        return "牛牛牛";
}
void palyer(std::string name, int level, std::string mayjor, std::string skill1, std::string skill2, std::string skill3)
{
    std::cout << "名字：" << name << std::endl;
    std::cout << "等级：" << level << std::endl;
    std::cout << "职业：" << mayjor << std::endl;
    std::cout << "技能1：" << skill1 << std::endl;
    std::cout << "技能2：" << skill2 << std::endl;
    std::cout << "技能3：" << skill3 << std::endl;
}
int main()
{
    jiafa(6, 6);
    xiaoshujiafa(7, 8);
    std::cout << zi("牛");
    /*
    double attack1 = 1;
    double attack2 = 2;
    double attack3 = 3;
    cout << left;                                                                   //从左边开始
    cout << setfill('*');                                                           //间隔中间的符号
    cout << setw(5) << attack1 << setw(6) << attack2 << setw(7) << attack3 << endl; //setw()控制输出的间隔*/
    /*
    int sum = 1;
    int sum1 = 0;

    while (sum <= 100)
    {
        sum1 += sum;
        cout << sum1 << endl;
        sum++;
    }*/

    /*
    int num1 = 5;
    int num2 = 2;
    cout << num1 % num2 << endl;       //取模的符号和第一个数的符号有关
    double num3 = (double)num1 / num2; //强制转换类型:(double,short,int,long,float...)变量或数值
    cout << num3 << endl;
    bool falg = true;
    cout << boolalpha; //将0、1转化为false,true
    cout << (15 < 18) << endl;*/

    /*
    int a = 16;
    int n = 0;
    while (n < 5)
    {
        cout << (a << n) << endl;//左移，右移;<<,>>可用来计算2的倍数
        n++;
    }
    // cout << sizeof(char) << endl;
    int num = 5 > 9 ? 1 : 3;
    cout << num << endl;*/
    /*
    char a = '\0';
    cout << "请输入名称(在A-Z之间)" << endl;
    cin >> a;
    if (a >= 'A' && a <= 'Z')
    {
        cout << "输入有效" << endl;
    }
    else
    {
        cout << "无效" << endl;
    }*/
    /*int choice = 1;
    switch (choice)
    {
        case 1:
            break;
        case 2:
            break;
        default:

            break;
    }*/
    /*int n = 0;
    while (n++ <= 2)
        ;
    cout << "n的值是:" << n << endl;*/
    /*int day = 30;
    int dayofweek = 2;
    std::cout << "一\t二\t三\t四\t五\t六\t日\t" << std::endl;
    for (int i = 0; i < dayofweek - 1; i++)
    {
        std::cout << "\t";
    }
    for (int i = 1; i <= day; i++)
    {
        std::cout << i;
        if ((i + dayofweek - 1) % 7 == 0)
        {
            std::cout << "\n";
        }
        else
        {
            std::cout << "\t";
        }
    }
    std::cout << std::endl;*/
    /*const double PRICE = 5000;
    double guessprice;
    int guesscount = 0;
    for (;;)
    {
        std::cin >> guessprice;
        guesscount++;
        if (guessprice > PRICE)
        {
            std::cout << "大了" << std::endl;
        }
        else if (guessprice < PRICE)
        {
            std::cout << "小了" << std::endl;
        }
        else
        {
            std::cout << "对了" << std::endl;
            break;
        }
    }*/
    /*double money;
    int count = 0;
    for (int i = 0; i < 5; i++)
    {
        std::cin >> money;
        if (money > 500)
        {
            continue; //不进行下面所有的程序,跳过本次循环i++进行下次循环
        }
        count++;
    }
    int sum = 0;
    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 == 1)
        {
            continue;
            ;
        }
        sum += i;
    }
    std::cout << sum << std::endl;*/
    /*int shape = 'A';
    //外层循环控制(行数,换行)
    //内层循环控制(行数,列的图形)
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j <= 2 - i; j++)
        {
            std::cout << " ";
        }
        for (int j = 0; j <= 2 * i; j++)
        {
            std::cout << (char)shape; //强行转化成字符
        }
        shape++;
        std::cout << std::endl;
    }*/
    /*int num[]{1, 'c', 3}; //默认'c'整型
    std::cout << num[1] << std::endl;
    int num2[]{88, true};
    std::cout << num2[1];
    const int N = 4;
    int nums[N];
    for (int i = 0; i < N; i++)
    {
        std::cin >> nums[i];
    }
    for (int i = 0; i < sizeof(nums) / sizeof(int); i++) //sizeof(nums) / sizeof(int)只能针对基本类型
    {
        std::cout << nums[i] << std::endl;
    }
    int sum = 0;
    int num3[]{67, 87, 1, 2, 3, 4, 5, 78};
    int length = sizeof(num3) / sizeof(int);
    for (int i = 0; i < length; i++)
    {
        std::cout << num3[i] << '\t';
    }
    for (int i = 0; i < length; i++)
    {
        sum += num3[i];
    }
    std::cout << sum << "\t" << sum / length << std::endl;
    int max = num3[0];
    int maxIndex = 0;
    for (int i = 1; i < length; i++)
    {
        if (num3[i] > max)
        {
            max = num3[i];
            maxIndex = i;
        }
    }
    std::cout << num3[maxIndex] << std::endl;
    std::cout << maxIndex;*/
    //冒泡排序
    int tmp;
    int num[]{1, 34, 5, 7, 8};
    int const N = sizeof(num) / sizeof(int);
    /*for (int i = 0; i < N - 1; i++)
    {
        for (int j = 0; j < N - 1 - i; j++)
        {
            if (num[j] < num[j + 1])
            {
                tmp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = tmp;
            }
        }
    }*/
    //选择排序
    /*int min = num[0];
    int numIndex = 0;

    for (int i = 0; i < N - 1; i++)
    {
        min = num[i];
        numIndex = i;
        for (int j = i + 1; j < N; j++)
        {
            if (num[j] < min)
            {
                min = num[j];
                numIndex = j;
            }
        }
        if (numIndex > i)
        {
            tmp = num[numIndex];
            num[numIndex] = num[i];
            num[i] = tmp;
        }
    }
    for (int i = 0; i < N; i++)
    {
        std::cout << num[i] << std::endl;
    }*/

    /*int *ptr1 = nullptr; //初始化
    void *ptr2 = ptr1;
    cout << boolalpha;
    cout << (ptr1 == ptr2) << endl;
    int a = 0;
    int *ptr_year = &a; //数据类型*指针变量名 //取地址符&
    *ptr_year = a;
    char ch = 'a';
    char *ptr_ch = &ch;
    cout << ptr_ch << (char *)ptr_ch << endl;*/

    return 0;
}