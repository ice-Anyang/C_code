#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

//1.实现一个函数，可以左旋字符串中的k个字符。
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB
//
//# include <string.h>
//
//left_remove(char* arr, int n,int len)
//{
//	int i = 0;
//	
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		char tem = arr[0];
//		for (j = 0; j < len; j++)
//		{
//			arr[j] = arr[j + 1];
//		}
//		arr[len - 1] = tem;
//	}
//}
//
//int main()
//{
//	char arr[] = "asdfghjkl";
//	int n = 0;
//	int len = strlen(arr);
//	printf("旋转几位：");
//	scanf("%d", &n);
//	if (n<1 || n > len)
//	{
//		printf("输入错误\n");
//	}	
//	else if (n == len)
//	{
//		printf("%s\n", arr);
//	}
//	else
//	{
//		left_remove(arr, n, len);
//		printf("%s", arr);
//	}
//	system("pause");
//	return 0;
//}
//2.判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1，给定s1 = abcd和s2 = ACBD，返回0.
//
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//
//AABCD右旋一个字符得到DAABC

#include <string.h>

void reverse(char* pb, char* pe )
{
	int tmp = 0;
	while (pb< pe)
	{
		tmp = *pb;
		*pb = *pe;
		*pe = tmp;
		pb++;
		pe--;
	}

}
int cmp_reverse(char arr1[], char arr2[], int len, char * pb)
{
	int i = 0;
	if (strcmp(arr1, arr2) == 0)
	{
		return 1;
	}
	for (int i = 1; i < len; i++)
	{
		reverse(pb, pb + len - 1);
		reverse(pb + i, pb + len - 1);
		if (strcmp(arr1, arr2) == 0)
		{
			return 1;
		}
		else
		{
			reverse(pb + i, pb + len - 1);
			reverse(pb, pb + len - 1);
		}
	}
	for ( i = 1; i < len; i++)
	{
		reverse(pb, pb + len - 1);
		reverse(pb, pb + len - 1 - i);
		reverse(pb + len - i, pb + len - 1);
		if (strcmp(arr1, arr2) == 0)
		{
			return 1;
		}
		else
		{
			reverse(pb + len - i, pb + len - 1);
			reverse(pb, pb + len - 1 - i);
			reverse(pb, pb + len - 1);
		}
	}
	return 0;
}

int main()
{
	char arr1[] = "abcdf";
	char arr2[] = "bcdfa";
	int len = strlen(arr1);
	char* pb = arr1;
	int ret = cmp_reverse(arr1, arr2, len, pb);
	if ( ret == 1)
		printf("yes\n");
	else
		printf("no\n");
	//printf("%s", arr);
	system("pause");
	return 0;
}