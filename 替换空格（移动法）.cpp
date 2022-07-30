#include <stdio.h>
#include <string.h>
void replaceSpace(char* str, int length)
{
    //先求空格个数，求出新的字符串长度
    //然后从后往前移动
    int len = strlen(str);
    int count = 0;
    int i = 0;
    for (i = 0; i < len; i++)
    {
        if (str[i] == ' ')
        {
            count++;
        }
    }
    int len2 = len + (count * 2);
    *(str + len2) = '\0';
    while (len > 0)
    {
        if (*(str + len - 1) != ' ')
        {
            *(str + len2 - 1) = *(str + len - 1);
        }
        else
        {
            *(str + (len2--) - 1) = '0';
            *(str + (len2--) - 1) = '2';
            *(str + (len2)-1) = '%';
        }

        len2--;
        len--;
    }

}
int main()
{
    char str[100] = "a b bbb";
    replaceSpace(str, 100);
    printf("%s", str);
    return 0;
}