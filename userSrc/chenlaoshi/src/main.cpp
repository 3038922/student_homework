//#include "../include/singletonTest1.hpp"
#include "../include/singletonTest2.hpp"
int main(int argc, char *argv[])
{
    // Son *son1 = Son::initSon("asdf");
    // son1->showName();
    // son1->PrintAddress();
    // Son *son2 = Son::initSon("asdfasfd");
    // son2->showName();
    // son2->showTestSon();
    // son2->PrintAddress();
    // Father *father = Father::initFather();
    // Son *son1 = Son::initSon();
    // Son *son2 = Son::initSon();
    // son2->showSonNums();
    Son *son1 = Singleton<Son>::initSingleton();
    return 0;
}
