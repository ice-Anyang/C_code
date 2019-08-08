#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h >
#include <stdlib.h>
//#include <time.h>
//void menu()
//{
//	printf("####################################\n");
//	printf("##########1.开始游戏################\n");
//	printf("##########0.退出游戏################\n");
//	printf("####################################\n");
//}
//void game()
//{
//	int input = 0;
//	int ret = rand() % 100 + 1;
//
//	while (1)
//	{
//		printf("请输入你猜的数字:> \n");
//		scanf("%d", &input);
//		if (input  > ret)
//		{
//			printf("你猜大了\n");
//		}
//		else if (input< ret)
//		{
//			printf("你猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//}	
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请输入序号： \n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			break;
//		default:
//			printf("输入错误.\n");
//			break;
//		}
//	} while (input);
//
//	system("pause");
//	return 0;
//}
//#include <math.h>
//int su_duan(int input)
//{	
//	int i = 0;
//	for (i = 2; i <= sqrt(i); i++)
//	{
//		if (input % i == 0)
//		{
//			return 0;
//		}
//		else
//		{
//			return 1;
//		}
//	}
//
//}
//int main()
//{
//	int input = 0;
//	printf("请输入一个数：");
//	scanf("%d", &input);
//	su_duan(input);
//	if (su_duan(input))
//	{
//		printf("它是素数\n");
//	}
//	else
//	{
//		printf("它不是素数0\n");
//	}
//	system("pause");
//	return 0;
//}