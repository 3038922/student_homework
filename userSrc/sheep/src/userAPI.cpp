#include "../include/userAPI.hpp"
/**********
API
**********/
sheep::API::API()
{
}
sheep::API::~API()
{
}
void sheep::API::API_Init()
{
}
void sheep::API::printf(const char *cin, const int delay_time)
{
    for (int i = 0; cin[i] != 0; i++)
    {
        std::cout << cin[i];
        Sleep(delay_time);
    }
}
void sheep::API::SetTitle(const char *title)
{
    SetConsoleTitle(title);
}
void sheep::API::SetColor(int ForeColor, int BackColor)
{
    HANDLE WinHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(WinHandle, ForeColor + BackColor * 0x10);
}
void sheep::API::SetCoord(const short x, const short y)
{
    COORD pos = {x, y};
    HANDLE WinHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(WinHandle, pos);
}
/**********
Map
**********/
sheep::Map::Map()
{
}
sheep::Map::~Map()
{
}
void sheep::Map::Map_Init()
{
}
void sheep::Map::PrintMap()
{
}
/*********
Bag
*********/
sheep::Bag::Bag()
{
}
sheep::Bag::~Bag()
{
}
void sheep::Bag::SetBagName(std::string CinBagName)
{
    ;
}
void sheep::Bag::SetBagCapacity()
{
}
void sheep::Bag::NewProp(sheep::Prop NewProp)
{
    int i;
    for (i = 0; i < sizeof(this->_BagStorage); i++)
        if (this->_BagStorage[i]._PropName == NewProp._PropName)
        {
            this->_BagStorage[i]._PropStock += NewProp._PropStock;
            return;
        }
    for (i = 0; this->_BagStorage[i]._PropId != 0; i++)
        ;
    this->_BagStorage[i + 1] = NewProp;
}
void sheep::Bag::CleanProp(int id)
{
    this->_BagStorage[id]._PropId = '\0';
    this->_BagStorage[id]._PropName = '\0';
    this->_BagStorage[id]._PropLevel = '\0';
    this->_BagStorage[id]._PropStock = '\0';
    this->_BagStorage[id]._PropType = NoHave;
    this->_BagStorage[id]._PropAttack = '\0';
    this->_BagStorage[id]._PropDefence = '\0';
    this->_BagStorage[id]._PropPower = '\0';
    this->_BagStorage[id]._PropDesc = '\0';
}
/**********
Player
**********/
sheep::Player::Player()
{
}
sheep::Player::~Player()
{
}
void sheep::Player::Player_Init()
{
}