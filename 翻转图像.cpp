#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int** flipAndInvertImage(int** image, int imageSize, int* imageColSize, int* returnSize, int** returnColumnSizes) 
{
    *returnSize = imageSize;
    *returnColumnSizes = imageColSize;
    int i = 0;
    for (i = 0; i < imageSize; i++)
    {
        int left = 0;
        int right = imageSize - 1;
        while (left < right)
        {
            int tmp = image[i][left];
            image[i][left] = image[i][right];
            image[i][right] = tmp;
            left++;
            right--;
        }
    }
    for (i = 0; i < imageSize; i++)
    {
        int j = 0;
        for (j = 0; j < imageSize; j++)
        {
            if (image[i][j] == 0)
            {
                image[i][j] = 1;
            }
            else
            {
                image[i][j] = 0;
            }
        }
    }
    return image;
}
int main()
{
    
    int** ppa = (int**)malloc(sizeof(int*) * 3);
    int i = 0;
    for (i = 0; i < 3; i++)
    {
        ppa[i] = (int*)malloc(sizeof(int) * 3);
        //³õÊ¼»¯
        memset(ppa[i], 0, sizeof(int) * 3);

    }
    int returnSize = 0;
    int* returnColumnSizes = NULL;
    int** ret = flipAndInvertImage(ppa, 3, ppa[i], &returnSize, &returnColumnSizes);
    
    for (i = 0; i < returnSize; i++)
    {
        int j = 0;
        for (j = 0; j < 3; j++)
        {
            printf("%d ", ret[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 3; i++)
    {
        free(ppa[i]);
    }
    free(ppa);

    return 0;
}