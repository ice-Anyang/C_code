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
//		printf("找到了，下表为:%d \n",mid);
//	}
//	else
//	{
//		printf("找不到\n");
//	}
//	system("pause");
//	return 0;
//}

//二分查找的函数块
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
//			return mid;//找到， 返回下标。
//		}
//		return -1;//找不到，返回-1。
//	}
//}
// 猜数字游戏
//1创建一个1到100的随机数
//2进行猜数字
#include <stdio.h >
#include <time.h>
#include <stdlib.h>
void menu()
{
	printf("####################################\n");
	printf("##########1.开始游戏################\n");
	printf("##########0.退出游戏################\n");
	printf("####################################\n");
}
void game()
{
	int input = 0;
	int ret = rand() % 100 + 1;
	
	while (1)
	{
		printf("请输入你猜的数字:> \n");
		scanf("%d", &input);
		if (input  > ret)
		{
			printf("你猜大了\n");
			break;
		}
		else if (input< ret)
		{
			printf("你猜小了\n");
			break;
		}
		else
		{
			printf("恭喜你，猜对了\n");
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
	printf("请输入序号： \n");
	scanf("%d", input);
	switch (input)
	{
	case 1:
			game();
			break;
	case 0:
			break;
	default:
		printf("输入错误.\n");
		break;
	}
	}while (input);

	system("pause");
	return 0;
}
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//判断是否是润年。
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
//	printf("请输入一个年份： ");
//	scanf("%d", &input);
//	year(input);
//	if (year(input))
//	{
//		printf("是润年！\n");
//	}
//	else
//	{
//		printf("不是闰年！\n");
//	}
//	system("pause");
//	return 0;
//}