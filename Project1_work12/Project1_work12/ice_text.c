#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//#include <math.h>
//1.编写函数： 
//unsigned int reverse_bit(unsigned int value);
//这个函数的返回值value的二进制位模式从左到右翻转后的值。
//
//如：
//在32位机器上25这个值包含下列各位：
//00000000000000000000000000011001
//翻转后：（2550136832）
//10011000000000000000000000000000
//程序结果返回：
//2550136832

//
//unsigned int reverse_bit(unsigned int value)
//{
//	int arr[32] = { 0 };
//	int i = 0;
//	int j = 0;
//	int sum = 0;
//	for (i = 0; i < 32;i++)
//	{
//		arr[i] = value & 1;
//		value = value >> 1;
//	}
//	for (j = 0; j < 32; j++)
//	{
//	sum = sum + arr[j] * pow(2, 32 - 1 - j);
//	}
//	return sum;
//}

//unsigned int reverse_bit(unsigned int value)
//{
//	//利用  二进制按位与 和 桉位或进行挪位。
//	int a = 0;
//	int sum = 0;
//	int i = 0;
//	while (i<31)
//	{
//		a = value & 1;
//		sum = sum | a;
//		value = value >> 1;
//		sum = sum << 1;
//		i++;
//	}
//	return sum;
//}
//
//int main()
//{
//	int val = 0;
//	scanf("%d", &val);
//	unsigned int ret = reverse_bit(val);
//	printf("%u\n", ret);//  %u 打印无符号的整型
//	system("pause");
//	return 0;
//}
//2.不使用（a + b） / 2这种方式，求两个数的平均值。

//int ave_rage(int x, int y)
//{
//	/*return x + (x - y)/2;*/
//	return x&y + (x^y) / 2;//   "/"优先级大于“^”
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int ret = ave_rage(a, b);
//	printf("ret=%d\n", ret);
//	system("pause");
//	return 0;
//}

//3.编程实现：
//一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的。
//请找出这个数字。（使用位运算）

//int main()
//{
//	int i = 0;
//	int num1 = 0;
//	int arr[] = {1,4,5,6,4,5,6};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz ; i++)
//	{
//		num1 = num1^arr[i];
//	}
//	printf("%d\n",num1);
//	system("pause");
//	return 0;
//}//

//4.
//有一个字符数组的内容为:"student a am i",
//			请你将数组的内容改为"i am a student".
//			要求：
//			不能使用库函数。
//			只能开辟有限个空间（空间个数和字符串的长度无关）。
#include<string.h>
#include<assert.h>

void reverse(char* pa, char* pb)
{
	assert(pa);//断言
	assert(pb);
	while (pa < pb)

	{
		char temp = *pa;
		*pa = *pb;
		*pb = temp;
		pa++;
		pb--;
	}
}

void reverse_str(char* str, int len)
{
	assert(str);
	char* str1 = str;
	char* left = str;
	char* right = str + (len - 1);
	reverse(left, right);//对字符串整体进行交换。
	//现在是对内部单词进行交换
	while (*str1)
	{
		left = str1;
		while ((*str1 != '\0') &&( *str1 != ' '))
		{
			str1++;
		}
		right = str1 - 1;
		reverse(left, right);//对单词进行交换
		if (*str1 == ' ')
		{
			str1++;
		}
	}
}

int main()
{
	char arr[] = "student a am i" ;
	int len = 0;
	len=strlen(arr);
	reverse_str(arr, len);
	printf("交换后的结果：%s\n", arr);
	system("pause");
	return 0;
}




