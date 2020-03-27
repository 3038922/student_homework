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
            std::cout << "Singleton already existence" << std::endl;
        return _singleton;
    }
    void show()
    {
        std::cout << "Singleton: " << _testVal << std::endl;
    }

  protected:
    int _testVal = 9999;
    Singleton() { std::cout << "Singleton create successful!" << std::endl; }

  private:
    static T *_singleton;
};

template <class T>
T *Singleton<T>::_singleton = nullptr;

class Father : public Singleton<Father>
{
    friend class Singleton<Father>;

  public:
    static Father *initFather()
    {
        if (_father == nullptr)
        {
            _father = new Father();
            initSingleton();
        }
        else
            std::cout << "father already existence " << std::endl;
        return _father;
    }
    virtual void showNums()
    {
        std::cout << "Father nums: " << _nums << std::endl;
    }
    virtual void testFather()
    {
        std::cout << "test Father: " << _testVal << std::endl;
    }
    virtual void reset(int val)
    {
        _testVal = val;
    }
    virtual void resetFlag(int val)
    {
        _flag = val;
    }
    virtual void showFlag()
    {
        std::cout << "flag: " << _flag << std::endl;
    }

  protected:
    static Father *_father;
    Father()
    {
        _nums++;
        std::cout << "father create successful!" << std::endl;
    }
    ~Father() {}
    static int _nums;
    int _flag = 0;

  private:
};
int Father::_nums = 0;
Father *Father::_father = nullptr;

class Son : public Father
{
  public:
    virtual void showNums()
    {
        std::cout << "Son nums: " << Father::_nums << std::endl;
    }

  protected:
    Son()
    {
        std::cout << "son create successful!" << std::endl;
    }
    ~Son() {}

  private:
};