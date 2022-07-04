#include <stdio.h>
#include <stdlib.h>
int cmp(const void* e1, const void* e2)
{
    return *(int*)e1 - *(int*)e2;
}
int maximumProduct(int* nums, int numsSize)
{
    qsort(nums, numsSize, sizeof(int), cmp);
    int muli = 1;
    int muli2 = 1;
    int i = 0;
    for (i = numsSize - 1; i >= numsSize - 3; i--)
    {
        muli *= nums[i];
    }
    for (i = 0; i < 2; i++)
    {
        muli2 *= nums[i];
    }
    muli2 *= nums[numsSize - 1];
    //考虑负数的存在
    if (muli2 > muli)
    {
        return muli2;
    }
    else
    {
        return muli;
    }
}
int main()
{
    int arr[] = { -100,-2,1,2,3 };
    int sz = sizeof(arr) / sizeof(arr[0]);
    int ret = maximumProduct(arr, sz);
    printf("%d", ret);

    return 0;
}