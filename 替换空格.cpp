#include <stdio.h>
char* replaceSpace(char* s)
{
    // write code here
    char str[10005] = { 0 };
    int i = 0;
    int index = 0;
    while (s[i] != '\0')
    {
        if (s[i] != ' ')
        {
            str[index] = s[i];
            index++;
        }
        else
        {
            str[index] = '%';
            index++;
            str[index] = '2';
            index++;
            str[index] = '0';
            index++;
        }
        i++;
    }
    return str;
}
int main()
{

    char str[100] = { 0 };
    gets_s(str);
    puts(replaceSpace(str));
    return 0;
}
