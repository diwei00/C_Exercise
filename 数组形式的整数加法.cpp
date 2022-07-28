#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
//ÐÞ¸Äµ±ÖÐ
int* addToArrayForm(int* num, int numSize, int k, int* returnSize) {
    int* pa = (int*)malloc(sizeof(int) * (numSize));
    memset(pa, 0, sizeof(int) * (numSize));
    int index = numSize - 1;
    int i = numSize - 1;
    int flag = 1;
    int count = 0;
    while (k)
    {
        int tmp = i;
        pa[index--] = ((k % 10) + num[i--]) % 10;
        if ((((k % 10) + num[tmp]) >= 10))
        {
            if (i >= 0)
            {
                num[i]++;

            }
            if ((num[0] + k % 10) >= 10)
            {
                int* pa2 = (int*)realloc(pa, numSize + 1);
                if (pa2 != NULL)
                {
                    pa = pa2;
                    pa[0] = 0;
                    pa2 = NULL;
                }
                pa[0]++;
                flag = 0;
            }
        }
        count++;
        k /= 10;
    }
    if (count < numSize)
    {
        int j = 0;
        for (j = numSize - count - 1; j >= 0; j--)
        {
            pa[index--] = num[j];
        }
    }

    if (flag == 0)
    {
        *returnSize = numSize + 1;

    }
    else
    {
        *returnSize = numSize;

    }
    return pa;
}
int* addToArrayForm2(int* num, int numSize, int k, int* returnSize) {
    int* res = (int*)malloc(sizeof(int) * fmax(10, numSize + 1));
    *returnSize = 0;
    for (int i = numSize - 1; i >= 0; --i) {
        int sum = num[i] + k % 10;
        k /= 10;
        if (sum >= 10) {
            k++;
            sum -= 10;
        }
        res[(*returnSize)++] = sum;
    }
    for (; k > 0; k /= 10) {
        res[(*returnSize)++] = k % 10;
    }
    for (int i = 0; i < (*returnSize) / 2; i++) {
        int tmp = res[i];
        res[i] = res[(*returnSize) - 1 - i];
        res[(*returnSize) - 1 - i] = tmp;
    }
    return res;
}

int main()
{
    int arr[] = { 2,1,5 };
    int sz = sizeof(arr) / sizeof(arr[0]);
    int returnSize = 0;
    int* pa = addToArrayForm2(arr, sz, 806, &returnSize);

    int i = 0;
    for (i = 0; i < returnSize; i++)
    {
        printf("%d ", pa[i]);
    }
    free(pa);
    pa = NULL;

    return 0;
}