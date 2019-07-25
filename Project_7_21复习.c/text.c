#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

//int main()
//{
//	int a = 3;
//	//00000000000000000000000000000011 //-二进制序列
//	int b = -3;
//	//10000000000000000000000000000011 //-二进制序列
//	int c1= a << 1;
//	//左移n位，右边空位补0；
//	//00000000000000000000000000000110----补码
//	//00000000000000000000000000000110----原码即 6
//	int c2= a >> 1;
//	//
//	//右移分为算术右移和逻辑右移，取决于编译器
//	//算术右移：向右移n位，左边根据符号位补“0”或“1”
//	//逻辑右移：向右移n位，左边补“0”；
//	int d1 = b << 1;
//	int d2 = b >> 1;
//	//10000000000000000000000000000011  //二进制
//	//11111111111111111111111111111011  // 补码
//	//11111111111111111111111111111101  // 补码
//	//10000000000000000000000000000011 //原码  即 -2 说明此编译器是算术右移
//	//
//	printf("c1=%d\n", c1);
//	printf("c2=%d\n", c2);
//	printf("d1=%d\n", d1);
//	printf("d2=%d\n", d2);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	a = 20;
//	printf("a=%d\n", a);
//	a += 2;
//	printf("a=%d\n", a);
//	a %= 3;
//	printf("a=%d\n", a);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int num = 20;
//	int* p = &num;
//	*p = 30;
//	printf("num=%d\n", num);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int* p = 20;
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof a);
//	printf("%d\n",sizeof *p);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 9;
//	int b = 8;
//	printf("max=%d", a > b ? a : b);
//	system("pause");
//	return 0;
//}
//
int main()
{
	int a = 1; 
	int b = 2; 
	int c = (a > b, a = b + 10, a, b = a + 1);
	printf("c=%d\n", c);
	system("pause");
	return 0;

}







