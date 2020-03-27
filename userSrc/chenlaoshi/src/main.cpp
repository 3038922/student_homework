//#include "../include/singletonTest1.hpp"
#include "../include/singletonTest3.hpp"
int main(int argc, char *argv[])
{
    Father *father1 = Father::initFather();
    Father *father2 = Father::initFather();
    father1->showNums();
    father1->reset(0);
    father1->testFather();
    father2->testFather();
    father1->show();
    father2->show();
    father2->showNums();
    father1->resetFlag(121);
    father2->resetFlag(999);
    father1->showFlag();
    father2->showFlag();
    // Son *son1 = Son::initSingleton();
    // Son *son2 = Son::initSingleton();
    // son1->showNums();
    // son1->testFather();
    return 0;
}
