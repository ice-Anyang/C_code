#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int key = 8;
//	int	mid = 0;
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if ( arr[mid]>key)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid]<key)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			break;
//		}	
//	}
//	if (left <= right)
//	{
//		printf("�ҵ��ˣ��±�Ϊ:%d \n",mid);
//	}
//	else
//	{
//		printf("�Ҳ���\n");
//	}
//	system("pause");
//	return 0;
//}

//���ֲ��ҵĺ�����
//int fand_search(int arr[], int key, int left, int right)
//{
//	int mid = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] > key)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;//�ҵ��� �����±ꡣ
//		}
//		return -1;//�Ҳ���������-1��
//	}
//}
// ��������Ϸ
//1����һ��1��100�������
//2���в�����
#include <stdio.h >
#include <time.h>
#include <stdlib.h>
void menu()
{
	printf("####################################\n");
	printf("##########1.��ʼ��Ϸ################\n");
	printf("##########0.�˳���Ϸ################\n");
	printf("####################################\n");
}
void game()
{
	int input = 0;
	int ret = rand() % 100 + 1;
	
	while (1)
	{
		printf("��������µ�����:> \n");
		scanf("%d", &input);
		if (input  > ret)
		{
			printf("��´���\n");
			break;
		}
		else if (input< ret)
		{
			printf("���С��\n");
			break;
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));  
	do
	{	
	menu();
	printf("��������ţ� \n");
	scanf("%d", input);
	switch (input)
	{
	case 1:
			game();
			break;
	case 0:
			break;
	default:
		printf("�������.\n");
		break;
	}
	}while (input);

	system("pause");
	return 0;
}
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//�ж��Ƿ������ꡣ
//int year(int a)
//{
//	if (a % 4 == 0)
//	{
//		if (a % 100 != 0)
//		{
//			return 1;
//		}
//	}
//	if (a % 400 == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//		
//}
//int main()
//{
//	int input = 0;
//	printf("������һ����ݣ� ");
//	scanf("%d", &input);
//	year(input);
//	if (year(input))
//	{
//		printf("�����꣡\n");
//	}
//	else
//	{
//		printf("�������꣡\n");
//	}
//	system("pause");
//	return 0;
//}