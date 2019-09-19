#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

#define ROW 3
#define COL 3
//1.调整数组使奇数全部都位于偶数前面。
//
//题目：
//
//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。

//void revise(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] % 2 != 0)
//		{
//			printf("%d", arr[i]);
//		}
//	}
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] % 2 == 0)
//		{
//			printf("%d", arr[i]);
//		}
//	}
//	printf("\n");
//}

//void revise(int* arr, int sz)
//{
//	int i = 0;
//	int j = sz - 1;
//	for (i = 0; i != j; i++)
//	{
//		if (arr[i] % 2 != 0)
//		{
//			continue;
//		}
//		else
//		{
//			int tep = arr[i];
//			arr[i] = arr[j];
//			arr[j] = tep;
//			if (arr[j] % 2 == 0)
//			{
//				j--;
//			}
//			i--;
//		}
//
//	}
//}
//
//int main()
//{
//	int i = 0;
//	int arr[] = { 1, 2, 3, 6, 4, 8, 9, 4, 2, 1, 5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	revise(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	system("pause");
//	return 0;
//}
//
//2.
////杨氏矩阵 
//有一个二维数组.
//数组的每行从左到右是递增的，每列从上到下是递增的.
//在这样的数组中查找一个数字是否存在。
//时间复杂度小于O(N);
//
//数组：
//1 2 3
//2 3 4
//3 4 5
//
//
//1 3 4
//2 4 5
//4 5 6
//
//1 2 3
//4 5 6
//7 8 9
//

int my_find(char arr[ROW][COL], int row, int col,int key)
{
	int a = 0;
	int b = col - 1;
	while (a >= 0 && b < col)
	{
		if (arr[a][b] >key)
		{
			b--;
		}
		else if (arr[a][b] < key)
		{
			a++;
		}
		else if (arr[a][b] == key)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
}

int main()
{
	int arr[ROW][COL] = {1,2,3,4,5,6,7,8,9};
	int key = 6;
	int ret = my_find(arr, ROW, COL, key);
	if (ret == 1)
		printf("找到了！\n");
	else
		printf("找不到！\n");
	system("pause");
	return 0;
}