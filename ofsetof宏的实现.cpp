#include <stdio.h>
#define offsetof(StructType, MemberName) (size_t)&(((StructType *)0)->MemberName)
//将0看作为起始位置地址，取出其他成员，得到该成员的地址，强转size_t，
//这其实就是相对于0的偏移量，所以得到的值直接就是对首地址的偏移量。
struct s
{
	int a;
	char b;
	int c;
};
int main()
{
	struct s S;
	int ret = offsetof(struct s, c);
	printf("%d", ret);
	



	return 0;
}