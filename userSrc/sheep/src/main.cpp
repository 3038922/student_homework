#include <Windows.h>
#include <array>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <istream>
#include <ostream>
#include <string>
#include <vector>

const std::string ConstellNamesArray[12][2] = {
    {"水瓶座", "双鱼座"},
    {"双鱼座", "白羊座"},
    {"白羊座", "金牛座"},
    {"金牛座", "双子座"},
    {"双子座", "巨蟹座"},
    {"巨蟹座", "狮子座"},
    {"狮子座", "处女座"},
    {"处女座", "天秤座"},
    {"天秤座", "天蝎座"},
    {"天蝎座", "射手座"},
    {"射手座", "山羊座"},
};
const int ConstelldatesArray[12] = {20, 19, 21, 20, 21, 22, 23, 23, 23, 24, 23, 22};
int _year = 1659;
int _month;

static int num;
const std::string _month_parts[3] = {"上旬", "中旬", "下旬"};
int key;
class Game
{
  public:
    Game(std::string DaughterName, std::string FatherName, int BirthDay_month, int BirthDaydate)
        : _DaughterName(DaughterName),
          _FatherName(FatherName),
          _BirthDay_month(BirthDay_month),
          _BirthDaydate(BirthDaydate)
    {
        this->_DaughterConstell = ConstellNamesArray[this->_BirthDay_month - 1][this->_BirthDaydate / ConstelldatesArray[this->_BirthDay_month - 1]];
        this->_DaughterNamesArray[0] = "体力";
        this->_DaughterNamesArray[1] = "智力";
        this->_DaughterNamesArray[2] = "魅力";
        this->_DaughterNamesArray[3] = "道德";
        this->_DaughterNamesArray[4] = "气质";
        this->_gold = 500;
        if (this->_DaughterConstell == "白羊座")
        {
            this->_DaughterArray[0] = 80;
            this->_DaughterArray[1] = 15;
            this->_DaughterArray[2] = 15;
            this->_DaughterArray[3] = 25;
            this->_DaughterArray[4] = 11;
        }
        else if (this->_DaughterConstell == "金牛座")
        {
            this->_DaughterArray[0] = 40;
            this->_DaughterArray[1] = 30;
            this->_DaughterArray[2] = 28;
            this->_DaughterArray[3] = 35;
            this->_DaughterArray[4] = 20;
        }
        else if (this->_DaughterConstell == "双子座")
        {
            this->_DaughterArray[0] = 50;
            this->_DaughterArray[1] = 35;
            this->_DaughterArray[2] = 23;
            this->_DaughterArray[3] = 26;
            this->_DaughterArray[4] = 8;
        }
        else if (this->_DaughterConstell == "巨蟹座")
        {
            this->_DaughterArray[0] = 40;
            this->_DaughterArray[1] = 31;
            this->_DaughterArray[2] = 33;
            this->_DaughterArray[3] = 23;
            this->_DaughterArray[4] = 17;
        }
        else if (this->_DaughterConstell == "狮子座")
        {
            this->_DaughterArray[0] = 85;
            this->_DaughterArray[1] = 9;
            this->_DaughterArray[2] = 11;
            this->_DaughterArray[3] = 28;
            this->_DaughterArray[4] = 20;
        }
        else if (this->_DaughterConstell == "处女座")
        {
            this->_DaughterArray[0] = 35;
            this->_DaughterArray[1] = 28;
            this->_DaughterArray[2] = 36;
            this->_DaughterArray[3] = 19;
            this->_DaughterArray[4] = 18;
        }
        else if (this->_DaughterConstell == "天秤座")
        {
            this->_DaughterArray[0] = 42;
            this->_DaughterArray[1] = 33;
            this->_DaughterArray[2] = 25;
            this->_DaughterArray[3] = 24;
            this->_DaughterArray[4] = 32;
        }
        else if (this->_DaughterConstell == "天蝎座")
        {
            this->_DaughterArray[0] = 50;
            this->_DaughterArray[1] = 25;
            this->_DaughterArray[2] = 40;
            this->_DaughterArray[3] = 20;
            this->_DaughterArray[4] = 18;
        }
        else if (this->_DaughterConstell == "射手座")
        {
            this->_DaughterArray[0] = 57;
            this->_DaughterArray[1] = 31;
            this->_DaughterArray[2] = 15;
            this->_DaughterArray[3] = 26;
            this->_DaughterArray[4] = 19;
        }
        else if (this->_DaughterConstell == "山羊座")
        {
            this->_DaughterArray[0] = 56;
            this->_DaughterArray[1] = 21;
            this->_DaughterArray[2] = 10;
            this->_DaughterArray[3] = 22;
            this->_DaughterArray[4] = 25;
        }
        else if (this->_DaughterConstell == "水瓶座")
        {
            this->_DaughterArray[0] = 43;
            this->_DaughterArray[1] = 43;
            this->_DaughterArray[2] = 20;
            this->_DaughterArray[3] = 27;
            this->_DaughterArray[4] = 23;
        }
        else
        {
            this->_DaughterArray[0] = 41;
            this->_DaughterArray[1] = 20;
            this->_DaughterArray[2] = 29;
            this->_DaughterArray[3] = 25;
            this->_DaughterArray[4] = 23;
        }
    }
    ~Game() {}
    void PrintInformation();
    void Display();
    void GivingGifts();
    void Itinerary(int key);
    //参数,因为主函数里可能要修改,所以存在pubilc里
    std::string _DaughterName; //女儿名字
    std::string _FatherName;
    int _BirthDay_month;                            //生日月份
    int _BirthDaydate;                              //生日日期
    std::array<std::string, 5> _DaughterNamesArray; //体力,智力,魅力,道德,气质

