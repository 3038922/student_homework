/*
#include <Windows.h>
#include <iostream>
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
void waigua(int *a, int *b)
{
    int temp = *b;
    *b = *a;
    *a = temp;
}
void waigua(std::string **a, std::string **b)
{
    std::string *temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    system("chcp 65001");
    std::string *a = new std::string("点一下完一年");
    std::cout << "指针a的值:" << *a << "指向的地址:" << a << "本身的地址:" << &a << std::endl;
    delete a;
    a = nullptr;
    //std::cout << "指向的地址:" << a << "本身的地址:" << &a << "指针a的值:" << *a << std::endl;
    int a = 100, b = 200;
    std::cout << "更改前:";
    std::cout << "a = " << a << " b = " << b << std::endl;
    waigua(&a, &b);
    std::cout << "更改后:";
    std::cout << "a = " << a << " b = " << b << std::endl;
    //cout << zhengshu(3) << endl;
    //cout << xiaoshu(3.5) << endl;
    //cout << zifu("chicken") << endl;
    return 0;
}
*/
#include <array>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

int main()
{
    system("chcp 65001");
    //1、设定基础参数
    /** 父亲的姓名 */
    std::string value_father_name;
    /** 女儿的姓名 */
    std::string value_daughter_name;
    /** 女儿生日的月份 */
    int value_birth_month;
    /** 女儿生日的日期 */
    int value_birth_date;
    /** 女儿的星座 */
    std::string value_daughter_constell;
    /** 女儿的基本信息 */
    std::array<int, 5> value_array_baseinfo;
    /**1、体力 2、智力 3、魅力 4、自尊 5、道德 6、气质 7、感受 8、体贴 9、武术 10、魔法*/
    std::array<std::string, 5> value_array_baseinfo_names = {"体力", "智力", "魅力", "自尊", "道德"};
    /** 女儿的金钱 */
    int value_daughter_gold = 500;
    /** 星座二维数组 */
    std::string constell_names[12][2] = {
        {"山羊座", "水瓶座"}, //一月
        {"水瓶座", "双鱼座"}, //二月
        {"双鱼座", "白羊座"}, //三月
        {"白羊座", "金牛座"}, //四月
        {"金牛座", "双子座"}, //五月
        {"双子座", "巨蟹座"}, //六月
        {"巨蟹座", "狮子座"}, //七月
        {"狮子座", "处女座"}, //八月
        {"处女座", "天秤座"}, //九月
        {"天秤座", "天蝎座"}, //十月
        {"天蝎座", "射手座"}, //十一月
        {"射手座", "山羊座"}  //十二月
    };
    /** 各月份的跨星座日期 */
    int constell_dates[]{20, 19, 21, 20, 21, 22, 23, 23, 23, 24, 23, 22};
    int choice, temp1, temp2, temp3;
    /** 金钱数量 */
    int couts = 500;
    //2、为父女取名字
    std::cout << "父亲的名字: ";
    std::cin >> value_father_name;
    std::cout << "女儿的名字: ";
    std::cin >> value_daughter_name;
    //3、为女儿录入初始信息
    std::cout << "女儿的生日（Month Day）: ";
    std::cin >> value_birth_month >> value_birth_date;
    value_daughter_constell = constell_names[value_birth_month - 1][value_birth_date / constell_dates[value_birth_month - 1]];
    //cout << "1659年,勇者" << value_father_name << "收留了女儿" << value_daughter_name << endl;
    //   根据星座，设置基本参数
    if (value_daughter_constell == "白羊座")
    {
        value_array_baseinfo[0] = 80;
        value_array_baseinfo[1] = 15;
        value_array_baseinfo[2] = 15;
        value_array_baseinfo[3] = 25;
        value_array_baseinfo[4] = 11; // value_array_baseinfo[5] = 21; value_array_baseinfo[6] = 21; value_array_baseinfo[7] = 10; value_array_baseinfo[8] = 40; value_array_baseinfo[9] = 35;
    }
    else if (value_daughter_constell == "金牛座")
    {
        value_array_baseinfo[0] = 40;
        value_array_baseinfo[1] = 30;
        value_array_baseinfo[2] = 28;
        value_array_baseinfo[3] = 35;
        value_array_baseinfo[4] = 20; // value_array_baseinfo[5] = 29; value_array_baseinfo[6] = 20; value_array_baseinfo[7] = 23; value_array_baseinfo[8] = 20; value_array_baseinfo[9] = 30;
    }
    else if (value_daughter_constell == "双子座")
    {
        value_array_baseinfo[0] = 50;
        value_array_baseinfo[1] = 35;
        value_array_baseinfo[2] = 23;
        value_array_baseinfo[3] = 26;
        value_array_baseinfo[4] = 8; // value_array_baseinfo[5] = 20; value_array_baseinfo[6] = 42; value_array_baseinfo[7] = 12; value_array_baseinfo[8] = 25; value_array_baseinfo[9] = 40;
    }
    else if (value_daughter_constell == "巨蟹座")
    {
        value_array_baseinfo[0] = 40;
        value_array_baseinfo[1] = 31;
        value_array_baseinfo[2] = 33;
        value_array_baseinfo[3] = 23;
        value_array_baseinfo[4] = 17; // value_array_baseinfo[5] = 33; value_array_baseinfo[6] = 37; value_array_baseinfo[7] = 14; value_array_baseinfo[8] = 16; value_array_baseinfo[9] = 40;
    }
    else if (value_daughter_constell == "狮子座")
    {
        value_array_baseinfo[0] = 85;
        value_array_baseinfo[1] = 9;
        value_array_baseinfo[2] = 11;
        value_array_baseinfo[3] = 28;
        value_array_baseinfo[4] = 20; // value_array_baseinfo[5] = 37; value_array_baseinfo[6] = 10; value_array_baseinfo[7] = 12; value_array_baseinfo[8] = 37; value_array_baseinfo[9] = 25;
    }
    else if (value_daughter_constell == "处女座")
    {
        value_array_baseinfo[0] = 35;
        value_array_baseinfo[1] = 28;
        value_array_baseinfo[2] = 36;
        value_array_baseinfo[3] = 19;
        value_array_baseinfo[4] = 18; // value_array_baseinfo[5] = 40; value_array_baseinfo[6] = 30; value_array_baseinfo[7] = 32; value_array_baseinfo[8] = 10; value_array_baseinfo[9] = 33;
    }
    else if (value_daughter_constell == "天秤座")
    {
        value_array_baseinfo[0] = 42;
        value_array_baseinfo[1] = 33;
        value_array_baseinfo[2] = 25;
        value_array_baseinfo[3] = 24;
        value_array_baseinfo[4] = 32; // value_array_baseinfo[5] = 28; value_array_baseinfo[6] = 29; value_array_baseinfo[7] = 18; value_array_baseinfo[8] = 20; value_array_baseinfo[9] = 30;
    }
    else if (value_daughter_constell == "天蝎座")
    {
        value_array_baseinfo[0] = 50;
        value_array_baseinfo[1] = 25;
        value_array_baseinfo[2] = 40;
        value_array_baseinfo[3] = 20;
        value_array_baseinfo[4] = 18; // value_array_baseinfo[5] = 17; value_array_baseinfo[6] = 33; value_array_baseinfo[7] = 10; value_array_baseinfo[8] = 18; value_array_baseinfo[9] = 45;
    }
    else if (value_daughter_constell == "射手座")
    {
        value_array_baseinfo[0] = 57;
        value_array_baseinfo[1] = 31;
        value_array_baseinfo[2] = 15;
        value_array_baseinfo[3] = 26;
        value_array_baseinfo[4] = 19; // value_array_baseinfo[5] = 20; value_array_baseinfo[6] = 20; value_array_baseinfo[7] = 23; value_array_baseinfo[8] = 26; value_array_baseinfo[9] = 34;
    }
    else if (value_daughter_constell == "山羊座")
    {
        value_array_baseinfo[0] = 56;
        value_array_baseinfo[1] = 21;
        value_array_baseinfo[2] = 10;
        value_array_baseinfo[3] = 22;
        value_array_baseinfo[4] = 25; // value_array_baseinfo[5] = 23; value_array_baseinfo[6] = 17; value_array_baseinfo[7] = 40; value_array_baseinfo[8] = 20; value_array_baseinfo[9] = 31;
    }
    else if (value_daughter_constell == "水瓶座")
    {
        value_array_baseinfo[0] = 43;
        value_array_baseinfo[1] = 43;
        value_array_baseinfo[2] = 20;
        value_array_baseinfo[3] = 27;
        value_array_baseinfo[4] = 23; // value_array_baseinfo[5] = 17; value_array_baseinfo[6] = 32; value_array_baseinfo[7] = 11; value_array_baseinfo[8] = 17; value_array_baseinfo[9] = 38;
    }
    else if (value_daughter_constell == "双鱼座")
    {
        value_array_baseinfo[0] = 41;
        value_array_baseinfo[1] = 20;
        value_array_baseinfo[2] = 29;
        value_array_baseinfo[3] = 25;
        value_array_baseinfo[4] = 23; // value_array_baseinfo[5] = 32; value_array_baseinfo[6] = 36; value_array_baseinfo[7] = 20; value_array_baseinfo[8] = 19; value_array_baseinfo[9] = 35;
    }
    //4、开始循环
    for (int year = 1659; year <= 1659 + 7; year++)
    {
        for (int month = (year == 1659) ? 6 : 1; month <= 12; month++)
        {
            if (month == value_birth_month)
            {
                std::cout << "本月" << value_birth_date << "日是" << value_daughter_name << "的生日,要不要送礼物呢? (Y/N)" << std::endl;
                char temp;
                std::cin >> temp;
                if (temp == 'y')
                {
                    couts - 200;
                }
            }
            std::cout << "1、查看状态\n2、安排行程\n3、亲自谈话\n4、存档\n5、读档" << std::endl;
            std::cin >> choice;
            switch (choice)
            {
                case 1:
                    std::cout << "女儿的信息: " << std::endl;
                    std::cout << "姓名: " << value_daughter_name << std::endl;
                    std::cout << "生日: 1648-" << value_birth_month << "-" << value_birth_date << std::endl;
                    std::cout << "星座: " << value_daughter_constell << std::endl;
                    std::cout << "金钱:" << value_daughter_gold << std::endl;
                    std::cout << std::left;
                    for (int i = 0; i < 5; i++)
                    {
                        std::cout << value_array_baseinfo_names[i] << ": " << value_array_baseinfo[i];
                        int soildCount = value_array_baseinfo[i] / 10;
                        for (int j = 0; j < 10; j++)
                        {
                            if (j <= soildCount)
                                std::cout << "■";
                            else
                                std::cout << "□";
                        }
                        std::cout << std::endl;
                    }
                    break;
                case 2:
                    std::string month_parts[] = {"上旬", "中旬", "下旬"};
                    for (int i = 0; i < 3; i++)
                    {
                        std::cout << "1、学习武艺\n2、上私塾\n3、学习礼法\n4、出城修行\n5、打工赚钱" << std::endl;
                        std::cout << "请选择:";
                        std::cin >> choice;
                        srand(time(NULL));
                        if (choice == 1)
                        {
                            value_array_baseinfo[0] += temp1 = rand() % 10 + 1;
                            value_array_baseinfo[2] += temp2 = rand() % 10 + 1;
                            value_daughter_gold -= temp3 = rand() % 50 + 1;
                            std::cout << "学习自♂由的男人好榜样！！！！" << std::endl;
                            std::cout << "体力+" << temp1 << ",魅力+" << temp2 << ",金钱-" << temp3 << std::endl;
                        }
                    }
                    break;
                    /*
                case 3:
                    break;
                case 4:
                    //存档
                    break;
                case 5:
                    //读档
                    break;
                default:
                    break;
                    */
            }
        }
    }
    //5、根据数值，判定结果
    system("pause");
    return 0;
}