#include <stdio.h>
#include <stdlib.h>
int* twoSum(int* numbers, int numbersLen, int target, int* returnSize)
{
    // write code here
    int* pa = (int*)malloc(sizeof(int) * 2);
    int i = 0;
    for (i = 0; i < numbersLen - 1; i++)
    {
        //ÓÅ»¯Ëã·¨
        if (numbers[i] - 10 > target)
        {
            continue;

        }
        int j = 0;
        for (j = i + 1; j < numbersLen; j++)
        {
            if (numbers[i] + numbers[j] == target)
            {
                pa[0] = i + 1;
                pa[1] = j + 1;
                *returnSize = 2;
                return pa;
            }
        }

    }
    *returnSize = 0;
    return NULL;

}
int main()
{
    int arr[] = { 3,2,4 };
    int sz = sizeof(arr) / sizeof(arr[0]);
    int num = 0;
    int* pa = twoSum(arr, sz, 6, &num);
    int i = 0;
    for (i = 0; i < num; i++)
    {
        printf("%d ", pa[i]);
    }

    return 0;
}