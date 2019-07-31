#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include <string.h>

////第一组sizeof
////一维数组
//int main()
//{
//	int a[] = { 1, 2, 3, 4 };
//	printf("%d\n", sizeof(a));
//	// a表示数组，sizeof（a）是数组长度： 4*4=16
//	printf("%d\n", sizeof(a + 0));
//	//a表示首元素地址，则结果为：4
//	printf("%d\n", sizeof(*a)); 
//	// a表示首元素地址,*a表示数组中的 1一个整数占4个字节，所以结果为：4
//	printf("%d\n", sizeof(a + 1));
//	//a表示首元素地址 ，a+1 表示数组第二个元素的地址，地址为四个字节，结果为：4
//	printf("%d\n", sizeof(a[1]));
//	//结果为：4
//	printf("%d\n", sizeof(&a));
//	//结果为 4
//	printf("%d\n", sizeof(*&a));
//	//结果为 16
//	printf("%d\n", sizeof(&a + 1));
//	//结果为 4
//	printf("%d\n", sizeof(&a[0]));
//	//结果为 4
//	printf("%d\n", sizeof(&a[0] + 1));
//	//结果为 4
//	system("pause");
//	return 0;
//}
////字符数组
//int main()
//{
//	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
//
//	//printf("%d\n", sizeof(arr));
//	////arr为数组名，表示整个数组，则为6
//	//printf("%d\n", sizeof(arr + 0));
//	//// arr 为首元素地址，则为 4
//	//printf("%d\n", sizeof(*arr));
//	////arr为首元素地址，*arr表示字符，则为1
//	//printf("%d\n", sizeof(arr[1]));
//	////结果为 1
//	//printf("%d\n", sizeof(&arr));
//	////&arr 取的是整个数组的地址，则为 4
//	//printf("%d\n", sizeof(&arr + 1));
//	////为 4
//	//printf("%d\n", sizeof(&arr[0] + 1));
//	////为 4
//
	//printf("%d\n", strlen(arr));
	//// 随机值
	//printf("%d\n", strlen(arr + 0));
	//// 随机值
//	/*printf("%d\n", strlen(*arr));*/  //错误代码
//	/*printf("%d\n", strlen(arr[1]));*/   //错误代码
//	printf("%d\n", strlen(&arr));
//	//随机值  
//	printf("%d\n", strlen(&arr + 1));
//	//随机值-6
//	printf("%d\n", strlen(&arr[0] + 1));
//	//随机值-1
////	system("pause");
////	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", sizeof(arr)); 
//	//字符串末尾有个‘\0’故为 7
//	printf("%d\n", sizeof(arr + 0));
//	//arr为首元素地址，即打印为 4
//	printf("%d\n", sizeof(*arr));
//	//char类型   ，为 1
//	printf("%d\n", sizeof(arr[1]));
//	//1
//	printf("%d\n", sizeof(&arr));
//	//4
//	printf("%d\n", sizeof(&arr + 1));
//	//4
//	printf("%d\n", sizeof(&arr[0] + 1));
//	//4
//
//	printf("%d\n", strlen(arr));
//	//6
//	printf("%d\n", strlen(arr + 0));
//	//6
//	//printf("%d\n", strlen(*arr));
//	//printf("%d\n", strlen(arr[1]));
//	printf("%d\n", strlen(&arr)); 
//	//6
//	printf("%d\n", strlen(&arr + 1));
//	//12
//	printf("%d\n", strlen(&arr[0] + 1));
//	//5
//	system("pause");
//	return 0;
//}
//int main()
//{
//	char* p = "abcdef";
//	printf("%d\n", sizeof(p));
//	//4
//	printf("%d\n", sizeof(p + 1));
//	//4
//	printf("%d\n", sizeof(*p));
//	//1
//	printf("%d\n", sizeof(p[0]));
//	//1
//	printf("%d\n", sizeof(&p));
//	//4
//	printf("%d\n", sizeof(&p + 1));
//	//4
//	printf("%d\n", sizeof(&p[0] + 1));
//	//4
//
//	printf("%d\n", strlen(p));
//	// 6
//	printf("%d\n", strlen(p + 1));
//	// 5
//	/*printf("%d\n", strlen(*p));
//	printf("%d\n", strlen(p[0]));*/ //错误代码
//	printf("%d\n", strlen(&p));
//	// 随机值 
//	printf("%d\n", strlen(&p + 1));
//	// 随机值
//	printf("%d\n", strlen(&p[0] + 1));
//	//5
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));
//	//  48 
//	printf("%d\n", sizeof(a[0][0]));
//	//  4
//	printf("%d\n", sizeof(a[0]));
//	// 16
//	printf("%d\n", sizeof(a[0] + 1));
//	// 4
//	printf("%d\n", sizeof(*(a[0] + 1)));
//	// 4
//	printf("%d\n", sizeof(a + 1));
//	//4
//	printf("%d\n", sizeof(*(a + 1))); 
//	//16
//	printf("%d\n", sizeof(&a[0] + 1));
//	//4
//	printf("%d\n", sizeof(*(&a[0] + 1)));
//	//16
//	printf("%d\n", sizeof(*a));
//	//16
//	printf("%d\n", sizeof(a[3]));
//	//16
//	system("pause");
//	return 0;
//}
//总结：1. sizeof(数组名)，这里的数组名表示整个数组，计算的是整个数组的大小。
//2. &数组名，这里的数组名表示整个数组，取出的是整个数组的地址。
//3. 除此之外所有的数组名都表示首元素的地址。


