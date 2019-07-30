#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//1、函数指针：指向一个函数的地址。
//函数名 和 &函数名 都是函数的地址。
//int(*ps)(int ,int )
//void tese()
//{
//	printf("hehe\n");
//}
//int main()
//{
//	test();
//	void(*ps)() = &test;
//	system("pause");
//	return 0;
//}

//2、函数指针数组:他是一个指向函数的指针的数组，也就是说是函数指针的集合

//指针数组：int* arr[5]={0};
// 函数指针数组：
// int (*parr[5])(int):存放函数指针


//函数指针的应用
//计算器实现加减乘除。
//第一种传统算法；
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x*y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//void muen()
//{
//	printf("             1.Add         2.Sub            \n");
//	printf("             3.Mul         4.Div            \n");
//	printf("             0.exit                         \n");
//
//}
//
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	muen();
//	do
//	{
//	printf("请选择：");
//	scanf("%d", &input);
//	switch (input)
//	{
//	default:
//	case 1:
//		printf("输入两个操作数：");
//		scanf("%d %d", &x, &y);
//		ret = Add(x, y);
//		break;
//	case 2:
//		printf("输入两个操作数：");
//		scanf("%d %d", &x, &y);
//		ret = Sub(x, y);
//		break;
//	case 3:
//		printf("输入两个操作数：");
//		scanf("%d %d", &x, &y);
//		ret = Mul(x, y);
//		break;
//	case 4:
//		printf("输入两个操作数：");
//		scanf("%d %d", &x, &y);
//		ret = Div(x, y);
//		break;
//	case 0:
//		printf("退出程序\n");
//		break;
//	}
//	printf("ret = %d\n", ret);
//	} while (input);
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x*y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//void Cale(int(*p)(int , int ))
//{
//	int x = 0;
//	int y = 0;
//	int z = 0;
//	printf("请输入两个操作数：");
//	scanf("%d %d", &x, &y);
//	z = p(x, y);
//	printf("z=%d\n", z);
//}
//
//void muen()
//{
//	printf("             1.Add         2.Sub            \n");
//	printf("             3.Mul         4.Div            \n");
//	printf("             0.exit                         \n");
//
//}
//
//int main()
//{
//	int input = 0;
//	muen();
//	do
//	{
//		printf("请选择：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		default:
//		case 1:
//			Cale(Add);
//			break;
//		case 2:
//			Cale(Sub);
//			break;
//		case 3:
//			Cale(Mul);
//			break;
//		case 4:
//			Cale(Div);
//			break;
//		case 0:
//			printf("退出程序\n");
//			break;
//		}
//	} while (input);
//}

//  回调函数： 解决计算机内多次重复类似代码。

////冒泡排序 (简单的冒泡排序） 
//void my_print(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz ; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void my_bottle(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz-1 ; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j]> arr[j + 1])
//			{
//				int tem = arr[j];
//			    arr[j] = arr[j + 1];
//				arr[j + 1] = tem;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	my_bottle(arr, sz);
//	my_print(arr, sz);
//	system("pause");
//	return 0;
//}


//void BubbleSort(void* base,
//			int sz,
//			int width,
//			int(*cmp)(const void*e1, const void*e2))


//注意：void* 类型的指针不能直接解应用或者加减一。
void my_print(int* arr, int sz)
{
	int i = 0;
	for (i = 0; i < sz ; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void Swap(char* buf1, char* buf2, int width)
{
 int i = 0;
 for(i=0; i<width; i++)
 {
	 char tmp = *buf1;
	 *buf1 = *buf2;
	 *buf2 = tmp;
	 buf1++;
	 buf2++;
 }
}
BubbleSort(void* based, int sz, int width, int(*cmp)(const void* el, const void* e2))
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*)based + j*width, (char*)based + (j+1)*width)<0)
			{
				Swap((char*)based + j*width, (char*)based + (j + 1)*width, width);

			}
		}
	}
}
//int cmp_le(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
struct Stu
{
	char name[20];
	int age;
};
int my_cmp_le1(const void* e1, const void* e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e1)->name);
}
//void test1()
//{
//	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	BubbleSort(arr, sz, sizeof(arr[0]), cmp_le);
//	my_print(arr, sz);
//}
void test2()
{
	struct Stu arr[] = { { "zhangsan", 21 }, { "zhaosi", 15 }, { "wanglaowu", 18 } };
	int sz = sizeof(arr) / sizeof(arr[0]);
	BubbleSort(arr, sz, sizeof(arr[0]),my_cmp_le1);
	my_print(arr, sz);
}
int main()
{
	/*test1();*/
	test2();
	system("pause");
	return 0;
}


