#pragma once
#include <iostream>
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

class Father
{
  public:
    static Father *initFather()
    {
        if (_father == nullptr)
            _father = new Father;
        else
            std::cout << " father already existence" << std::endl;
        return _father;
    }
    void showSonNums()
    {
        std::cout << "son nums: " << _sonNums << std::endl;
    }

  protected:
    static int _sonNums;
    static Father *_father;
    Father()
    {
        _sonNums++;
        std::cout << "father create successful!" << std::endl;
    }
    ~Father() {}

  private:
};
Father *Father::_father = nullptr;
int Father::_sonNums = 0;
class Son : public Father
{
  public:
    static Son *initSon()
    {
        if (_son == nullptr)
            _son = new Son;
        else
            std::cout << " son already existence" << std::endl;
        return _son;
    }

  protected:
    static Son *_son;
    Son() { std::cout << "son create successful!" << std::endl; }
    ~Son() {}

  private:
};
Son *Son::_son = nullptr;