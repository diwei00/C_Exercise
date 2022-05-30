#include <string.h>
#include <stdbool.h>
#include <stdio.h>
bool judge(char* str)
{
    // write code here
    int left = 0;
    int right = strlen(str) - 1;
    while (left < right)
    {
        if (str[left] == str[right])
        {
            left++;
            right--;
        }
        else
        {
            break;
        }
    }
    if (left == right || left > right)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    char str[20] = { 0 };
    gets_s(str);
    if (judge(str))
    {
        printf("true");
    }
    else
    {
        printf("false");
    }

    return 0;

}