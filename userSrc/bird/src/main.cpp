#include <iostream>
int main()
{
    system("chcp 65001");
    int i;
    int j;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 5; j++)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    return 0;
}
