#include <stdio.h>
#include <string.h>
int strStr(char* haystack, char* needle) 
{
    char* s1 = haystack;
    char* s2 = needle;
    char* p = haystack;
    //��p����¼��ȵ�ʱ��
    //��������whileѭ�����жϲ���
    while (*p)
    {
        s1 = p;
        s2 = needle;
        while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
        {
            s1++;
            s2++;
        }
        if (*s2 == '\0')
        {
            return p - haystack;
        }
        p++;
    }
    return -1;

}
int main()
{
    char* str1 = "cbaaa";
    char* str2 = "aaa";
    int ret = strStr(str1, str2);
    printf("%d", ret);

    return 0;
}