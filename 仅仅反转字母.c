#include <stdio.h>
#include <string.h>
char* reverseOnlyLetters(char* s) {
    int len = strlen(s);
    int left = 0;
    int right = len - 1;
    while (left < right)
    {
        //更据题目要求，防止越界
        while ((s[left] < 'A' && s[left] >= 0)
            || (s[left] > 'Z' && s[left] < 'a')
            || s[left] > 'z')
        {
            if (s[left] == '\0')
            {
                break;
            }
            left++;
        }
        while (s[right] < 'A' && s[right] >= 0
            || s[right] > 'Z' && s[right] < 'a'
            || s[right] > 'z')
        {
            if (right <= 0)
            {
                break;
            }
            right--;
        }
        if (left < right)
        {
            char tmp = s[left];
            s[left] = s[right];
            s[right] = tmp;
            left++;
            right--;
        }

    }
    return s;

}
int main()
{
    char* str = "7_28]";
    char* ret = reverseOnlyLetters(str);
    printf("%s", ret);

    return 0;
}