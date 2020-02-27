#include <ctime>
#include <iostream>
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
class Player
{
  public:
    Player(std::string DaughterName, std::string FatherName, int BirthDayMonth, int BirthDaydate)
        : _DaughterName(DaughterName), _FatherName(FatherName), _BirthDayMonth(BirthDayMonth), _BirthDaydate(BirthDaydate)
    {
        this->_DaughterConstell = ConstellNamesArray[this->_BirthDayMonth - 1][this->_BirthDaydate / ConstelldatesArray[this->_BirthDayMonth - 1]];
    }
    void PrintInformation();

  private:
    std::string _DaughterName = NULL; //父亲名字
    std::string _FatherName = NULL;   //女儿名字
    int _BirthDayMonth = NULL;        //生日月份
    int _BirthDaydate = NULL;         //生日日期
    std::string _DaughterConstell = NULL;
};
int main()
{
    system("chcp 65001");
    std::string FN;
    std::string DN;
    int DM, DD;
    std::cout << "父亲的姓名:";
    std::cin >> FN;
    std::cout << "女儿的姓名:";
    std::cin >> DN;
    std::cout << "女儿的生日(MM DD):";
    std::cin >> DM >> DD;
    Player *player = nullptr;
    player = new Player(DN, FN, DM, DD);
    player->PrintInformation();
}
void Player::PrintInformation()
{
    std::cout << "女儿的信息:" << std::endl
              << "姓名:" << this->_DaughterName << std::endl
              << "生日:1659-" << this->_BirthDayMonth << "-" << this->_BirthDaydate << std::endl
              << "星座:" << this->_DaughterConstell;
    system("pause");
}