
#include <stdio.h>
int removeElement(int* nums, int numsSize, int val) 
{
    //不开辟新数组
    //把不相等的数字都移到数组前面，只打印前面的数据
    int left = 0;

    int i = 0;
    for (i = 0; i < numsSize; i++)
    {
        if (nums[i] != val)
        {
            nums[left] = nums[i];
            left++;
        }
    }
    return left;

}


int main()
{
    int arr[] = { 3,2,2,3,3,5 };
    int sz = sizeof(arr) / sizeof(arr[0]);
    int ret = removeElement(arr, sz, 3);
    int i = 0;
    for (i = 0; i < ret; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}