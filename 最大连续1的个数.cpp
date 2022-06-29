#include <stdio.h>
#include <stdlib.h>
int findMaxConsecutiveOnes(int* nums, int numsSize)
{
    int count = 0;
    int* pa = (int*)malloc(sizeof(int) * numsSize);
    int index = 0;
    //遍历数组，记录相邻1的个数
    int i = 0;
    for (i = 0; i < numsSize; i++)
    {
        if (nums[i] == 1)
        {
            count++;
        }
        else
        {
            pa[index++] = count;
            count = 0;
        }
    }
    //如果数组最后一个数据为1，则把最后一组连续1的个数记录
    if (nums[numsSize - 1] == 1)
    {
        pa[index++] = count;
    }
    //输出最大的个数
    int max = pa[0];
    for (i = 1; i < index; i++)
    {
        if (pa[i] > max)
        {
            max = pa[i];
        }
    }
    return max;

}
int main()
{
    int arr[] = { 1,1,0,1,1,1,1,1 };
    int sz = sizeof(arr) / sizeof(arr[0]);
    int ret = findMaxConsecutiveOnes(arr, sz);
    printf("%d", ret);
    return 0;
}