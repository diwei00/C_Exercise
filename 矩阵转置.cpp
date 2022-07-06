#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void transPosition(int** pa, int row, int col)
{
    int i = 0;
    for (i = 0; i < col; i++)
    {
        int j = 0;
        for (j = 0; j < row; j++)
        {
            printf("%d ", pa[j][i]);
        }
        printf("\n");
    }
}
int main()
{
    int n = 0;
    int m = 0;
    scanf_s("%d %d", &n, &m);
    int** pa = (int**)malloc(sizeof(int*) * n);
    int i = 0;
    for (i = 0; i < n; i++)
    {
        pa[i] = (int*)malloc(sizeof(int) * m);
    }
    for (i = 0; i < n; i++)
    {
        int j = 0;
        for (j = 0; j < m; j++)
        {
            scanf_s("%d", &pa[i][j]);
        }
    }
    transPosition(pa, n, m);

    for (i = 0; i < m; i++)
    {
        free(pa[i]);
    }
    free(pa);
    pa = NULL;

    return 0;
}