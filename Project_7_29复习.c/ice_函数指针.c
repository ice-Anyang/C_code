#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//1������ָ�룺ָ��һ�������ĵ�ַ��
//������ �� &������ ���Ǻ����ĵ�ַ��
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

//2������ָ������:����һ��ָ������ָ������飬Ҳ����˵�Ǻ���ָ��ļ���

//ָ�����飺int* arr[5]={0};
// ����ָ�����飺
// int (*parr[5])(int):��ź���ָ��


//����ָ���Ӧ��
//������ʵ�ּӼ��˳���
//��һ�ִ�ͳ�㷨��
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
//	printf("��ѡ��");
//	scanf("%d", &input);
//	switch (input)
//	{
//	default:
//	case 1:
//		printf("����������������");
//		scanf("%d %d", &x, &y);
//		ret = Add(x, y);
//		break;
//	case 2:
//		printf("����������������");
//		scanf("%d %d", &x, &y);
//		ret = Sub(x, y);
//		break;
//	case 3:
//		printf("����������������");
//		scanf("%d %d", &x, &y);
//		ret = Mul(x, y);
//		break;
//	case 4:
//		printf("����������������");
//		scanf("%d %d", &x, &y);
//		ret = Div(x, y);
//		break;
//	case 0:
//		printf("�˳�����\n");
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
//	printf("������������������");
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
//		printf("��ѡ��");
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
//			printf("�˳�����\n");
//			break;
//		}
//	} while (input);
//}

//  �ص������� ���������ڶ���ظ����ƴ��롣

////ð������ (�򵥵�ð������ 
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


//ע�⣺void* ���͵�ָ�벻��ֱ�ӽ�Ӧ�û��߼Ӽ�һ��
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


