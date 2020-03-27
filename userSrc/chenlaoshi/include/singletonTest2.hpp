#pragma once
#include <iostream>
#include <mutex>
template <class T>
class Singleton
{

  public:
    static T *initSingleton()
    {
        if (_singleton == nullptr)
        {
            _singleton = new T();
        }
        else
            std::cout << " Singleton already existence" << std::endl;
        return _singleton;
    }

  protected:
    Singleton() { std::cout << "Singleton create successful!" << std::endl; }

  private:
    static T *_singleton;
};

template <class T>
T *Singleton<T>::_singleton = nullptr;

static std::once_flag fatherFlag;
static std::once_flag sonFlag;

class Father
{
    friend class Son;

  public:
    static Father *initFather()
    {
        std::call_once(fatherFlag, [&]() { _father = new Father; });
        return _father;
    }
    virtual void showNums()
    {
        std::cout << "Father nums: " << _nums << std::endl;
    }
    virtual void testFather()
    {
        std::cout << "test Father" << std::endl;
    }

  protected:
    static int _nums;
    static Father *_father;
    Father()
    {
        _nums++;
        std::cout << "father create successful!" << std::endl;
    }
    ~Father() {}

  private:
};
Father *Father::_father = nullptr;
int Father::_nums = 0;
class Son
{

  public:
    static Son *initSon()
    {
        std::call_once(fatherFlag, [&]() { Father::_father = new Father; });
        std::call_once(sonFlag, [&]() { _son = new Son; });
        return _son;
    }
    virtual void showNums()
    {
        std::cout << "Son nums: " << Father::_nums << std::endl;
    }

  protected:
    Son() { std::cout << "son create successful!" << std::endl; }
    ~Son() {}

  private:
    static Son *_son;
};
Son *Son::_son = nullptr;