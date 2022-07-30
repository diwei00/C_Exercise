#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Ä£ÄâÕ»·¨
char* stack(char* s)
{
    char* pa = (char*)malloc(sizeof(char) * 200);
    memset(pa, '\0', sizeof(char) * 200);
    int index = 0;
    int i = 0;
    while (s[i] != '\0')
    {
        if (s[i] != '#')
        {
            pa[index++] = s[i];
        }
        else
        {
            if (index > 0)
            {
                index--;

            }
        }
        i++;
    }
    pa[index] = '\0';
    return pa;
}
bool backspaceCompare(char* s, char* t) {
    char* s1 = stack(s);
    char* t1 = stack(t);
    if (strcmp(s1, t1) == 0)
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

    char s1[] = "a##c";
    char s2[] = "a#b#";
    if (backspaceCompare(s1, s2))
    {
        printf("aaa");
    }


    return 0;
}