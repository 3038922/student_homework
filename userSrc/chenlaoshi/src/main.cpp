#include "../include/userAPI.hpp"
#include "motor.hpp"
#include <thread>

int main(int argc, char *argv[])
{
    Motor aaa(1, -1, 1);
    aaa.getGear();
    aaa.setGear(1212);
    // lv_init();
    // hal_init();
    // std::thread taskTick(tick_thread, nullptr);
    // demo_create();
    // while (1)
    // {
    //     lv_task_handler();
    // }
    return 0;
}
