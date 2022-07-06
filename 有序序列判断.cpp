#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
bool bubbleSort(int* pa, int n)
{
    //Çø±ðÉýÐòºÍ½µÐò
    if (pa[0] < pa[1])
    {
        int i = 0;
        for (i = 1; i < n - 1; i++)
        {
            if (pa[i] > pa[i + 1])
            {
                return false;
            }
        }
        return true;
    }
    else
    {
        int i = 0;
        for (i = 1; i < n - 1; i++)
        {
            if (pa[i] < pa[i + 1])
            {
                return false;
            }
        }
        return true;
    }
}
int main()
{
    int num = 0;
    scanf_s("%d", &num);
    int* pa = (int*)malloc(sizeof(int) * num);
    int i = 0;
    for (i = 0; i < num; i++)
    {
        scanf_s("%d", &pa[i]);
    }
    if (bubbleSort(pa, num))
    {
        printf("sorted");
    }
    else
    {
        printf("unsorted");
    }


    free(pa);
    return 0;
}