#include <stdio.h>
#include <stdlib.h>
void sortArrayByParity(int* nums, int n)
{
    //左右指针
    int left = 0;
    int right = n - 1;
    while (left < right)
    {
        //找奇数
        while (nums[left] % 2 == 0)
        {
            left++;
        }
        //找偶数
        while (nums[right] % 2 != 0)
        {
            right--;
        }
        if (left < right)
        {
            int tmp = nums[left];
            nums[left] = nums[right];
            nums[right] = tmp;
        }
    }
}
int* sortArrayByParityII(int* nums, int numsSize, int* returnSize) {
    sortArrayByParity(nums, numsSize);
    int* pa = (int*)malloc(sizeof(int) * numsSize);
    int i = 0;
    int j = 0;
    //按奇偶存放
    for (i = 0, j = 0; i < numsSize; i += 2, j++)
    {
        pa[i] = nums[j];
    }
    for (i = 1, j = numsSize / 2; i < numsSize; i += 2, j++)
    {
        pa[i] = nums[j];
    }
    *returnSize = numsSize;
    return pa;

}
int main()
{

    int arr[] = { 4,2,5,7 };
    int sz = sizeof(arr) / sizeof(arr[0]);
    int num = 0;
    int* pa = sortArrayByParityII(arr, sz, &num);
    int i = 0;
    for (i = 0; i < num; i++)
    {
        printf("%d ", pa[i]);
    }
    return 0;
}