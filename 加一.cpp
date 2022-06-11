#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int* plusOne(int* digits, int digitsSize, int* returnSize) 
{
    //三种情况
    //1 2 3 4 5 6
    //1 2 3 9 9 9
    //9 9 9 9 9 9
    int* pa = (int*)malloc(sizeof(int) * (digitsSize + 1));
    memset(pa, 0, sizeof(int) * (digitsSize + 1));
    int j = digitsSize - 1;
    if (digits[j] != 9)
    {
        digits[j]++;
        *returnSize = digitsSize;
        return digits;
    }
    else
    {
        int i = 0;
        for (i = digitsSize - 1; i >= 0; i--)
        {
            if (digits[i] != 9)
            {
                break;
            }
            digits[i] = 0;
        }
        if (i >= 0)
        {
            digits[i]++;
            *returnSize = digitsSize;
            return digits;
        }
        else
        {
            pa[0] = 1;
            *returnSize = digitsSize + 1;
            return pa;
        }
    }
}
int main()
{
    int arr[3] = { 9,9,9 };
    int sz = sizeof(arr) / sizeof(arr[0]);
    int arr2[4] = { 0 };
    int p = 0;
    int* returnsize = &p;
    int* pa = plusOne(arr, sz, returnsize);
    if (*returnsize == sz)
    {
        int i = 0;
        for (i = 0; i < sz; i++)
        {
            printf("%d ", arr[i]);
        }
    }
    else
    {
        int i = 0;
        for (i = 0; i < sz + 1; i++)
        {
            printf("%d ", pa[i]);
        }
    }
   
   
    return 0;
}