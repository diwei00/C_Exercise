#include <string.h>
#include <stdio.h>
int lengthOfLastWord(char* s) 
{
    int len = strlen(s);
    int i = 0;
    int count = 0;
    //从后向前遍历，找不是空格的字母
    for (i = len - 1; i >= 0; i--)
    {
        if (s[i] != ' ')
        {
            break;
        }
    }
    //开始统计字符个数
    int j = 0;
    for (j = i; j >= 0; j--)
    {
        if (s[j] == ' ')
        {
            break;
        }
        else
        {
            count++;
        }
    }
    return count;
}
int main()
{
    char str[] = "aaa bbddb  ";
    int ret = lengthOfLastWord(str);
    printf("%d", ret);
    return 0;
}