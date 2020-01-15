#pragma once
#include "userAPI.hpp"
namespace sheep {
class sheep_master : sheep::sheepAPI
{
  public:
    sheep_master();
    ~sheep_master();
    void Init();
    void end();

  private:
};
} // namespace sheep