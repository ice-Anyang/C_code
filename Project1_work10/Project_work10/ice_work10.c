#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
//1.
//写一个函数返回参数二进制中 1 的个数
//比如： 15 0000 1111 4 个 1

//void count_one_bits(unsigned int value)
//{
//	int i = 0;
//	int ret = 0;//计数器
//	for (i = 0; i < 32; i++)
//	{
//		
//		if ( ((value >> i) & 1)== 1)
//		{
//			ret++;
//		}	
//	}
//	printf("ret = %d\n", ret);
//}
//
//int main()
//{
//	unsigned int val = 0;
//	printf("请输入一个数\n");
//	scanf("%d", &val);
//	count_one_bits(val);
//	system("pause");
//	return 0;
//}

//2.获取一个数二进制序列中所有的偶数位和奇数位，
//分别输出二进制序列。

//int main()
//{
//	int n = 0;
//	int i = 0;
//	printf("请输入这个数:>\n");
//	scanf("%d", &n);
//	//求奇数位并打印
//	printf("奇数位为：\n");
//	for (i = 31; i >=0; i -= 2)
//	{
//		printf("%d", (n >> i) & 1);
//	}
//	printf("\n");
// //求偶数位并打印
//	printf("偶数位为：\n");
//	for (i = 30; i >= 0; i -= 2)s
//	{
//		
//		printf("%d", (n >> i) & 1);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}


//3. 输出一个整数的每一位。


//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d", n % 10);
//}
//
//int main()
//{
//	int sum = 0;
//	printf("请输入这个数: ");
//	scanf("%d", &sum);
//	print(sum);
//	system("pause");
//	printf("\n");
//	return 0;
//}

//4.编程实现：
//两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
//输入例子 :
//1999 2299

void my_bit(int m, int n)//判断二进制比特位是否相等
{
	int i = 0;
	int count = 0;
	for (i = 0; i < 32; i++)
	{
		if (((m >> i) & 1) != ((n >> i) & 1))
		{
			count++;
		}
	}
	printf("它们的相同位数count=%d\n", count);
}

int main()
{
	int m = 0;
	int n = 0;
	printf("请输入两个数 ：\n");
	scanf("%d %d", &m, &n);
	my_bit(m, n);
	system("pause");
	return 0;
}