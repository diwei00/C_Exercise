#include <stdio.h>
void swap(int* a, int* b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
int singleNumber(int* nums, int numsSize) {
    if (numsSize == 1)
    {
        return nums[0];
    }

    int i = 0;
    for (i = 0; i < numsSize - 1; i++)
    {
        int j = 0;
        for (j = 0; j < numsSize - 1 - i; j++)
        {
            if (nums[j] > nums[j + 1])
            {
                swap(&nums[j], &nums[j + 1]);
            }
        }
    }
    if (nums[0] != nums[1])
    {
        return nums[0];
    }
    if (nums[numsSize - 1] != nums[numsSize - 2])
    {
        return nums[numsSize - 1];
    }
    for (i = 1; i < numsSize - 1; i++)
    {
        if (nums[i] != nums[i - 1] && nums[i] != nums[i + 1])
        {
            return nums[i];
        }

    }
    return -1;
}

int main()
{
    int arr[] = { 1,1,2,5,2,6,8,6,8 };
    int sz = sizeof(arr) / sizeof(arr[0]);
    int ret = singleNumber(arr, sz);
    printf("%d", ret);
    return 0;
}