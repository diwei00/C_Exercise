#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int cmp(const void* e1, const void* e2)
{
    return *(int*)e1 - *(int*)e2;
}
//直接排序法
int* sortedSquares1(int* nums, int numsSize, int* returnSize)
{

    int* pa = (int*)malloc(sizeof(int) * numsSize);
    int i = 0;
    for (i = 0; i < numsSize; i++)
    {
        pa[i] = pow(nums[i], 2);
    }
    *returnSize = numsSize;
    qsort(pa, numsSize, sizeof(int), cmp);
    return pa;
}
//利用有序的规律，进行归并排序
int* sortedSquares(int* nums, int numsSize, int* returnSize) 
{
    int* pa = (int*)malloc(sizeof(int) * numsSize);
    int index = 0;
    int i = 0;
    for (i = 0; i < numsSize; i++)
    {
        if (nums[i] >= 0)
        {
            break;
        }
    }
    int k = i - 1;
    int j = i;
    while (k >= 0 && j < numsSize)
    {
        if (pow(nums[k], 2) < pow(nums[j], 2))
        {
            pa[index++] = pow(nums[k], 2);
            k--;
        }
        else
        {
            pa[index++] = pow(nums[j], 2);
            j++;
        }
    }
    while (k >= 0)
    {
        pa[index++] = pow(nums[k], 2);
        k--;
    }
    while (j < numsSize)
    {
        pa[index++] = pow(nums[j], 2);
        j++;
    }
    *returnSize = index;
    return pa;
}
int main()
{
	int arr[] = { -6,-2,1,5,8 };
	int sz = sizeof(arr) / sizeof(arr[0]);
    int num = 0;
  /*  int* pa = sortedSquares1(arr, sz, &num);*/
    int* pa = sortedSquares(arr, sz, &num);
    int i = 0;
    for (i = 0; i < num; i++)
    {
        printf("%d ", pa[i]);
    }
	return 0;
}