#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char** commonChars(char** words, int wordsSize, int* returnSize) 
{
    int* minPa = (int*)malloc(sizeof(int) * 26);
    memset(minPa, 0, sizeof(int) * 26);
    int* pa = (int*)malloc(sizeof(int) * 26);
    memset(pa, 0, sizeof(int) * 26);
    int sz = 26;
    int len = strlen(words[0]);
    //桶计数法，统计第一个字符串个数
    int i = 0;
    for (i = 0; i < len; i++)
    {
        minPa[(*words)[i] - 'a']++;
    }
    for (i = 1; i < wordsSize; i++)
    {
        int j = 0;
        while ((*(words + i))[j] != '\0')
        {
            pa[(*(words + i))[j] - 'a']++;
            j++;
        }
        //更新为最小值
        for (j = 0; j < sz; j++)
        {
            if (pa[j] < minPa[j])
            {
                minPa[j] = pa[j];
            }
        }
        //初始化pa，再次进行计数
        memset(pa, 0, sizeof(int) * 26);

    }
    //倒数据
    char** ppa = (char**)malloc(sizeof(char*) * 26);
    int index = 0;
    for (i = 0; i < sz; i++)
    {
        if (minPa[i] != 0)
        {
            int flag = minPa[i];
            while (flag--)
            {
                ppa[index] = (char*)malloc(sizeof(char) * 2);
                (*(ppa + index))[0] = i + 'a';
                (*(ppa + index))[1] = 0;
                index++;
            }
        }
    }
    *returnSize = index;
    return ppa;
}
int main()
{
    char* arr[] = { "bella","label","roller" };
    int sz = sizeof(arr) / sizeof(arr[0]);
    int num = 0;
    char** pa = commonChars(arr, sz, &num);
    int i = 0;
    for (i = 0; i < num; i++)
    {
        printf("%s\n", pa[i]);
    }

    return 0;
}