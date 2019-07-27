#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//1.请简述大端小端，设计小程序判断当前机器的字节序
//大端：把一个数据的低位字节序的内容存到高地址处，把高位字节序的内容存到低地址处。
//小端：把一个数据的高位字节序的内容存到高地址处，把低位字节序的内容存到低地址处。
//第一种方法
//int check_sys()
//{
//	int i = 1;
//	char* pa = (char*)&i;
//	return *pa;
//}
//第二种方法
//int check_sys()
//{
//	union Un//联合体，自由体
//	{
//		int i;
//		char j;
//	}s;
//	s.i = 1;
//	return s.j;
//}
//
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//		printf("是小端\n");
//	else
//		printf("是大端\n");
//	system("pause");
//	return 0;
//}

//例题1。
//输出什么
//int main()
//{
//	char a = -1;
//	signed char b = -1;//无符号char
//	unsigned char c = -1;
//	//整型提升
//	//11111111111111111111111111111111--补码
//	printf("%d %d %d", a, b, c);// -1 -1 255
//	system("pause");
//	return 0;
//}


//例题2

//int main()
//{
//	char  a = -128;
//	//00000000000000000000000010000000--补码 
//	//00000000000000000000000001111111
//	//11111111111111111111111110000000//无符号整型高位补0
//	printf("%u", a);
//	system("pause");
//	return 0;
//}
//
////例题3
//int main()
//{
//	char a = 128;
//	//
//	printf("%u", a);
//	system("pause");
//	return 0;
//}

//例题4
//int main()
//{
//	int i = -20;
//	//10000000000000000000000000010100
//	//11111111111111111111111111101100--补码
//	unsigned int j = 10;
//	//00000000000000000000000000001010---原码，补码
//	//11111111111111111111111111110110---i+j 补码
//	//10000000000000000000000000001010---原码
//	printf("%d\n", i + j);//   -10
//	system("pause");
//	return 0;
//}

////例题5
//int main()
//{
//	unsigned int i;//无符号整形变量
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//	}
//	system("pause");
//	return 0;
//}//死循环 ，i 不会小于0 ；

//例题 6
//int main()
//{
//	char a[1000];
//	//  只有当 字符数组 a[1000]里面有0 
//	int i = 0;
//	//0---127  -128---0   即 127+128=255
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d\n", strlen(a));//  255
//	system("pause");
//	return 0;
//}
//例题7
unsigned char i = 0;//char 能到254
int main()
{
	int ret = 0;
	for (i = 0; i <255; i++)
	{
		printf("hello word\n");
		ret++;
	}
	printf("%d\n", ret);
	system("pause");
	return 0;
}