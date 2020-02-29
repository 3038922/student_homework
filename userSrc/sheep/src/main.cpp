#include <ctime>
#include <iostream>

class Player
{
  public:
    Player()
    {
        char FN;
        char DN;
        int DM, DD;
        std::cout << "父亲的姓名:";
        std::cin >> FN;
        std::cout << "女儿的姓名:";
        std::cin >> DN;
        std::cout << "女儿的生日(MM DD):";
        std::cin >> DM >> DD;
        this->_DaughterName = DN;
        this->_FatherName = FN;
        this->_BirthDayMonth = DM;
        this->_BirthDayMonth = DD;
        this->_DaughterConstell = this->ConstellNamesArray[this->_BirthDayMonth - 1][this->_BirthDaydate / this->ConstelldatesArray[this->_BirthDayMonth - 1]];
    }
    void PrintInformation();

  private:
    char _DaughterName = NULL; //父亲名字
    char _FatherName = NULL;   //女儿名字
    int _BirthDayMonth = NULL; //生日月份
    int _BirthDaydate = NULL;  //生日日期
    std::string _DaughterConstell = NULL;
    const std::string ConstellNamesArray[12][2] = {
        {"山羊座", "水瓶座"},
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
};
void Player::PrintInformation()
{
    std::cout << "女儿的信息:" << std::endl
              << "姓名:" << this->_DaughterName << std::endl
              << "生日:1659-" << this->_BirthDayMonth << "-" << this->_BirthDaydate << std::endl
              << "星座:" << this->_DaughterConstell;
    system("pause");
}
int main()
{
    system("cls");
    Player player;
    return 0;
}
