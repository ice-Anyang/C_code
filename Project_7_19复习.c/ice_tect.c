#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//冒泡排序
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i <= sz -1 ; i++)
//	{
//		int j = 0;
//		int num = 1;
//		for (j = 0; j < sz - i-1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tem = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tem;
//				num = 0;
//			}	
//		}
//		if (num == 1)
//			break;
//		{
//
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,6,9,8,6,3,2,1,4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	system("pause");
//	return 0;
//}
//
//汉诺塔问题
// 一次只能挪一个盘子，要求每根柱子上的盘子都是上面小下面大
//int i = 1;//记录步数
//void move(int n, char a, char c)//显示移动路径 
//{
//	
//	printf("第%d步:把第%d个盘子%c--->%c\n", i++, n, a, c);
//}
//
//void Hanoi(int n, char a, char b, char c)//汉诺塔递归算法 
//{
//	if (n == 1) move(n, a, c);//如果只有一个盘子则直接从A柱移到C柱 
//	else
//	{
//		Hanoi(n - 1, a, c, b);//把A柱n-1个盘子移到B柱
//		move(n, a, c);//把最后一个盘子从A柱移到C柱 
//		Hanoi(n - 1, b, a, c);//把B柱n-1个盘子移到C柱 
//	}
//}
//
//int main()
//{
//	int num;
//	scanf("%d", &num);//输入盘子的个数 5 
//	Hanoi(num, 'A', 'B', 'C');
//	system("pause");
//	return 0;
//}

