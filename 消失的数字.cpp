#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) 
{
    
    int* pa = (int*)malloc(sizeof(int) * 100);
    memset(pa, 0, sizeof(int) * 100);
    int i = 0;
    //桶计数法，只需找[1 - n]下标内元素为0的下标，即为原来数组缺失的数字
    //映射法
    for (i = 0; i < numsSize; i++)
    {
        pa[nums[i]]++;
        
    }
    int* pa2 = (int*)malloc(sizeof(int) * (100));
    memset(pa2, 0, sizeof(int) * 100);
    int index = 0;
    for (i = 1; i <= numsSize; i++)
    {
        if (pa[i] == 0)
        {
            pa2[index++] = i;
        }
    }
    *returnSize = index;
    return pa2;
}
int main()
{
    int arr[] = { 1,1,2, 1,1};
    int sz = sizeof(arr) / sizeof(arr[0]);
    int num = 0;
    int* ret = findDisappearedNumbers(arr, sz, &num);
    int i = 0;
    for (i = 0; i < num; i++)
    {
        printf("%d ", ret[i]);
    }
    

    return 0;
}