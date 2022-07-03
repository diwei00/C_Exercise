#include <stdio.h>
void inverTower()
{
	int i = 0;
	for (i = 0; i <= 9; i++)
	{
		int j = 0;
		for (j = 0; j < 2 * i; j++)
		{
			printf(" ");
		}
		for (j = 1; j <= 9 - i; j++)
		{
			printf("%d ", j);
		}
		for (j = 8 - i; j > 0; j--)
		{
			printf("%d ", j);
		}
		printf("\n");
	}
}

int main()
{

	inverTower();
	return 0;
}