    std::array<long, 5> _DaughterArray; //体力,智力,魅力,道德,气质
    std::string _DaughterConstell;
    unsigned long _gold;
    bool _State = 0;
};

int main()
{
    srand(unsigned(time(NULL)));
    system("chcp 65001");
    system("cls");
    std::string FN = "王大锤";
    std::string DN = "小美";
    int DM = 1, DD = 1;
    std::cout << "1,新的开始" << std::endl
              << "2,旧的回忆" << std::endl
              << "请选择:";

    Game *gameLib = nullptr;
    gameLib = new Game(DN, FN, DM, DD);
    int a;
    std::cin >> a;
    if (a == 1)
    {
        std::cout << "父亲的姓名(英文,中文保存有问题):";
        std::cin >> FN;
        std::cout << "女儿的姓名(英文,中文保存有问题):";
        std::cin >> DN;
        std::cout << "女儿的生日(MM DD):";
        std::cin >> DM >> DD;
        delete gameLib;
        Game *gameLib = nullptr;
        gameLib = new Game(DN, FN, DM, DD);
    }
    else if (a == 2)
    {
        std::ifstream inFile("../cpp_study\\save\\save.txt");
        std::string str;
        std::string save[13];
        if (inFile.good())
        {
            for (int i = 0; inFile.good(); i++)
            {
                getline(inFile, str);
                save[i] = str;
            }
            for (int i = 0; i < 5; i++)
                gameLib->_DaughterArray[i] = std::atoi(save[i].c_str());
            gameLib->_BirthDay_month = std::atoi(save[5].c_str());
            gameLib->_BirthDaydate = std::atoi(save[6].c_str());
            gameLib->_gold = atol(save[7].c_str());
            _year = std::atoi(save[8].c_str());
            a = std::atoi(save[9].c_str());
            num = std::atoi(save[10].c_str());
            gameLib->_DaughterName = save[11];
            gameLib->_FatherName = save[12];
            std::cout << "读取成功" << std::endl;
        }
        else
        {
            std::cout << "读取失败,请检查文件或者路径不存在" << std::endl;
            system("pause");
        }
        std::cin.get();
        inFile.close();
    }
    else
        std::cout << "选择错误,启动默认参数." << std::endl;
    system("pause");
    gameLib->PrintInformation();
    system("cls");
    for (; _year <= 1666; _year++)
    {
        for (_month = (_year == 1659) ? 6 : a; _month <= 12; _month++)
        {
            if (_month == gameLib->_BirthDay_month)
            {
                std::cout << "本月" << gameLib->_BirthDaydate << "日是" << gameLib->_DaughterName << "的生日要不要送礼物?" << std::endl;
                gameLib->GivingGifts();
            }
            gameLib->Display();
            if (gameLib->_State == true)
                return 0;
            system("cls");
        }
    }
    system("cls");
    int sums = 0;
    for (auto &it : gameLib->_DaughterArray)
        sums += it;
    if (sums >= 2000)
        std::cout << "恭喜您,女儿" << gameLib->_DaughterName << "达成了最优结局,成为了女王,";
    else if (sums >= 1800)
        std::cout
            << "恭喜达成次优结局,女儿" << gameLib->_DaughterName << "成为了王妃,";
    else if (sums >= 1600)
        std::cout
            << "女儿" << gameLib->_DaughterName << "成为了女将军,率领士兵征服远方,";
    else if (sums >= 1200)
    {
        // 体力, 智力, 魅力, 道德, 气质
        int max = gameLib->_DaughterArray[0];
        for (int i = 1; i < 5; i++)
            if (max < gameLib->_DaughterArray[i])
                max = gameLib->_DaughterArray[i];
        if (max == gameLib->_DaughterArray[1])
            std::cout
                << "女儿" << gameLib->_DaughterName << "成为了皇家学院总裁,";
        else if (max == gameLib->_DaughterArray[4] && gameLib->_DaughterArray[2] > gameLib->_DaughterArray[0])
            std::cout
                << "女儿" << gameLib->_DaughterName << "成为了公主,";
        else if (max == gameLib->_DaughterArray[0] && gameLib->_DaughterArray[4] > gameLib->_DaughterArray[2])
            std::cout
                << "女儿" << gameLib->_DaughterName << "成为了近卫骑士团团长,";
        else if (max == gameLib->_DaughterArray[3] && gameLib->_DaughterArray[2] > gameLib->_DaughterArray[4])
            std::cout
                << "女儿" << gameLib->_DaughterName << "成为了高级祭祀,";
        else if (max == gameLib->_DaughterArray[2] && gameLib->_DaughterArray[4] > gameLib->_DaughterArray[3])
            std::cout
                << "女儿" << gameLib->_DaughterName << "成为了国王的宠妃,";
        else
            std::cout
                << "女儿" << gameLib->_DaughterName << "成为了妃子,";
    }
    else
    {
        int temp = rand() % 5 + 1;
        switch (temp)
        {
            case 1:
                std::cout
                    << "女儿" << gameLib->_DaughterName << "成为了农妇,";
                break;
            case 2:
                std::cout
                    << "女儿" << gameLib->_DaughterName << "成为了魔法师,";
                break;
            case 3:
                std::cout
                    << "女儿" << gameLib->_DaughterName << "成为了修女,";
                break;
            case 4:
                std::cout
                    << "女儿" << gameLib->_DaughterName << "成为了作家,";
                break;
            case 5:
                std::cout
                    << "女儿" << gameLib->_DaughterName << "成为了酒吧女郎,";
                break;
        }
    }
    delete gameLib;
    gameLib = nullptr;
    std::cout << "感谢游玩^_^" << std::endl;
    system("pause");
    return 0;
}
void Game::PrintInformation()
{
    system("cls");
    std::cout << "女儿的信息:" << std::endl
              << "姓名:" << this->_DaughterName << std::endl
              << "生日:1659-" << this->_BirthDay_month << "-" << this->_BirthDaydate << std::endl
              << "星座:" << this->_DaughterConstell << std::endl
              << "金币:" << this->_gold << std::endl;
    for (int i = 0; i < 4; i++)
    {
        std::cout << this->_DaughterNamesArray[i] << ": " << std::setw(3) << this->_DaughterArray[i] << " ";
        int soildCount = this->_DaughterArray[i] / 10;
        for (int j = 0; j < 50; j++)
        {
            if (j <= soildCount)
                std::cout << "■";
            else
                std::cout << "□";
        }
        std::cout << std::endl;
    }
    system("pause");
}
void Game::Display()
{
    system("cls");
    if (num >= 3)
    {
        num = 0;
        return;
    }
    std::cout << " --" << _year << "年"
              << " -- " << _month << "月"
              << " -- " << _month_parts[num] << " --" << std::endl;
    std::cout << "1、查看状态\n2、安排行程\n3、亲自谈话\n4、存档(开放)\n5、读档(开放)\n6、退出" << std::endl
              << "请选择:";
    std::cin >> key;
    switch (key)
    {
        case 1:
            this->PrintInformation();
            this->Display();
            break;
        case 2:
            system("cls");

            std::cout << " --" << _year << "年"
                      << " -- " << _month << "月"
                      << " -- " << _month_parts[num] << " --" << std::endl
                      << "1、学习武艺(体力+,魅力+,金钱-)\n"
                      << "2、上私塾  (智力+,道德+,金钱-)\n"
                      << "3、学习礼法(魅力+,自尊+,金钱-)\n"
                      << "4、出城修行(体力+,智力+,金钱-)\n"
                      << "5、打工赚钱(金钱+)"
                      << std::endl
                      << "请选择:";
            std::cin >> key;
            if (key != 1 && key != 2 && key != 3 && key != 4 && key != 5)
            {
                std::cout << "输入错误,请重新选择" << std::endl;
                system("pause");
                this->Display();
            }
            this->Itinerary(key);
            num++;
            this->Display();
            break;
        case 3:
            system("cls");
            std::cout << " --" << _year << "年"
                      << " -- " << _month << "月"
                      << " -- " << _month_parts[num] << " --" << std::endl
                      << "1、严厉的教训" << std::endl
                      << "2、不多BB,给钱就是了(-200元)" << std::endl
                      << "请选择:";
            std::cin >> key;
            if (key != 1 && key != 2)
            {
                std::cout << "输入错误,请重新选择" << std::endl;
                system("pause");
                this->Display();
            }
            if (key == 1)
            {
                this->_DaughterArray[3] += 5;
                std::cout << "严厉的教导了一顿女儿." << std::endl
                          << "女儿道德+"
                          << "5" << std::endl;
            }
            else if (key == 2 && this->_gold >= 200)
            {
                this->_gold -= 200;
                int temp = rand() % 16 + 10;
                for (auto &it : this->_DaughterArray)
                    it += temp;
                std::cout << "给女儿200块零花钱,女儿开心极了." << std::endl
                          << "女儿全属性+"
                          << temp << std::endl;
            }
            else
            {
                std::cout << "穷鬼,就这点钱还想给女儿?" << std::endl;
                system("pause");
                this->Display();
            }
            system("pause");
            num++;
            this->Display();
            break;
        case 4: {
            system("cls");
            const char *path = "../cpp_study\\save\\save.txt"; // 你要创建文件的路径
            std::ofstream fout(path, std::ios::trunc);
            for (auto &it : this->_DaughterArray)
                fout << it << std::endl;
            fout << this->_BirthDay_month << std::endl;
            fout << this->_BirthDaydate << std::endl;
            fout << this->_gold << std::endl;
            fout << _year << std::endl;
            fout << _month << std::endl;
            fout << num << std::endl;
            fout << this->_DaughterName << std::endl;
            fout << this->_FatherName << std::endl;
            if (fout)
                std::cout << "保存成功" << std::endl;
            else
                std::cout << "保存失败,请检查路径." << std::endl;
            fout.close();
            system("pause");
            this->Display();
        }
        break;
        case 5: {
            system("cls");
            std::ifstream inFile("../cpp_study\\save\\save.txt");
            std::string str;
            std::string save[13];
            if (inFile.good())
            {
                for (int i = 0; inFile.good(); i++)
                {
                    getline(inFile, str);
                    save[i] = str;
                }
                for (int i = 0; i < 5; i++)
                    this->_DaughterArray[i] = std::atoi(save[i].c_str());
                this->_BirthDay_month = std::atoi(save[5].c_str());
                this->_BirthDaydate = std::atoi(save[6].c_str());
                this->_gold = atol(save[7].c_str());
                _year = std::atoi(save[8].c_str());
                _month = std::atoi(save[9].c_str());
                num = std::atoi(save[10].c_str());
                this->_DaughterName = save[11];
                this->_FatherName = save[12];
                std::cout << "读取成功" << std::endl;
                system("pause");
                this->PrintInformation();
            }
            else
            {
                std::cout << "读取失败,请检查文件或者路径不存在" << std::endl;
                system("pause");
            }
            std::cin.get();
            inFile.close();
            this->Display();
            break;
        }
        case 6:
            std::cout << "感谢游玩" << std::endl;
            this->_State = true;
            break;
        default:
            std::cout << "输入错误,请重新选择" << std::endl;
            system("pause");
            this->Display();
            break;
    }
}
void Game::GivingGifts()
{
    std::cout << "要给女儿礼物吗?" << std::endl
              << "1,给(-100元)" << std::endl
              << "2,不给" << std::endl
              << "请选择:";
    int key;
    std::cin >> key;
    if (key == 1)
    {
        this->_gold -= 100;
        int temp = rand() % 21 + 5;
        for (auto &it : this->_DaughterArray)
            it += temp;
        std::cout << "女儿开心极了,拿着这笔钱去买礼物." << std::endl
                  << "女儿全属性+" << temp << std::endl;
    }
    else if (key == 0)
        std::cout << std::endl
                  << "什么都没发生." << std::endl;
    else
    {
        std::cout << "输入错误,请重新选择." << std::endl;
        system("pause");
        system("cls");
        this->GivingGifts();
    }
    system("pause");
}
void Game::Itinerary(int key)
{
    int price = rand() % 41 + 10;
    int temp[2];
    if (this->_gold < price && key != 5) //没钱你玩个蛋
    {
        std::cout << "因为没钱,女儿被迫去打工." << std::endl
                  << "女儿";
        this->_gold += temp[0] = rand() % 81 + 20;
        if (temp[0] <= 40)
            std::cout << "到濒临倒闭的工厂打工,只赚了" << temp[0] << "个金币." << std::endl;
        else if (temp[0] <= 70)
            std::cout << "到工厂打工,赚了" << temp[0] << "个金币." << std::endl;
        else
            std::cout << "到工厂打工,因为工作努力,被老板认可,赚了" << temp[0] << "个金币,女儿" << this->_DaughterName << "感觉人生到达了巅峰!" << std::endl;
        system("pause");
        return;
    }
    switch (key)
    {
        case 1:
            this->_DaughterArray[0] += temp[0] = rand() % 10 + 1;
            this->_DaughterArray[2] += temp[1] = rand() % 10 + 1;
            this->_gold -= price;
            std::cout << "打架♂比武♀促进身体发育." << std::endl
                      << "体力+" << temp[0] << ",魅力+" << temp[1] << ",金钱-" << price << std::endl;
            system("pause");
            break;
        case 2:
            this->_DaughterArray[1] += temp[0] = rand() % 10 + 1;
            this->_DaughterArray[3] += temp[1] = rand() % 10 + 1;
            this->_gold -= price;
            std::cout << "好好学习,争做第一读书女子." << std::endl
                      << "智力+" << temp[0] << ",道德+" << temp[1] << ",金钱-" << price << std::endl;
            system("pause");
            break;
        case 3:
            this->_DaughterArray[4] += temp[0] = rand() % 10 + 1;
            this->_DaughterArray[3] += temp[1] = rand() % 10 + 1;
            this->_gold -= price;
            std::cout << "衢州有礼,你我同行." << std::endl
                      << "气质+" << temp[0] << ",道德+" << temp[1] << ",金钱-" << price << std::endl;
            system("pause");
            break;
        case 4:
            this->_DaughterArray[0] += temp[0] = rand() % 10 + 1;
            this->_DaughterArray[1] += temp[1] = rand() % 10 + 1;
            this->_gold -= price;
            std::cout << "只要在学校食堂吃三年饭,就可以和贝爷去野外生存了." << std::endl
                      << "体力+" << temp[0] << ",气质+" << temp[1] << ",金钱-" << price << std::endl;
            system("pause");
            break;
        case 5:
            this->_gold += temp[0] = rand() % 81 + 20;
            std::cout << "女儿";
            if (temp[0] <= 40)
                std::cout << "到濒临倒闭的工厂打工,只赚了" << temp[0] << "个金币." << std::endl;
            else if (temp[0] <= 70)
                std::cout << "到工厂打工,赚了" << temp[0] << "个金币." << std::endl;
            else
                std::cout << "到工厂打工,因为工作努力,被老板认可,赚了" << temp[0] << "个金币,女儿" << this->_DaughterName << "感觉人生到达了巅峰!" << std::endl;
            system("pause");
            break;
    }
}