//例题1：
//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int *ptr = (int*)(&a + 1);
//	//&a 是去取出数组a的地址,+1就跳过了整个数组，然后将地址强制转换为int* 类型赋予*ptr
//	//ptr-1是将ptr指向的地址向左挪四个字节，从而指向5的位置上
//	printf("%d ,%d", *(a + 1), *(ptr - 1));
//	// 所以 ，运行结果为 2 ，5.
//	system("pause");
//	return 0;
//}
////例题2：
//struct Test 
//{ 
//	int Num;
//	char *pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//
//}*p;
//int main()
//{
//	 //由于还没学习结构体，这里告知结构体的大小是20个字
//	 //假设p 的值为0x100000。 如下表表达式的值分别为多少?  
//	printf("%p\n", p + 0x1);
//	//p表示结构体的地址，加一表示跳过这个结构体，二结构体字节为20字节
//	//所以打印为:00100014   
//	printf("%p\n", (unsigned long)p + 0x1);
//	//00100001
//	system("pause");
//	return 0;
//}

//例题3
//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int *ptr1 = (int*)(&a + 1);
//	//&a 是数组a的地址，从而为 4
//	int *ptr2 = (int*)((int)a + 1);
//	//2000000
//	printf("%d ,%x", ptr1[-1], *ptr2);
//	//4 ,2000000
//	system("pause");
//	return 0;
//}

////例题 4
//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };//数组存放着三个逗号表达式，
//	//a[3][2]={1,3,5};
//	int *p;    
//	p = a[0];  
//	printf("%d", p[0]);
//	//打印结果 1
//	system("pause");
//	return 0;
//}

//例题5
//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	//  fffffffc   -4
//	system("pause");
//	return 0;
//}

////例题 6
//int main()
//{ 
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }; 
//	int *ptr1 = (int *)(&aa + 1);    
//	int *ptr2 = (int *)(*(aa + 1));   
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1)); 
//	// 10   6
//	system("pause");
//	return 0; 
//}
//
////例题 7
//
//int main()
//{
//	char *a[] = { "work", "at", "alibaba" };
//	//这是一个指针数组，存放的是三个 char* 类型的指针
//	char**pa = a;
//	//二级指针指向的char*指针的指针
//	pa++;
//	printf("%s\n", *pa); 
//	//输出为 at
//	system("pause");
//	return 0;
//}


//例题 8
//int main()
//{
//	char *c[] = { "ENTER", "NEW", "POINT", "FIRST" };
//	char**cp[] = { c + 3, c + 2, c + 1, c };
//	char***cpp = cp;  printf("%s\n", **++cpp);
//	printf("%s\n", *--*++cpp + 3);
//	printf("%s\n", *cpp[-2] + 3);
//	printf("%s\n", cpp[-1][-1] + 1);
//	system("pause");
//	return 0;
//}


//作业题：
//有一个字符数组的内容为:"student a am i",
//	请你将数组的内容改为"i am a student".
//	要求：
//	不能使用库函数。
//	只能开辟有限个空间（空间个数和字符串的长度无关）。
//#include <assert.h>
//
//int my_strlen(const char* str)
//{
//	int count=0;
//	assert(*str != NULL);
//	while (*str++)
//	{
//		count++;
//	}
//	return count;
//}
//
//void reverse_str(char* left, char* right)
//{
//	assert(left != NULL);
//	assert(right != NULL);
//	while (left < right)
//	{
//		char tem = *left;
//		*left = *right;
//		*right = tem;
//		left++;
//		right--;
//	}
//}
//
//void reverse(char* arr, int n)
//{
//	char* end = arr;
//	reverse_str(arr, arr + n - 1);//逆序整个字符串
//	//逆序每个字符
//	while (*end != '\0')
//	{
//		char* start = end;
//		while(*end != ' ' && *end != '\0')
//		{
//			end++;
//		}
//		reverse_str(start, end-1);//逆序单词
//	    if(*end != '\0')
//			end++;
//	}
//}
//int main()
//{
//	char arr[] = "student a am i";
//	int len = my_strlen(arr);
//	reverse(arr, len);
//	printf("%s\n", arr);
//	system("pause");
//	return 0;
//}


///*
//1.调整数组使奇数全部都位于偶数前面。
//
//题目：
//
//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得*/数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。
//奇数在偶数前面

int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9};
	int i = 0;
	int left = 0;
	int sz = sizeof(arr)/sizeof(arr[0]);
	int right = sz-1;

	while(left<right)
	{
		int tmp = 0;
		//左边找偶数
		while((left<right)&&(arr[left]%2 == 1))
		{
			left++;
		}
		//右边找奇数
		while((left<right)&&(arr[right]%2==0))
		{
			right--;
		}
		//交换
		if(left<right)
		{
			tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
		left++;
		right--;
	}
	for(i=0;i<sz; i++)
	{
		printf("%d ", arr[i]);
	}
	system("pause");
	return 0;
}
