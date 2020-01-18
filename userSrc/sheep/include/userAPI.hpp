#pragma once
#include <Windows.h>
#include <conio.h>
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>

namespace sheep {
/**
* @brief 道具类型 
*/
typedef enum _PropType {
    Weapon,
    Armor,
    NoHave
} PropType;
class API
{
  public:
    API();
    ~API();

    /**0
     * @brief 初始化 因为继承不可才单独一个函数初始化
     * 
     */
    void API_Init();
    /**
     * @brief 循环打印(一个字一个字打印)
     * 
     * @param cin 要打印的字符串
     * @param delay_time 两个字打印之间等待的时间
     */
    void printf(const char *cin, const int delay_time);
    /**
     * @brief 设置控制台标题
     * 
     * @param title 标题名称
     */
    void SetTitle(const char *title);
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
};
class Map : public sheep::API
{
  public:
    Map();
    ~Map();
    void Map_Init();
    void PrintMap();

  private:
    int _MapId;
    COORD _MapCoord;
    std::string _MapDecs;
};
typedef struct prop
{
    int _PropId;
    std::string _PropName;
    int _PropLevel;
    int _PropStock;
    sheep::PropType _PropType;
    union {
        int _PropAttack;
        int _PropDefence;
        int _PropPower;
    };
    std::string _PropDesc;
} Prop;
class Bag : public sheep::Prop
{
  public:
    Bag();
    ~Bag();
    void SetBagName(std::string CinBagName);
    void SetBagCapacity();
    void NewProp(sheep::Prop NewProp);
    void CleanProp(int id);
    void PrintBagProp(int id);

  private:
    std::string _BagName;
    int _BagCapacity = 3;
    sheep::Prop _BagStorage[100];
};
class Player : public sheep::Bag
{
  public:
    Player();
    ~Player();
    void Player_Init();

  private:
    /**角色属性**/
    int _PlayerHp;      //血量
    int _PlayerMp;      //蓝条
    int _playerExp;     //经验
    int _PlayerLevel;   //等级
    int _PlayerAttack;  //攻击力
    int _PlayerDefense; //防御力
    COORD _PlayerCoord; //坐标
    /**其他属性**/
    sheep::Bag _PlayerBag;
}; // namespace sheep
} // namespace sheep