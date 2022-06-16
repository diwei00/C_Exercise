#include <math.h>
#include <stdio.h>
bool isHappy(int n) {
    static int count = 0;
    if (n == 1)
    {
        return true;
    }
    if (count == 200)
    {
        return false;
    }
    int sum = 0;
    while (n)
    {
        sum += pow(n % 10, 2);
        n = n / 10;
    }
   
    count++;
    isHappy(sum);

}
int main()
{

    if (isHappy(20))
    {
        printf("lll");
    }
    return 0;
}