#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
//�Լ�ʵ�����ַ����ĳ���
//1.����һ����ʱ����
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str = str + 1;
//	}
//	return count;
//}

//2.Ҫ�󲻴�����ʱ����

//int my_strlen(char* str)
//{
//	while (*(str) != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	return 0;
//}

//3.ָ��-ָ��ķ�ʽ���ַ�������

int my_strlen(char* str)
{
	char* pa = str;
	while (*pa != '\0')
	{
		pa++;
	}
	return pa-str;
}

int main()
{
	int ret = 0;
	char arr[] = "asdfghjkl";
	ret = my_strlen(arr);
	printf("ret=%d\n", ret);
	system("pause");
	return 0;
}

