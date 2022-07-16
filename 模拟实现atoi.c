#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <math.h>
int my_atoi(const char* str)
{
	assert(str);
	char* tmp = str;
	char* begin = NULL;
	int count = 0;
	int flag = 1;
	while (*tmp != '\0')
	{
		if (*tmp >= '0' && *tmp <= '9')
		{
			if (flag == 1)
			{
				begin = tmp;
				flag = 0;
			}
			count++;

		}
		if (count != 0 && *tmp < '0' || count != 0 && *tmp >'9')
		{
			break;
		}
		tmp++;
	}
	int ret = 0;
	int i = count - 1;
	while (count--)
	{
		ret += ((*begin - '0') * pow(10, i));
		i--;
		begin++;
	}
	if (flag == 1)
	{
		return 0;
	}
	return ret;

}
int main()
{
	char str[] = "	2022 222 bbb";
	int ret = my_atoi(str);
	printf("%d", ret);

	return 0;
}