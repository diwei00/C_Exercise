#include <stdio.h>
#include <stdlib.h>
int cmp(const void* e1, const void* e2)
{
    return *(int*)e1 - *(int*)e2;
}
//反向思维
//后追前，后加速   等效于  后追前，前减速
//等效于一次有一个数减1，即相等为最小的数字
int minMoves(int* nums, int numsSize) {
    qsort(nums, numsSize, sizeof(int), cmp);
    int sum = 0;
    int i = 0;
    for (i = 1; i < numsSize; i++)
    {
        sum += nums[i] - nums[0];
    }
    return sum;


}
int main()
{

    int arr[] = { 1,1000000000 };
    int sz = sizeof(arr) / sizeof(arr[0]);
    int ret = minMoves(arr, sz);
    printf("%d", ret);
    return 0;
}