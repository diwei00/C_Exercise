#include <stdio.h>
#include <stdlib.h>
int cmp(const void* e1, const void* e2)
{
    return *(int*)e1 - *(int*)e2;
}
int dominantIndex(int* nums, int numsSize) 
{
    int i = 0;
    int max = nums[0];
    for (i = 1; i < numsSize; i++)
    {
        if (nums[i] > max)
        {
            max = nums[i];
        }
    }

    for (i = 0; i < numsSize; i++)
    {
        if (nums[i] == max)
        {
            break;
        }
    }
    qsort(nums, numsSize, sizeof(int), cmp);

    if (nums[numsSize - 1] >= (2 * nums[numsSize - 2]))
    {
        return i;
    }
    return -1;

}
int main()
{
    int arr[] = { 1,2,5,6,9,8,7 };
    int sz = sizeof(arr) / sizeof(arr[0]);
    int ret = dominantIndex(arr, sz);
    printf("%d", ret);

    return 0;
}