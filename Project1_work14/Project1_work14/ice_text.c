#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

//1.ʵ��һ�����������������ַ����е�k���ַ���
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB
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
//	printf("��ת��λ��");
//	scanf("%d", &n);
//	if (n<1 || n > len)
//	{
//		printf("�������\n");
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
//2.�ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//���磺����s1 = AABCD��s2 = BCDAA������1������s1 = abcd��s2 = ACBD������0.
//
//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//
//AABCD����һ���ַ��õ�DAABC

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