#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
//1.实现strcpy
//char* my_strcpy(char* dest, const char* scr)
//{
//	assert(dest != NULL);
//	assert(scr != NULL);
//	char* ret = dest;
//	while (*dest++ = *scr++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[100] = { 0 };
//	char arr2[10] = "sdfghjklq";
//	char* ret = my_strcpy(arr1, arr2);
//	printf("%s\n", ret);
//	system("pause");
//	return 0;
//}
//2.实现strcat
//char* my_strcat(char* dest, const char* scr)
//{
//	assert(dest != NULL);
//	assert(scr != NULL);
//	char * ret = dest;
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	while (*dest++ = *scr++)
//	{
//		;
//	}
//	return ret;
//
//}
//int main()
//{
//	char arr1[100] = "asdf";
//	char arr2[5] = "zxcv";
//	char* ret = my_strcat(arr1, arr2);
//	printf("%s\n", ret);
//	system("pause");
//	return 0;
//}
//3.实现strstr
//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//	const char* s1 = str1;
//	const char* s2 = str2;
//	const char* strat = str1;
//	if (*str2 == '\0')
//	{
//		return (char*)str1;
//	}
//	while (*strat)
//	{
//		s1 = strat;
//		s2 = str2;
//		while (*s1 && *s2 && *s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//			return (char*)strat;
//		strat++;
//	}
//	return NULL;
//}
//int main()
//{
//	char arr1[] = "asdddfghjk";
//	char arr2[] = "ddf";
//	char* ret = my_strstr(arr1, arr2);
//	if (ret == NULL)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	system("pause");
//	return 0;
//
//}
//4.实现strchr
//char* my_strchr(const char* str, char n)
//{
//	assert(str != NULL);
//	const char* s1 = str;
//	while (*s1 && *s1 != n)
//	{
//		s1++;
//	}
//	if (*s1 == n)
//	{
//		return (char*)s1;
//	}
//	return NULL;
//}
//int main()
//{
//	char arr1[] = "asdfghj";
//	//char* ret = strchr(arr1, 'd');
//	char* ret = my_strchr(arr1, 'd');
//	if (ret == NULL)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	system("pause");
//	return 0;
//}
//5.实现strcmp
// int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//
//	while(*str1 == *str2)
//	{
//		if(*str1 == '\0')
//			return 0;
//		str1++;
//		str2++;
//	}
//
//	return *str1-*str2;
//}
//
//int main()
//{
//	char* str1 = "abc";
//	char *str2 = "abcdef";
//
//	int ret = my_strcmp(str1, str2);
//	printf("%d\n", ret);
//	if (ret > 0)
//	{
//		printf("arr1>arr2\n");
//	}
//	if (ret = 0)
//	{
//		printf("arr1=arr2\n");
//	}
//	if (ret < 0)
//	{
//		printf("arr1<arr2\n");
//	}
//	system("pause");
//	return 0;
//}
//6.实现memcpy

//void* my_memcpy(void* dest, const void* scr, size_t count)
//{
//	assert(dest != NULL);
//	assert(scr != NULL);
//	void* ret = dest;
//
//	while (count--)
//	{
//		*(char*)dest = *(char*)scr;
//		((char*)dest)++;
//		((char*)scr)++;
//	}
//	return ret;
//}

//7.实现memmove

void* my_memmove(void* dest, const void* src, size_t count)
{
	assert(dest != NULL);
	assert(src != NULL);
	void* ret = dest;
	if (dest < src)
	{
		while (count--)
		{
			*(char*)dest = *(char*)src;
			((char*)dest)++;
			((char*)src)++;
		}
		return ret;
	}
	if (dest>src)
	{
		while (count--)
		{
			*((char*)dest + count) = *((char*)src + count);
		}
	}		
}