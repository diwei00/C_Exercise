#include <string.h>

#include <stdio.h>
char findTheDifference(char* s, char* t) {
    int len1 = strlen(s);
    int len2 = strlen(t);
    int arr[26] = { 0 };
    int i = 0;
    //�����ַ���Ӧ�±�Ӽ�
    for (i = 0; i < len1; i++)
    {
        arr[s[i] - 'a']++;
    }
    //���ö�Ӧ�ַ��γɵ��±����
    for (i = 0; i < len2; i++)
    {
        arr[t[i] - 'a']--;
        //С��0����һ��
        if (arr[t[i] - 'a'] < 0)
        {
            return t[i];
        }
    }
    return ' ';


}
int main()
{

    char str1[] = "abcde";
    char str2[] = "abhcde";

    char tmp = findTheDifference(str1, str2);
    printf("%c", tmp);
    return 0;
}