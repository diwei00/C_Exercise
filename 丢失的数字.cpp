#include <stdlib.h>
int cmp(const void* e1, const void* e2)
{
    return *(int*)e1 - *(int*)e2;
}
int missingNumber(int* nums, int numsSize) {
    int n = numsSize;
    qsort(nums, numsSize, sizeof(int), cmp);
    int i = 0;
    for (i = 1; i < numsSize - 1; i++)
    {
        if (nums[i] - nums[i - 1] == 1 && nums[i + 1] - nums[i] == 1)
        {
            ;
        }
        else
        {
            return nums[i] + 1;
        }
    }
    if (nums[0] != 0)
    {
        return 0;
    }
    if (nums[numsSize - 1] != n)
    {
        return n;
    }
    return -1;

}
int main()
{
    int arr[] = { 0,2 };
    int sz = sizeof(arr) / sizeof(arr[0]);

    missingNumber(arr, sz);
    return 0;
}