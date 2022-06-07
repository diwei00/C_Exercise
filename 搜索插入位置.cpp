#include <stdio.h>
int searchInsert(int* nums, int numsSize, int target)
{
    int left = 0;
    int right = numsSize - 1;
    int mid = 0;
    while (left < right)
    {
        mid = (left + right) >> 1;
        if (nums[mid] > target)
        {
            right = mid - 1;
        }
        else if (nums[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            return mid;
        }

    }
    if (nums[left] >= target)
    {
        return left;
    }
    else
    {
        return left + 1;
    }
}
int main()
{
    int arr[] = { 1,3,5,6};
    int sz = sizeof(arr) / sizeof(arr[0]);

    int ret = searchInsert(arr, sz, 2);
    printf("%d", ret);

    return 0;
}