#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* longestCommonPrefix(const char** strs, int strsSize) {
    char* arr = (char*)malloc(sizeof(char) * strsSize * 2);
    memset(arr, '\0', sizeof(char) * strsSize * 2);
    int index = 0;
    int sz_arr = 0;
    //����棬�ȴ�����ĸ���ٴ���ĸ����
    arr[index] = *(strs[0]);
    arr[1]++;
    index += 2;
    sz_arr += 2;
    int i = 0;
    for (i = 1; i < strsSize; i++)
    {
        int j = 0;
        for (j = 0; j < sz_arr; j += 2)
        {
            if (*strs[i] == arr[j])
            {
                arr[j + 1]++;
                break;
            }
            else
            {
                ;
            }
        }
        if (j == sz_arr)
        {
            arr[index] = *(strs[i]);
            arr[index + 1]++;
            index += 2;
            sz_arr += 2;

        }
    }
    int k = 1;
    int max = arr[k];
    //�ҵ����ĸ���
    for (k = 3; k < sz_arr; k += 2)
    {
        if (arr[k] > max)
        {
            max = arr[k];
        }
    }
    //�ҵ��������±�
    for (k = 1; k < sz_arr; k += 2)
    {
        if (arr[k] == max)
        {
            break;
        }
    }
    //�����ĸ
    if (sz_arr == 2)
    {
        return arr;
    }
    else
    {
        return arr + k - 1;
    }
    
    free(arr);
    arr = NULL;

}
int main()
{
	const char* str[] = { "llower","llow","llight", "luhao","hh","hh","hh"};
    int sz = sizeof(str) / sizeof(str[0]);
    char* ret = longestCommonPrefix(str, sz);
    printf("%c", *ret);
	return 0;
}