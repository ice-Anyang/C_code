#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
//1.�ַ�ָ��
//ָ��һ���ַ��ĵ�ַ
//int main()
//{
//	//�ַ�ָ��
//	char a = 'w';
//	char* pa = &a;
//	*pa = 'k';
//	printf("%c\n", a);
//	system("pause");
//	return 0;
//}

//2.ָ�����飻�������Ǹ����飬������Ǵ��ָ��ģ���������ָ�����顣

//int main()
//{
//	char arr1[] = "asdfg";//���������������Ԫ�ص�ַ
//	char arr2[] = "asdfg";
//	char* arr3 = "asdfg";
//	char* arr4 = "asdfg";
//	if (arr1==arr2)
//	{
//		printf("1\n");
//	}
//	if (arr3 = arr4);
//	{
//		printf("2\n");
//	}
//	system("pause");
//	return 0;
//
//}

//2ָ������

//int main()
//{
//	int* arr1[10] = { 0 };
//	char *arr2[10] = { 0 };
//	char** arr3[10] = { 0 };
//	return 0;
//}


//3.����ָ��

//int main()
//{
//	int arr[5] = { 0 };
//	int(*p)[5] = &arr;
//	
//	system("pause");
//	return 0;
//}

////������ �� &������ ����
// int main() 
// {    
//	int arr[10] = { 0 }; 
//	printf("arr = %p\n", arr);
//	printf("&arr= %p\n", &arr);
//	printf("arr+1 = %p\n", arr + 1);
//	printf("&arr+1= %p\n", &arr + 1);
//	system("pause");
//	return 0;
// }

//����ָ��
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int(*ps)[10] = &arr;
//	
//	return 0;
//}
//һ���������д��


//һ�������ã�

//void print_arr1(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//void print_arr2(int (*p)[5], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", p[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	print_arr1(arr, 3, 5);
//	print_arr2(arr, 3, 5);
//	//������arr����ʾ��Ԫ�صĵ�ַ
//	//���Ƕ�ά�������Ԫ���Ƕ�ά����ĵ�һ�� 
//	//�������ﴫ�ݵ�arr����ʵ�൱�ڵ�һ�еĵ�ַ����һά����ĵ�ַ
//	//�����������ָ������
//	system("pause");
//	return 0;
//}

//���鴫�η�Ϊ 1�������� 2������ַ 3����ָ��
//1�����������������
//2����ָ����ߵ�ַ���õ���ָ�����

//int print(int *arr, int sz)
//{
//
//}
//
//void print1(int arr[], int sz)
//{
//
//}
//
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(p, sz);
//	print1(arr, sz);
//	return 0;
//}

//����ָ����Խ��գ�1��һ��ָ�� 2��һ��ָ���ַ 3��ָ������
