#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>


//一级指针的定义
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	printf("%d\n", *p);//指针p存放着a的地址，通过解应用找到p所指向空间的
//	system("pause");
//	return 0;
//}
//

////指针+-整数
//int main()
//{
//	int arr[4] = { 1, 2, 3, 4 };
//	int* p = arr;//arr表示首元素地址
//	p++;
//	printf("%d\n", *p);
//	system("pause");
//	return 0;
//}

//指针-指针
//int my_strlen(char* p)
//{
//	char* s = p;
//	while (*s != '\0')
//	{
//		s++;
//	}
//	return s - p;
//}
//
//int main()
//{
//	char str[]= "asdf";
//	int len = my_strlen(str);
//	printf("%d\n", len);
//	system("pause");
//	return 0;
//}

void test(const char* str)
{
	printf("%s\n", str);
}
int main() 
{  
	//函数指针pfun  void (*pfun)(const char*) = test; 
	//函数指针的数组pfunArr 比特科技
	void(*pfunArr[5])(const char* str); 
	pfunArr[0] = test;
	//指向函数指针数组pfunArr的指针ppfunArr
	void (*(*ppfunArr)[10])(const char*) = &pfunArr;  return 0; 
}