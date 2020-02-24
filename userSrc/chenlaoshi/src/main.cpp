#include "../include/userAPI.hpp"

int main(int argc, char *argv[])
{ /*Initialize LittlevGL*/
    lv_init();

    /*Initialize the HAL for LittlevGL*/
    hal_init();

    demo_create();

    while (1)
    {
        lv_task_handler();
        Sleep(10); /*Just to let the system breathe */
    }

    return 0;
}
