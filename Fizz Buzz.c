#include <stdio.h>
#include <stdlib.h>
char** fizzBuzz(int n, int* returnSize) {
    char** answer = (char**)malloc(sizeof(char) * 100000);
    int index = 0;
    int i = 0;
    for (i = 1; i <= n; i++)
    {
        char* arr = (char*)malloc(sizeof(char) * 8);
        memset(arr, 0, sizeof(char) * 8);
        if (i % 3 == 0 && i % 5 == 0)
        {
            answer[index++] = "FizzBuzz";
        }
        else if (i % 3 == 0)
        {
            answer[index++] = "Fizz";
        }
        else if (i % 5 == 0)
        {
            answer[index++] = "Buzz";
        }
        else
        {
            //先计算数字个数
            int i3 = i;
            int count = 0;
            while (i3)
            {
                i3 /= 10;
                count++;
            }
            //把数字末位以数组末尾依次向前存，即按顺序存
            int j = count - 1;
            int i2 = i;
            while (i2)
            {
                arr[j--] = i2 % 10 + 48;
                i2 /= 10;
            }
            answer[index++] = arr;

        }

    }
    *returnSize = index;
    return answer;

}
int main()
{
    int sz = 0;
    char** ret = fizzBuzz(3, &sz);


    return 0;
}