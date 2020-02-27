#include <iostream>
int main(int argc, char *argv[])
{
    int z[10] = {1, 2, 5, 6, 5, 6, 3, 2, 1, 4};
    int i, k;
    for (k = 1; k < 11; k++)
    {
        for (i = 0; i < k; i++)
        {
            printf("* ");
        }
        printf("\n");
    }

    for (k = 1; k < 11; k++)
    {
        for (i = 0; i < (11 - k) / 2; i++)
        {
            printf("  ");
        }
        if (k % 2 == 0)
            printf(" ");
        for (i = 0; i < k; i++)
        {
            printf("* ");
        }
        for (i = 0; i < (11 - k) / 2; i++)
        {
            printf("  ");
        }
        printf("\n");
    }

    for (k = 1; k < 11; k++)
    {

        for (i = 0; i < (11 - k) / 2; i++)
        {
            printf("    ");
        }
        if (k % 2 == 0)
            printf("  ");

        printf("* ");

        for (i = 0; i < k - 1; i++)
        {
            printf("* * ");
        }
        for (i = 0; i < (11 - k) / 2; i++)
        {
            printf("    ");
        }
        printf("\n");
    }

    return 0;
}