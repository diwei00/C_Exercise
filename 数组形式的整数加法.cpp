#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
//�޸ĵ���
int* addToArrayForm(int* num, int numSize, int k, int* returnSize) {
    int* pa = (int*)malloc(sizeof(int) * (numSize));
    memset(pa, 0, sizeof(int) * (numSize));
    int index = numSize - 1;
    int i = numSize - 1;
    int flag = 1;
    int count = 0;
    while (k)
    {
        //��¼i
        int tmp = i;
        //������
        pa[index--] = ((k % 10) + num[i--]) % 10;
        //�н���
        if ((((k % 10) + num[tmp]) >= 10))
        {
            if (i >= 0)
            {
                num[i]++;

            }
            //��һλ��Ҫ���ƣ�����
            if ((num[0] + k % 10) >= 10 && tmp == 0)
            {
                int* pa2 = (int*)realloc(pa, sizeof(int) * (numSize + 1));
                if (pa2 != NULL)
                {
                    pa = pa2;
                    //�ص�����
                    memcpy(pa + 1, pa, sizeof(int) * numSize);
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
    //�ӷ�λ�����������������ֿ�������
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

int main()
{
    int arr[] = { 2,1,5 };
    int sz = sizeof(arr) / sizeof(arr[0]);
    int returnSize = 0;
    int* pa = addToArrayForm(arr, sz, 806, &returnSize);

    int i = 0;
    for (i = 0; i < returnSize; i++)
    {
        printf("%d ", pa[i]);
    }
    free(pa);
    pa = NULL;

    return 0;
}