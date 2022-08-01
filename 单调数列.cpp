#include <stdio.h>
bool isMonotonic(int* nums, int numsSize) {
    //只有一个数字
    if (numsSize == 1)
    {
        return true;
    }
    int flag = 0;
    int i = 0;
    for (i = 0; i < numsSize - 1; i++)
    {
        if (nums[i + 1] != nums[i])
        {
            //找第一组不一样的两个数据比较，确定该递增还是递减
            if (nums[i + 1] > nums[i])
            {
                flag = 1;
                break;
            }
            else
            {
                break;
            }
        }
    }
    //数据全部相等
    if (i == numsSize - 1)
    {
        return true;
    }
    if (flag == 1)
    {
        for (i = 1; i < numsSize - 1; i++)
        {
            if (nums[i + 1] < nums[i])
            {
                break;
            }

        }
        if (i == numsSize - 1)
        {
            return true;
        }
        else
        {
            return false;
        }

    }
    else
    {
        for (i = 1; i < numsSize - 1; i++)
        {
            if (nums[i + 1] > nums[i])
            {
                break;
            }
        }
        if (i == numsSize - 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    return true;


}

int main()
{
    int arr[] = { 9,9,9,9,9 };
    int sz = sizeof(arr) / sizeof(arr[0]);
    if (isMonotonic(arr, sz))
    {
        printf("aaa");
    }

    return 0;
}