#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
bool is_uppertr_iangular_matrix(int** pa, int width)
{
    //以行为单位找规律遍历
    int i = 0;
    for (i = 1; i < width; i++)
    {
        int j = 0;
        for (j = 0; j < i; j++)
        {
            if (pa[i][j] != 0)
            {
                return false;
            }
        }
    }
    return true;
}
int main()
{
    int width = 0;
    scanf_s("%d", &width);
    int** pa = (int**)malloc(sizeof(int*) * width);
    int i = 0;
    for (i = 0; i < width; i++)
    {
        pa[i] = (int*)malloc(sizeof(int) * width);
    }
    for (i = 0; i < width; i++)
    {
        int j = 0;
        for (j = 0; j < width; j++)
        {
            scanf_s("%d", &pa[i][j]);
        }
    }
    if (is_uppertr_iangular_matrix(pa, width))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    for (i = 0; i < width; i++)
    {
        free(pa[i]);
    }
    free(pa);

    return 0;
}