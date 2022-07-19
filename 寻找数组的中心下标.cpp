#include <stdio.h>
//求左面和，右面和，然后判断
int pivotIndex(int* nums, int numsSize) 
{
    int total = 0;
    int sum_left = 0;
    int sum_right = 0;
    int i = 0;
    for (i = 0; i < numsSize; i++)
    {
        total += nums[i];
    }
    for (i = 0; i < numsSize; i++)
    {
        sum_left = 0;
        sum_right = 0;
        int j = 0;
        for (j = 0; j < i; j++)
        {
            sum_left += nums[j];
        }
        for (j = i + 1; j < numsSize; j++)
        {
            sum_right += nums[j];
        }
        if (sum_left == sum_right)
        {
            return i;
        }
    }
    return -1;
}
int main()
{

    int arr[] = { 1,7,3,6,5,6 };
    int sz = sizeof(arr) / sizeof(arr[0]);
    int ret = pivotIndex(arr, sz);
    printf("%d", ret);

    return 0;
}