#include <stdio.h>
#include <string.h>
#include <stdlib.h>
bool buddyStrings(char* s, char* goal)
{
    int len1 = strlen(s);
    int len2 = strlen(goal);
    if (len1 != len2)
    {
        return false;
    }
    int flag = 0;
    //特殊情况的处理
    if (strcmp(s, goal) == 0)
    {
        char* pa = (char*)malloc(sizeof(char) * 26);
        memset(pa, 0, sizeof(char) * 26);
        int i = 0;
        for (i = 0; i < len1; i++)
        {
            pa[s[i] - 'a']++;
        }
        for (i = 0; i < 26; i++)
        {
            if (pa[i] >= 2)
            {
                flag = 1;
            }
        }
        if (flag == 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    char* ret = s;
    int i = 0;
    for (i = 0; i < len1 - 1; i++)
    {
        int j = 0;
        for (j = i + 1; j < len1; j++)
        {
            //优化算法
            if (s[i] == s[j])
            {
                continue;
            }
            char tmp = ret[i];
            ret[i] = ret[j];
            ret[j] = tmp;
            if (strcmp(ret, goal) == 0)
            {
                return true;
            }
            char tmp2 = ret[i];
            ret[i] = ret[j];
            ret[j] = tmp2;
        }
    }
    return false;


}
int main()
{

    char str1[] = "ab";
    char str2[] = "ab";
    if (buddyStrings(str1, str2))
    {
        printf("aaa");
    }
    return 0;
}