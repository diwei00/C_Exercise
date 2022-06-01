#include <stdio.h>
#include <string.h>
#include <stdlib.h>
bool Check_Capacity(char* pc, int len, int size)
{
    if (size == len)
    {

        char* pc2 = (char*)realloc(pc, sizeof(char) * (len + 1) * 2);
        if (pc2 != NULL)
        {
            pc = pc2;
            return true;
        }
    }
    return false;
}
char* compressString(char* S) {
    int len = (int)strlen(S);
    int size = 0;
    char* pc = (char*)malloc(sizeof(char) * (len + 1));
    memset(pc, 0, sizeof(char) * (len + 1));
    
    int i = 0;
    int index = 0;
    pc[index++] = S[i];
    pc[index++] = '1';
    size += 2;
    for (i = 1; i <= len - 1; i++)
    {
        if (S[i] == S[i - 1])
        {
            pc[index - 1]++;

        }
        else
        {
            if (Check_Capacity(pc, len, size))
            {
                memset(pc + (len + 1), 0, sizeof(char) * len);
            }
            pc[index++] = S[i];
            size++;

            if (Check_Capacity(pc, len, size))
            {
                memset(pc + (len + 1), 0, sizeof(char) * (len + 1));
            }
            pc[index++] = '1';
            size ++;
        }
    }
    if (size <= len)
    {
        return pc;

    }
    else
    {
        return S;
    }
}
int main()
{
    char str[] = "abcdaaaaaa";
    char* ret = compressString(str);
    printf("%s", ret);


    return 0;
}