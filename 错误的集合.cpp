#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int* findErrorNums(int* nums, int numsSize, int* returnSize)
{
    int* pa = (int*)malloc(sizeof(int) * 2);
    int size = 0;
    int* pa2 = (int*)malloc(sizeof(int) * (numsSize + 1));
    memset(pa2, 0, sizeof(int) * (numsSize + 1));
    //桶计数法
    int i = 0;
    for (i = 0; i < numsSize; i++)
    {
        pa2[nums[i]]++;
    }
    //找重复数字及缺少的数字
    for (i = 0; i < numsSize + 1; i++)
    {
        if (pa2[i] == 2)
        {
            pa[0] = i;
        }
        if (pa2[i] == 0)
        {
            pa[1] = i;
        }
    }
    *returnSize = 2;
    return pa;

}
int main()
{
    int arr[3] = { 2,2,3 };
    int sz = sizeof(arr) / sizeof(arr[0]);
    int num = 0;
    int* pa = findErrorNums(arr, sz, &num);
    int i = 0;
    for (i = 0; i < num; i++)
    {
        printf("%d ", pa[i]);
    }

    return 0;
}