#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//1.一个数组中只有两个数字是出现一次，
//其他所有数字都出现了两次。
//找出这两个数字，编程实现。
//
//
void my_find(int arr[], int sz)
{
	int sum = 0;
	int j = 0;
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		sum = 0;
		for (j = 0; j < sz; j++)
		{
			if (arr[i] == arr[j] && i != j)
			{
				sum=1;
			}
		}
		if (0 == sum)
		{
			printf("%d  ", arr[i]);
		}
	}
	printf("\n");
}
int main()
{
	int arr[10] = { 1, 2, 3, 6, 4, 5, 5, 4, 3, 2 };
	int sz = sizeof(arr) / sizeof( arr[0]);
	my_find(arr, sz);
	system("pause");
	return 0;
}
////2.喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，
////给20元，可以多少汽水。
////编程实现

//int main()
//{
//	int ret = 0;
//	int money = 0;
//	printf("请输入钱数");
//	scanf("%d", &money);
//	int empty_bottle = money;
//	int bottle = money;
//	while (empty_bottle)
//	{
//		empty_bottle = empty_bottle / 2;
//		bottle = bottle + empty_bottle;
//	}
//	printf("%d", bottle);
//	system("pause");
//	return 0;
//}

//
////3.模拟实现strcpy
//
//#include <assert.h>
//void my_strcpy(char* dest, const char* stc)
//{
//	//被拷贝的字符不能为空，拷贝的空间也不能为空。
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(stc != NULL);
//	while (*dest != '\0')
//	{
//		*dest = *stc;
//		dest++;
//		stc++;
//	}
//}
//
//int main()
//{
//	char arr[] = "asdasf";
//	char arr1[] = "jxbqjbqq";
//	my_strcpy(arr,arr1);
//	printf("%s", arr);
//	system("pause");
//	return 0;
//}
////4.模拟实现strcat//在一个字符串的末尾增加新的字符,连接字符串
//
//#include <assert.h>
//int my_strcat(char* dest,char* stc)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(stc != NULL);
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	while (stc != '\0')
//	{
//		*dest = *stc;
//		stc++;/*
//	}
//	*dest = '\0';
//}
//
//int main()
//{
//	char arr1[5] = "asdfg";
//	char arr2[5] = "asdfh";
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}