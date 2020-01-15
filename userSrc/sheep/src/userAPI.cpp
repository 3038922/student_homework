#include "../include/userAPI.hpp"
sheep::sheepAPI::sheepAPI()
{
}
sheep::sheepAPI::~sheepAPI()
{
}
void sheep::sheepAPI::cout(const char *cin, const int delay_time)
{
    for (int i = 0; cin[i] != 0; i++)
    {
        std::cout << cin[i];
        Sleep(delay_time);
    }
}
void sheep::sheepAPI::SetTitle(char *title)
{
    SetConsoleTitle(title);
}
void sheep::sheepAPI::SetColor(int ForeColor, int BackColor)
{
    HANDLE WinHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(WinHandle, ForeColor + BackColor * 0x10);
}
void sheep::sheepAPI::SetCoord(const short x, const short y)
{
    COORD pos = {x, y};
    HANDLE WinHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(WinHandle, pos);
}