//#include <stdio.h>
//int main()
//{
//	int arr[20] = { 1};
//	int arr2[20] = { 0 };
//	int i = 1;
//	int tmp = 0;
//	int index = 0;
//	int n = 0;
//	scanf_s("%d", &n);
//	for (i = 0; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 2 * n - 2 * i; j++)
//		{
//			printf(" ");
//		}
//		//ÿ�д�ӡ�꣬���arr2
//		tmp = 0;
//		for (j = 1; j <= i + 1; j++)
//		{
//			if (i >= 2)
//			{
//				if (j == 1)
//				{
//					//��ӡ��ǰ���1
//					printf("%2d   ", arr[index]);
//					arr2[tmp++] = arr[index];
//					//��ÿ�д�ӡ�����ݴ���arr2��
//				}
//				else if (j == i + 1)
//				{
//					//��ӡ������1
//					printf("%2d   ", arr[index]);
//					arr2[tmp++] = arr[index];
//				}
//				else
//				{
//				    //��ӡ�м����
//					printf("%2d   ",(arr[j - 2] + arr[j - 1]));
//					arr2[tmp++] = (arr[j -2 ] + arr[j - 1]);
//				}
//			}
//			else
//			{
//				//��ӡǰ����
//				printf("%2d   ", arr[index]);
//				arr2[tmp++] = arr[index];
//			}
//		}
//		//����arr2��arr��
//		for (j = 0; j < tmp; j++)
//		{
//			arr[j] = arr2[j];
//		}
//
//		printf("\n");
//	}
//	return 0;
//}