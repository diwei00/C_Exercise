#include <stdio.h>
#include <stdlib.h>
int findRepeatNumber(int* nums, int numsSize)
{
    int* arr = (int*)malloc(sizeof(int) * numsSize);
    int index = 0;
    int i = 0;
    //先把第一个数据入进去
    arr[index++] = nums[0];
    int sz_arr = 1;//记录容量
    for (i = 1; i < numsSize; i++)
    {
        int j = 0;
        for (j = 0; j < sz_arr; j++)
        {
            if (nums[i] != arr[j])
            {
                ;
            }
            else
            {
                //相同，直接返回
                return nums[i];
            }
        }
        //新数组中没有重复的数字，则入数据
        arr[index++] = nums[i];
        sz_arr++;
    }
    free(arr);
    arr = NULL;
    //没有重复的数据返回-1
    return -1;
}
int main()
{
    int arr[] = { 1,2,3,4,5,5,3,6,9,8 };
    int sz = sizeof(arr) / sizeof(arr[0]);
    int ret = findRepeatNumber(arr, sz);
    printf("%d", ret);
    return 0;
}