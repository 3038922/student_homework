#pragma once
#include "userAPI.hpp"
static void hal_init(void);
static int tick_thread(void *data);

/**********************
 *  STATIC VARIABLES
 **********************/
static lv_indev_t *kb_indev;