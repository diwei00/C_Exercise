//#define _CRT_SECURE_NO_WARNINGS

#include <string.h>
#include <stdio.h>
int numJewelsInStones(char* jewels, char* stones)
{
    gets_s(jewels);
    gets_s(stones);
    int len1 = strlen(jewels);
    int len2 = strlen(stones);
    int count = 0;
    int i = 0;
    for (i = 0; i < len2; i++)
    {
        int j = 0;
        for (j = 0; j < len1; j++)
        {
            if (stones[i] == jewels[j])
            {
                count++;
            }
        }
    }
    return count;

}

int main()
{
    char jewels[3] = {0};
    char stones[8] = {0};
    int ret = numJewelsInStones(jewels, stones);
    printf("%d", ret);
    return 0;
}