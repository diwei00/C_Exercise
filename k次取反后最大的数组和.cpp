#include <stdlib.h>
#include <stdio.h>
int cmp(const void* e1, const void* e2)
{
    return *(int*)e1 - *(int*)e2;
}
int largestSumAfterKNegations(int* nums, int numsSize, int k)
{
    
    qsort(nums, numsSize, sizeof(int), cmp);
    int minusNum = 0;
    int i = 0;
    for (i = 0; i < numsSize; i++)
    {
        if (nums[i] < 0)
        {
            minusNum++;
        }
        else
        {
            break;
        }
    }
    if (minusNum == 0)
    {
        int sum = 0;
        i = 0;
        for (i = 0; i < k % 2; i++)
        {
            sum += (-nums[i]);
        }
        int j = 0;
        for (j = i; j < numsSize; j++)
        {
            sum += nums[j];
        }
        return sum;
    }
    if (k <= minusNum)
    {
        int sum = 0;
        i = 0;
        for (i = 0; i < k; i++)
        {
            nums[i] = -nums[i];
            sum += nums[i];
        }
        int j = 0;
        for (j = i; j < numsSize; j++)
        {
            sum += nums[j];
        }
        return sum;
    }
    else
    {
        int sum = 0;
        int n = k - minusNum;
        //防止判断越界
        if (n % 2 == 0 || minusNum != numsSize &&  nums[minusNum] == 0)
        {
            int i = 0;
            for (i = 0; i < minusNum; i++)
            {
                sum += (-nums[i]);
            }
            int j = 0;
            for (j = i; j < numsSize; j++)
            {
                sum += nums[j];
            }
            return sum;
        }
        else//先反转所有负数，剩余次数分奇数和偶数，偶数和不变，奇数反转最小正数
        {
            int sum = 0;
            i = 0;
            for (i = 0; i < minusNum; i++)
            {
                nums[i] = -nums[i];
            }
            qsort(nums, numsSize, sizeof(int), cmp);
            nums[0] = -nums[0];
            for (i = 0; i < numsSize; i++)
            {
                sum += nums[i];
            }
            return sum;
        }
    }
}

int main()
{

    int arr[] = { -4,-2,-3 };
    int sz = sizeof(arr) / sizeof(arr[0]);
    int ret = largestSumAfterKNegations(arr, sz, 4);
    printf("%d", ret);
    return 0;
}