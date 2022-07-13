#include <stdio.h>
int main()
{
    //找规律，用变量控制
    int n = 0;
    while (scanf_s("%d", &n) != EOF)
    {
        int i = 0;
        for (i = 0; i < n + 1; i++)
        {
            int j = 0;
            for (j = 0; j < 2 * (n - i); j++)
            {
                printf(" ");
            }
            for (j = 0; j < i + 1; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        for (i = 0; i < n; i++)
        {
            int j = 0;
            for (j = 0; j < 2 * (i + 1); j++)
            {
                printf(" ");
            }
            for (j = 0; j < n - i; j++)
            {
                printf("*");
            }
            printf("\n");

        }


    }

    return 0;
}