#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//ð������
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
//��ŵ������
// һ��ֻ��Ųһ�����ӣ�Ҫ��ÿ�������ϵ����Ӷ�������С�����
//int i = 1;//��¼����
//void move(int n, char a, char c)//��ʾ�ƶ�·�� 
//{
//	
//	printf("��%d��:�ѵ�%d������%c--->%c\n", i++, n, a, c);
//}
//
//void Hanoi(int n, char a, char b, char c)//��ŵ���ݹ��㷨 
//{
//	if (n == 1) move(n, a, c);//���ֻ��һ��������ֱ�Ӵ�A���Ƶ�C�� 
//	else
//	{
//		Hanoi(n - 1, a, c, b);//��A��n-1�������Ƶ�B��
//		move(n, a, c);//�����һ�����Ӵ�A���Ƶ�C�� 
//		Hanoi(n - 1, b, a, c);//��B��n-1�������Ƶ�C�� 
//	}
//}
//
//int main()
//{
//	int num;
//	scanf("%d", &num);//�������ӵĸ��� 5 
//	Hanoi(num, 'A', 'B', 'C');
//	system("pause");
//	return 0;
//}

