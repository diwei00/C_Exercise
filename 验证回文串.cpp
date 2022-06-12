#include <stdio.h>
#include <string.h>
#include <stdlib.h>
bool isPalindrome(char* s) {
    int len = strlen(s);
    char* ps = (char*)malloc(sizeof(char) * (len + 1));
    int index = 0;
    memset(ps, '\0', sizeof(char) * (len + 1));
    int i = 0;
    for (i = 0; i < len; i++)
    {
        if (s[i] >= 65 && s[i] <= 90)
        {
            s[i] = s[i] + 32;
        }
        if (s[i] >= 97 && s[i] <= 122 || s[i] >= 48 && s[i] <= 57)
        {
            ps[index++] = s[i];
        }
    }
    int left = 0;
    int right = strlen(ps) - 1;
    while (left < right)
    {
        if (ps[left] == ps[right])
        {
            left++;
            right--;
        }
        else
        {
            return false;
        }
    }
    return true;

}

int main()
{
    char str[] = "0P";

    if (isPalindrome(str))
    {
        printf("aaa");
    }
    else
    {
        printf(":ddd");
    }
    return 0;
}