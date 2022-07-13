#include <stdio.h>
int main()
{
    int n = 0;
    while (scanf_s("%d", &n) != EOF)
    {
        int i = 0;
        for (i = 0; i < n; i++)
        {
            int j = 0;
            for (j = 0; j < n; j++)
            {
                if (i >= 1 && i <= n - 2 && j >= 1 && j <= n - 2)
                {
                    printf("  ");
                }
                else
                {
                    printf("* ");
                }

            }
            printf("\n");
        }
    }

    return 0;
}