#include <stdio.h>
#include <stdlib.h>
typedef struct Interval {
    int start;
    int end;

}val;
void swep(int* l, int* r)
{
    int tmp = *l;
    *l = *r;
    *r = tmp;
}
struct Interval* merge(struct Interval* intervals, int intervalsLen) {
    // write code here
    if (intervalsLen == 1)
    {
        return intervals;
    }
    int left = 0;
    int right = 1;
    while (right < intervalsLen)
    {
        if ((intervals + left)->end >= (intervals + right)->start)
        {
            if ((intervals + left)->end < (intervals + right)->end)
            {

                swep(&((intervals + left)->end), &((intervals + right)->end));
                int prev = right;
                int cur = right + 1;
                while (cur < intervalsLen)
                {
                    swep(&((intervals + prev)->start), &((intervals + cur)->start));
                    swep(&((intervals + prev)->end), &((intervals + cur)->end));
                    prev++;
                    cur++;
                }
                intervalsLen--;
            }
        }
        else
        {
            left++;
            right++;
        }
    }
    return intervals;
}
int main()
{
    val arr[] = { {0,10} };
    int sz = sizeof(arr) / sizeof(arr[0]);
    printf("%d \n", sz);

    merge(arr, sz);
    printf("%d %d", arr->start, arr->end);
    return 0;
}
