#pragma once
#include <Windows.h>
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>
namespace sheep {
class sheepAPI
{
  public:
    sheepAPI();
    ~sheepAPI();
    /**
     * @brief 循环打印(一个字一个字打印)
     * 
     * @param cin 要打印的字符串
     * @param delay_time 两个字打印之间等待的时间
     */
    void cout(const char *cin, const int delay_time);
    /**
     * @brief 设置控制台标题
     * 
     * @param title 标题名称
     */
    void SetTitle(char *title);
    /**
    * @brief 设置颜色
    * 
    * @param ForeColor 字体颜色
    * @param BackColor 背景颜色
    */
    void SetColor(int ForeColor, int BackColor);
    /**
     * @brief 设置坐标
     * 
     * @param x X轴
     * @param y Y轴
     */
    void SetCoord(const short x, const short y);

  private:
    ;
};
} // namespace sheep