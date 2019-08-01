#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h> 

//1.strlen函数实现

//第一种
//int my_strlen(const char* str)
//{
//	assert(str != NULL);
//	int count = 0;
//	while (*str++ != '\0')
//	{
//		count++;
//	}
//	return count;
//}
//第二种:递归
//int my_strlen(const char* str)
//{
//	assert(str != NULL);
//	while (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//
//	}
//	return 0;
//}
//第三种：指针-指针
//int my_strlen(const char* str)
//{
//	assert(str != NULL);
//	char* ret = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - ret;
//}
//int main()
//{
//	char arr1[] = "gdasjkhcdjksdv";
//	/*int ret = strlen(arr1);*/
//	int ret = my_strlen(arr1);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}

//2.strcpy函数实现

//char* my_strcpy(char* dest, const char* str)
//{
//	assert(dest != NULL);
//	assert(str != NULL);
//	char* ret = dest;
//	while (*dest++ = *str++)
//	{
//		;
//	}
//	*dest = *str;
//	return ret;
//}
//int main()
//{
//	char arr1[100] = { 0 };
//	char arr2[10] = "abcdefghi";
//	char* ret = my_strcpy(arr1, arr2);
////char* ret = strcpy(arr1, arr2);
//	printf("%s\n", ret);
//	system("pause");
//	return 0; 
//}

//3.strcat函数：

//char* my_strcat(char* dest,const char* str)
//{
//	char * ret = dest;
//	assert(dest != NULL);
//	assert(str != NULL);
//	while (*dest)
//	{
//		dest++;
//	}
//	while (*dest++ = *str++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char* ret = 0;
//	char arr1[100]= "aasd";
//	char arr2[6]= "hello";
//	//char* ret = strcat(arr1, arr2);
//	 ret = my_strcat(arr1, arr2);
//	printf("%s\n", ret);
//	system("pause");
//	return 0;
//}

////4.strcmp函数
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//	while ((*str1) && (*str1 == *str2))
//
//	{
//		str1++;
//		str2++;
//	}
//	if (*str1==0)
//	{
//		return 0;
//	}
//	return *str1 - *str2;
//}
////int my_strcpy(const char* str1, const char* str2)
////{
////	assert(str1 != NULL);
////	assert(str2 != NULL);
////	while(*str1 == *str2)
////	{
////		if (*str1 == '\0')
////			return 0;
////		str1++;
////		str2++;
////	}
////	return *str1 - *str2;
////}
//
//int main()
//{
//	char arr1[20] = "sfdhfhk";
//	char arr2[20] = "sfjasadjn";
//	/*int ret = strcmp(arr1, arr2);*/
//	int ret = my_strcmp(arr1, arr2);
//	if (ret > 0)
//	{
//		printf("arr1 > arr2\n");
//	}
//	else if (ret = 0)
//	{
//		printf("arr1 = arr2\n");
//	}
//	else
//	{
//		printf("arr1 < arr2\n");
//	}
//	
//	system("pause");
//	return 0;
//}

//5.strstr 函数

//char* my_strstr(const char* str1,const char* str2)
//{
//	const char* s1 = str1;
//	const char* s2 = str2;
//	const char* start = str1;
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//	if (*str2 == '\0')
//	{
//		return (char*)str1;
//	}
//	while (*start)
//	{
//		s1 = start;
//		s2 = str2;
//		while (*s1 && *s2 &&*s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return (char*)start;
//		}
//		start++;
//	}
//	return NULL;
//}
//
//int main()
//{
//	char arr1[] = "abbbcefgh";
//	char arr2[] = "bbc";
//	/*char* ret =strstr(arr1, arr2);*/
//	char* ret = my_strstr(arr1, arr2);
//	if (ret == NULL)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	
//	system("pause");
//	return 0;
//}

//6.strchr函数
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
//		return (char*)s1;s
//	}
//	return NULL;
//}
//int main()
//{
//	char arr1[] = "asdfghj";
//	//char* ret = strchr(arr1, 'd');
//	char* ret = my_strchr(arr1, 'd');
//	printf("%s\n", ret);
//	system("pause");
//	return 0;
//}

