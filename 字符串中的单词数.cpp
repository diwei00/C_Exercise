#include <string.h>
#include <stdio.h>
//˫ָ�뷨�����ַ���
int countSegments(const char* s) {
    const char* str = s;
    const char* str2 = s;
    int count = 0;
    int count2 = 0;
    while (*str != '\0')
    {
        //���ʵ�һ����ĸ�ͼӣ�Ȼ�������������ʣ�
        if (*str != ' ')
        {
            count++;
        }
        str2 = str;
        count2 = 0;
        //�������ÿ�����ʵĸ���
        while (*str2 != ' ' && *str2 != '\0')
        {
            count2++;
            str2++;
        }
        if (*str != ' ')
        {
            //�������ĸ������������ĸ
            str += count2;
        }
        else
        {
            //����ж���ո񣬾������Ҳ��ǿո����ĸ
            str++;
        }


    }
    return count;

}
int main()
{
    int ret = countSegments("Hello, my name is John");
    printf("%d", ret);

	return 0;
}