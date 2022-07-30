#include <stdio.h>
#include <math.h>
int main()
{

    int n = 0;
    scanf_s("%d", &n);
    int a = 0;
    int b = 1;
    int c = 1;
    while (1)
    {
        if (n == a)
        {
            printf("0");
            break;
        }
        else if (n > a && n < b)
        {
            if (abs(n - a) < abs(n - b))
            {
                printf("%d", abs(n - a));
                break;
            }
            else
            {
                printf("%d", abs(n - b));
                break;
            }
        }
        a = b;
        b = c;
        c = a + b;
    }
    return 0;
}