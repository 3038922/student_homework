#pragma once
#include <iostream>
template <typename T>
class Father
{
  public:
    static T *initFather(std::string name)
    {
        if (_father == nullptr)
        {
            _father = new T;
        }
        else
            std::cout << "Son already existence" << std::endl;
        return _father;
        // static std::once_flag s_flag;
        // std::call_once(s_flag, [&]() { _father.reset(new T()); });
        // return _father.get();
    }

    void PrintAddress() const
    {
        std::cout << this << std::endl;
    }

  protected:
    Father(std::string name) : _name(name) { std::cout << "father create successful" << std::endl; };
    ~Father(){};
    static T *_father;

  private:
    const std::string _name;
    Father(const Father &) = delete;
    Father &operator=(const Father &) = delete;
};

template <typename T>
T *Father<T>::_father = nullptr;
class Son : public Father<Son>
{

  public:
    static Son *initSon(std::string name)
    {
        if (_son == nullptr)
        {
            _son = new Son(name);
        }
        else
            std::cout << "Son already existence" << std::endl;
        return _son;
    }
    void showName()
    {
        std::cout << _name << std::endl;
    }
    void showTestSon()
    {
        std::cout << "this is Son test" << std::endl;
    }

  protected:
    const std::string _name;
    static Son *_son;
    Son(std::string name) : Father(name), _name(name) { std::cout << "son create successful" << std::endl; }
};

Son *Son::_son = nullptr;