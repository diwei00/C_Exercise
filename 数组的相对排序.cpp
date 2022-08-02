#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int* relativeSortArray(int* arr1, int arr1Size, int* arr2, int arr2Size, int* returnSize) {
    int* pa = (int*)malloc(sizeof(int) * 1000);
    memset(pa, 0, sizeof(int) * 1000);
    int index = 0;
    int* pa2 = (int*)malloc(sizeof(int) * 1001);
    memset(pa2, 0, sizeof(int) * 1001);
    int i = 0;
    //计数法
    for (i = 0; i < arr1Size; i++)
    {
        pa2[arr1[i]]++;
    }
    //遍历arr2
    for (i = 0; i < arr2Size; i++)
    {
        int j = 0;
        for (j = 0; j < 1000; j++)
        {
            if (j == arr2[i])
            {
                break;
            }
        }
       
        while (pa2[j]--)
        {
            pa[index++] = j;
        }
        //将计数器改为0
        pa2[j] = 0;
    }
    //arr2中没有出现的数字
    for (i = 0; i < 1001; i++)
    {
        if (pa2[i] != 0)
        {
            int tmp = pa2[i];
            while (tmp--)
            {
                pa[index++] = i;
            }
        }
    }
    *returnSize = index;
    free(pa2);
    pa2 = NULL;
    return pa;

}

int main()
{
    int arr1[] = { 2,3,1,3,2,4,6,7,9,2,19 };
    int sz1 = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[] = { 2,1,4,3,9,6 };
    int sz2 = sizeof(arr2) / sizeof(arr2[0]);
    int returnSize = 0;
    int* pa = relativeSortArray(arr1, sz1, arr2, sz2, &returnSize);
    int i = 0;
    for (i = 0; i < returnSize; i++)
    {
        printf("%d ", pa[i]);
    }
    free(pa);
    pa = NULL;


    return 0;
}