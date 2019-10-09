#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//int main()
//{
//	int a = 2;
//	int* p1;
//	int** p2;
//	p2 = &p1;
//	p1 = &a;
//	a++;
//	printf("%d,%d,%d\n", a, *p1, **p2);
//	system("pause");
//	return 0;
//}

//#include <string.h>
//int main()
//{
//	char str[] = "ABCDEFG";
//	char *p1, *p2;
//	p1 = "abcd";
//	p2 = "efgh";
//	strcpy(str + 1, p2 + 1);
//	strcpy(str + 3, p1 + 3);
//	printf("%s\n", str);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	unsigned int a = 0xfffffff7;
//	unsigned char i = (unsigned char)a;
//	char* b = (char*)&a;
//	printf("%08x,%08x", i, *b);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int j = 4;
//	int i = j;
//	for (; i <= 2 * j; i++)
//	{
//		switch (i/j)
//		{
//		case 1:
//			printf("*");
//			break;
//		case 2:
//			printf("#");
//			break;
//		default:
//			break;
//		}
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int x = 1;
//	int y = 012;
//	printf("%d\n", y*x++);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	char* s = "abcde";
//	s += 2;
//	printf("%1u\n", s);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	char arr[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
//	for (i = 0; i < 10; i++)
//	{
//		arr[1] = '0';
//	}
//	printf("%d\n", strlen(arr));
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int i = 10;
//	long long t = sizeof(i++);
//	printf("%d\n", i);//   10
//	system("pause");
//	return 0;
//}

//#define N 3
//#define Y(n) ((N+1)*n)
//int main()
//{
//	int z = 0;
//	z = 2 * (N + Y(5 + 1));
//	printf("%d", z);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int i = 6;
//	if (i <= 6)
//		printf("hello\n");
//	else
//		printf("bye-bye\n");
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	char ch = -1;
//	printf("%d\n", ch);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int z = 0;
//	z = (a = 2, b = 5, a++, b++, a + b);
//	printf("%d\n", z);  //9
//	system("pause");
//	return 0;
//}

int main()
{
	int i = 0;
	int y = 0;
	int x = 0;
	do
	{
		++i;
		if (i % 2)
			x += i,
			i++;
		y += i++;
	} while (i<=7);
	printf("%d,%d,%d\n", i, x, y);
	system("pause");
	return 0;
}