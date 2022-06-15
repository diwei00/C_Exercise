#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* addStrings(char* num1, char* num2) {
    char* pa = (char*)malloc(sizeof(char) * 10000);
    memset(pa, '\0', sizeof(char) * 10000);
    int index = 9998;
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    int and = 0;
    int i = len1 - 1;
    int j = len2 - 1;
    int x = 0;
    int y = 0;

    while (i >= 0 || j >= 0 || and != 0)
    {
        //先转化为数字
        if (i >= 0)
        {
            x = num1[i] - '0';
        }
        else
        {
            x = 0;
        }
        if (j >= 0)
        {
            y = num2[j] - '0';
        }
        else
        {
            y = 0;
        }
        //数字加进制
        int result = x + y + and;
        //求模，转化为字符
        pa[index--] = result % 10 + '0';
        //求进制
        and = result / 10;
        i--;
        j--;
    }
    int k = 0;
    while (pa[k] == '\0')
    {
        k++;
    }
    return pa + k;

}
int main()
{
    char* str1 = "9";
    char* str2 = "999";
    char* ret = addStrings(str1, str2);
    printf("%s", ret);

    return 0;
}