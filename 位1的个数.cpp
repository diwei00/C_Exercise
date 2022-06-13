#include <stdio.h>
#define uint32_t unsigned int
int hammingWeight(uint32_t n)
{
    int count = 0;
    int k = 0;
    while (k < 32)
    {
        if ((n >> k) & 1 == 1)
        {
            count++;
        }
        k++;
    }
    return count;

}
int main()
{
    unsigned int n = 0;
    scanf_s("%d", &n);
    hammingWeight(n);
    return 0;
}