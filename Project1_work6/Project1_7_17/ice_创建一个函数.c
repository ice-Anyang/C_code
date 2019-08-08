#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void  Init(int arr[10])//初始化数组
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		arr[i] = i;
	}
}
void  empty(int arr[10],int sz)//清空数组
{
	memset(arr, 0, sz*sizeof(arr[10]));

}
void reverse(int arr[10], int sz)//数组倒置
{
	int i = 0;
	for (i = 0; i < sz - 1 / 2; i++)
	{
		int a = arr[i];
		arr[i] = arr[sz - 1 - i];
		arr[sz - 1 - i] = arr[i];
	}

}
int main()
{
	int i = 0;
	int arr[10] ={0};
	int sz = sizeof(arr) / sizeof(arr[0]);
	Init(arr);
	empty(arr,sz);
	reverse(arr, sz);
	for (i = 0; i < 10; i++)
	{
		printf("%d",arr[i]);
	}
	system("pause");
	return 0;
}