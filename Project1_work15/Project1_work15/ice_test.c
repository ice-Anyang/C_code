#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//1.һ��������ֻ�����������ǳ���һ�Σ�
//�����������ֶ����������Ρ�
//�ҳ����������֣����ʵ�֡�
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
////2.����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ��
////��20Ԫ�����Զ�����ˮ��
////���ʵ��

//int main()
//{
//	int ret = 0;
//	int money = 0;
//	printf("������Ǯ��");
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
////3.ģ��ʵ��strcpy
//
//#include <assert.h>
//void my_strcpy(char* dest, const char* stc)
//{
//	//���������ַ�����Ϊ�գ������Ŀռ�Ҳ����Ϊ�ա�
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
////4.ģ��ʵ��strcat//��һ���ַ�����ĩβ�����µ��ַ�,�����ַ���
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