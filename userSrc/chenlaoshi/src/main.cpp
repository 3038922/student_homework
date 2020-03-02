#include "../include/userAPI.hpp"
#include <thread>
int main(int argc, char *argv[])
{
    lv_init();
    hal_init();
    std::thread taskTick(tick_thread, nullptr);
    demo_create();
    while (1)
    {
        lv_task_handler();
    }
    return 0;
}
