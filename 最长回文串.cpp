#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int longestPalindrome(char* s) {
    int len = strlen(s);
    int* pa = (int*)malloc(sizeof(int) * 52);
    memset(pa, 0, sizeof(int) * 52);
    int index = 0;
    char* str = s;
    while (*str != '\0')
    {
        //桶计数
        if (*str >= 97 && *str <= 122)
        {
            pa[*str - 'a']++;
        }
        else
        {
            pa[*str - 38]++;
        }

        str++;
    }
    int count = 0;
    int sum = 0;
    int i = 0;
    for (i = 0; i < 52; i++)
    {
        //偶数全部相加
        if (pa[i] % 2 == 0)
        {
            sum += pa[i];
        }
        else
        {
            //奇数，把偶数部分相加
            if (pa[i] > 1)
            {
                sum += (pa[i] - 1);
            }
            count++;
        }
    }
    //如果有奇数个字符，则回文串加1
    if (count != 0)
    {
        return sum + 1;
    }
    else
    {
        return sum;
    }


}
int main()
{

    char str[] = "abccccdd";
    int ret = longestPalindrome(str);
    printf("%d", ret);
    return 0;
}