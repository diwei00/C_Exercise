#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	int arr[] = { 5,3,3,4,2,2,2,2,2,3,5,6 ,9,0};
	int sz = sizeof(arr) / sizeof(arr[0]);
	//����һ��ͬ���������
	int* pa = (int*)malloc(sizeof(int) * sz);
	memset(pa, 0, sizeof(int) * sz);
	static int count = 0;
	if (pa != NULL)
	{
		int i = 0;
		int j = 0;
		for (i = 0; i < sz; i++)
		{
			
			if (j == 0)
			{
				pa[j] = arr[i];//ֱ�ӿ�����һ������
				j++;
			}
			else
			{
				int k = 0;
				
				for (k = 0; k <= j; k++)//������˵�����ظ�����
				{
					if (arr[i] != pa[k])
					{
						;
					}
					else
					{
						count++;
						break;//������˵�����ظ�����
					}
				}
				if (k > j)
				{
					pa[j] = arr[i];//����
					j++;
				}	
			}
		}


		for (int i = 0; i < sz - count; i++)
		{
			printf("%d ", pa[i]);
		}

	}
	free(pa);
	return 0;
}