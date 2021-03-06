#include "../include/userAPI.hpp"
#include <iostream>
void hal_init(void)
{
    /* Add a display
   * Use the 'monitor' driver which creates window on PC's monitor to simulate a
   * display*/
    monitor_init();

    lv_disp_drv_t disp_drv;
    lv_disp_drv_init(&disp_drv); /*Basic initialization*/

    static lv_disp_buf_t disp_buf1;
    static lv_color_t buf1_1[LV_HOR_RES_MAX * LV_VER_RES_MAX];
    lv_disp_buf_init(&disp_buf1, buf1_1, NULL, LV_HOR_RES_MAX * LV_VER_RES_MAX);

    disp_drv.buffer = &disp_buf1;
    disp_drv.flush_cb = monitor_flush;
    lv_disp_drv_register(&disp_drv);

    /* Add the mouse (or touchpad) as input device
   * Use the 'mouse' driver which reads the PC's mouse*/
    mouse_init();
    lv_indev_drv_t indev_drv;
    lv_indev_drv_init(&indev_drv); /*Basic initialization*/
    indev_drv.type = LV_INDEV_TYPE_POINTER;
    indev_drv.read_cb =
        mouse_read; /*This function will be called periodically (by the library)
                     to get the mouse position and state*/
    lv_indev_drv_register(&indev_drv);

    /* If the PC keyboard driver is enabled in`lv_drv_conf.h`
   * add this as an input device. It might be used in some examples. */
#if USE_KEYBOARD
    lv_indev_drv_t kb_drv;
    lv_indev_drv_init(&kb_drv);
    kb_drv.type = LV_INDEV_TYPE_KEYPAD;
    kb_drv.read_cb = keyboard_read;
    kb_indev = lv_indev_drv_register(&kb_drv);
#endif

    /* Tick init.
   * You have to call 'lv_tick_inc()' in every milliseconds
   * Create an SDL thread to do this*/
    SDL_CreateThread(tick_thread, "tick", NULL);
}

/**
 * A task to measure the elapsed time for LittlevGL
 * @param data unused
 * @return never return
 */
int tick_thread(void *data)
{
    while (1)
    {
        lv_tick_inc(5);
        SDL_Delay(5); /*Sleep for 1 millisecond*/
    }

    return 0;
}
