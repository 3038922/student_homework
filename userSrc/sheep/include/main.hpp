#pragma once

#include "userAPI.hpp"

namespace sheep {
class sheep_main : public sheep::Map, public sheep::Player
{
  public:
    sheep_main()
    {
    }
    ~sheep_main()
    {
    }
    void Init()
    {
        sheep::Map::Map_Init();
        sheep::Player::Player_Init();
    }
    void Function()
    {
        do
        {
            sheep::Map::PrintMap();
            system("cls");
        } while (true);
    }
    void End()
    {
    }

  private:
    ;
};
} // namespace sheep