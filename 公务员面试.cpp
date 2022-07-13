#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[8] = { 0 };
    while ((scanf_s("%d %d %d %d %d %d %d",
        arr, arr + 1, arr + 2, arr + 3, arr + 4, arr + 5, arr + 6) != EOF))
    {
        int max = arr[0];
        int min = arr[0];
        int i = 0;
        for (i = 1; i < 7; i++)
        {
            if (arr[i] > max)
            {
                max = arr[i];
            }
            if (arr[i] < min)
            {
                min = arr[i];
            }
        }
        int sum = 0;
        for (i = 0; i < 7; i++)
        {
            if (arr[i] != max && arr[i] != min)
            {
                sum += arr[i];
            }
        }
        printf("%.2f\n", sum / 5.0);
    }
    return 0;
}