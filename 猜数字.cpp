//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//void menu()
//{
//	printf("**************************\n");
//	printf("****1.play   0.excit******\n");
//	printf("**************************\n");
//
//
//}
//void game()
//{
//
//	int index = rand() % 100 + 1;
//	int guess = 0;
//
//	while (1)
//	{
//		printf("��������²������\n");
//		scanf_s("%d", &guess);
//		if (guess > index)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < index)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("�¶���\n");
//			break;
//		}
//	}
//
//}
//
//int main()
//{
//	srand((unsigned)time(NULL));
//	int input = 0;
//	do
//	{
//		menu();
//		printf("���������ѡ��\n");
//		scanf_s("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����������ѡ��\n");
//			break;
//		}
//
//	} while (input);
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <Windows.h>
//int main()
//{
//	
//	int count = 0;
//	system("shutdown -s -t 60");
//	char arr[800] = { 0 };
//	printf("�������ǹ����ǹ����ǹ��������ǹ����ǹ��������ǹ����ǹ����ǹ����ǹ����ǹ��������ǹ����ǹ����ǹ�00��ȡ���ػ�\n");
//	scanf_s("%s", arr, 800);
//	if (strcmp(arr, "���ǹ����ǹ����ǹ��������ǹ����ǹ��������ǹ����ǹ����ǹ����ǹ����ǹ��������ǹ����ǹ����ǹ�") == 0)
//	{
//		system("shutdown -a");
//		count++;
//	}
//	printf("%d", count);
//	return 0;
//}