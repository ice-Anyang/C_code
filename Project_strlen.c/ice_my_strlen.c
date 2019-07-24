#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
//自己实现求字符串的长度
//1.定义一个临时变量
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

//2.要求不存在临时变量

//int my_strlen(char* str)
//{
//	while (*(str) != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	return 0;
//}

//3.指针-指针的方式求字符串长度

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

