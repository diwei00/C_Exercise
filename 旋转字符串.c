#include <stdbool.h>
#include <string.h>
#include <stdio.h>
bool rotateString(char* s, char* goal) {
    char* s1 = s;
    
    int len = strlen(s);
    int tmp2 = len - 1;
    int len2 = strlen(s) - 1;
    int len3 = strlen(s) - 1;
    //����ѭ������
    while (len3--)
    {
        char tmp = *(s1 + len - 1);
        int i = 1;
        while (len2--)
        {
            s1[len - i] = s1[len - i - 1];
            i++;
        }
        //һ����ת�꣬len2����
        len2 = tmp2;
        s1[0] = tmp;
        int ret = strcmp(s1, goal);
        if (ret == 0)
        {
            return true;
        }

    }
    return false;
}
int main()
{

    char s1[] = "abcde";
    char s2[] = "cdeab";
    if (rotateString(s1, s2))
    {
        printf("jkhiuo");
    }
    return 0;
}