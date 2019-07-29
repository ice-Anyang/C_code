#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
//1.字符指针
//指向一个字符的地址
//int main()
//{
//	//字符指针
//	char a = 'w';
//	char* pa = &a;
//	*pa = 'k';
//	printf("%c\n", a);
//	system("pause");
//	return 0;
//}

//2.指针数组；首先它是个数组，其次他是存放指针的，所以他叫指针数组。

//int main()
//{
//	char arr1[] = "asdfg";//数组名是数组的首元素地址
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

//2指针数组

//int main()
//{
//	int* arr1[10] = { 0 };
//	char *arr2[10] = { 0 };
//	char** arr3[10] = { 0 };
//	return 0;
//}


//3.数组指针

//int main()
//{
//	int arr[5] = { 0 };
//	int(*p)[5] = &arr;
//	
//	system("pause");
//	return 0;
//}

////数组名 和 &数组名 区别。
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

//数组指针
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int(*ps)[10] = &arr;
//	
//	return 0;
//}
//一般很少这样写。


//一般这样用：

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
//	//数组名arr，表示首元素的地址
//	//但是二维数组的首元素是二维数组的第一行 
//	//所以这里传递的arr，其实相当于第一行的地址，是一维数组的地址
//	//可以数组或者指针来接
//	system("pause");
//	return 0;
//}

//数组传参分为 1、传数组 2、传地址 3、传指针
//1、传数组用数组接收
//2、传指针或者地址都用的是指针接收

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

//二级指针可以接收：1、一级指针 2、一级指针地址 3、指针数组
