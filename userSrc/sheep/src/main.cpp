#include "../include/main.hpp"
#include "../include/userAPI.hpp"
#include <iostream> // 首先导入 螺丝刀所在的工具库
int main()
{
    system("chcp 65001");
    system("cls");
    sheep::sheepAPI sheep_user;
    std::string account; //账号名字的变量
    int level;
    sheep_user.SetTitle("cpp_study");
    sheep_user.SetColor(2, 0);
    sheep_user.cout("请输入您的账号:", 50);
    std::cin >> account;
    sheep_user.cout("您的账号是:", 50);
    std::cout << account << "\n";
    Sleep(50);
    sheep_user.cout("请输入您的等级:", 50);
    std::cin >> level;
    sheep_user.cout("您的等级是:", 50);
    std::cout << level;
    sheep_user.cout("\n\n\n---基本信息---\n*****姓名*****\n   上官孤儿\n*****职业*****\n     法师\n*****等级*****\n", 50);
    std::cout << level;
    Sleep(100);
    sheep_user.cout("\n\n\n---基本属性---\n*****生命*****\n", 50);
    std::cout << 1000 * level * 0.1 << std::endl;
    Sleep(100);
    sheep_user.cout("*****蓝量*****\n", 50);
    std::cout << 1000 * level * 0.9 << std::endl;
    Sleep(100);
    sheep_user.cout("****攻击力****\n", 50);
    std::cout << 1000 * level * 0.6 << std::endl;
    Sleep(100);
    sheep_user.cout("****防御力****\n", 50);
    std::cout << 50 * level * 0.9 << std::endl;
    Sleep(100);
    sheep_user.cout("*****技能*****\n  飞天送人头\n\n\n", 50);
    return 0;
}
// int main(int argc, char *argv[]) { /*Initialize LittlevGL*/

//   printf("姓名：羊傻逼\n"
//          "职业：奶妈\n"
//          "生命：10000\n"
//          "攻击力：0\n"
//          "防御力：10000\n"
//          "奶量：1000000000000000000000000000000000000000000000000000000\n"
//          "技能：无敌傻逼式回血\n");

//   return 0;
// }
// static void hal_init(void) {
//   /* Add a display
//    * Use the 'monitor' driver which creates window on PC's monitor to
//    simulate a
//    * display*/
//   monitor_init();

//   lv_disp_drv_t disp_drv;
//   lv_disp_drv_init(&disp_drv); /*Basic initialization*/

//   static lv_disp_buf_t disp_buf1;
//   static lv_color_t buf1_1[LV_HOR_RES_MAX * LV_VER_RES_MAX];
//   lv_disp_buf_init(&disp_buf1, buf1_1, NULL, LV_HOR_RES_MAX *
//   LV_VER_RES_MAX);

//   disp_drv.buffer = &disp_buf1;
//   disp_drv.flush_cb = monitor_flush;
//   lv_disp_drv_register(&disp_drv);

//   /* Add the mouse (or touchpad) as input device
//    * Use the 'mouse' driver which reads the PC's mouse*/
//   mouse_init();
//   lv_indev_drv_t indev_drv;
//   lv_indev_drv_init(&indev_drv); /*Basic initialization*/
//   indev_drv.type = LV_INDEV_TYPE_POINTER;
//   indev_drv.read_cb =
//       mouse_read; /*This function will be called periodically (by the
//       library)
//                      to get the mouse position and state*/
//   lv_indev_drv_register(&indev_drv);

//   /* If the PC keyboard driver is enabled in`lv_drv_conf.h`
//    * add this as an input device. It might be used in some examples. */
// #if USE_KEYBOARD
//   lv_indev_drv_t kb_drv;
//   lv_indev_drv_init(&kb_drv);
//   kb_drv.type = LV_INDEV_TYPE_KEYPAD;
//   kb_drv.read_cb = keyboard_read;
//   kb_indev = lv_indev_drv_register(&kb_drv);
// #endif

//   /* Tick init.
//    * You have to call 'lv_tick_inc()' in every milliseconds
//    * Create an SDL thread to do this*/
//   SDL_CreateThread(tick_thread, "tick", NULL);
// }

// /**
//  * A task to measure the elapsed time for LittlevGL
//  * @param data unused
//  * @return never return
//  */
// static int tick_thread(void *data) {
//   while (1) {
//     lv_tick_inc(5);
//     SDL_Delay(5); /*Sleep for 1 millisecond*/
//   }

//   return 0;
// }
