#include <stdio.h>
#include <string.h>
bool repeatedSubstringPattern(char* s)
{
    int n = strlen(s);
    for (int i = 1; i < n; ++i)
    {
        //ԭ������һ�����ִ����ȵı�������������break���ִ�
        if (n % i == 0)
        {
            bool flag = true;
            //����ԭ�ַ���
            for (int j = i; j < n; ++j) 
            {
                if (s[j] != s[j - i])
                {
                    flag = false;
                    break;
                }
            }
            //forѭ��������û����if��伴ȫ��һ��
            if (flag) 
            {
                return true;
            }
        }
    }
    return false;
}
int main()
{
    char str[] = "abaaacabaaac";
    if (repeatedSubstringPattern(str))
    {
        printf("dvkj");
    }

    return 0;
}