#include <string.h>
#include <stdio.h>
int lengthOfLastWord(char* s) 
{
    int len = strlen(s);
    int i = 0;
    int count = 0;
    //�Ӻ���ǰ�������Ҳ��ǿո����ĸ
    for (i = len - 1; i >= 0; i--)
    {
        if (s[i] != ' ')
        {
            break;
        }
    }
    //��ʼͳ���ַ�����
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