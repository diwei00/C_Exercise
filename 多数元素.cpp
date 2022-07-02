#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int majorityElement(int* nums, int numsSize) {
    int n = numsSize / 2;
    int* pa = (int*)malloc(sizeof(int) * numsSize * 2);
    int index = 0;
    int sz = 0;
    memset(pa, 0, sizeof(int) * numsSize * 2);
 
    //先入第一个数据
    pa[index++] = nums[0];
    pa[index++] = 1;
    sz += 2;
    int j = 0;
    //间隔存，数据存前面，数据个数存后面
    for (j = 1; j < numsSize; j++)
    {
        int flag = 0;
        int k = 0;
        for (k = 0; k < sz; k += 2)
        {
            if (nums[j] == pa[k])
            {
                pa[k + 1]++;
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            pa[index++] = nums[j];
            pa[index++] = 1;
            sz += 2;
        }
       
    }
    int i = 0;
    for (i = 1; i < sz; i += 2)
    {
        if (pa[i] > n)
        {
            return pa[i - 1];
        }
    }
    return -1;

}
int main()
{
    int arr[] = { 3,2,3,3 };
    int sz = sizeof(arr) / sizeof(arr[0]);
    int ret = majorityElement(arr, sz);
    printf("%d", ret);
    return 0;
}