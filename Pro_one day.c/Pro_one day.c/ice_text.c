#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int a = 0;
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			if (j % 2)
//			{
//				break;
//			}
//			a++;
//		}
//		a++;
//	}
//	printf("%d\n", a);//   4
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int arr[4][4] = { 1, 2, 8, 9, 2, 4, 9, 12, 4, 7, 10, 13, 6, 8, 11, 15 };
//	int key = 0;
//	scanf("%d", &key);
//
//	
//}
//int main()
//{
//	int a =10;
//	a += a *= a -= a / 3;
//	printf("%d\n", a);
//	system("pause");
//	return 0;
//
//}

//int main()
//{
//	int a = 5;
//	if (a = 0)
//	{
//		printf("%d\n", a - 10);
//	}
//	else
//	{
//		printf("%d\n", a++);
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	char a[20];
//	char* p1 = (char*)a;
//	char* p2 = (char*)(a + 5);
//	int n = p2 - p1;
//	printf("%d\n", n);
//	system("pause");
//	return 0;
//}

//int fun(int x, int y)
//{
//	static int i = 2;
//	static int m = 0;
//	i += m + 1;
//	m = i + x + y;
//	return m;
//}
//
//void main()
//{
//	int j = 4;
//	int m = 1;
//	int k = 0;
//	k = fun(j, m);
//	printf("%d ,",k);
//	k = fun(j, m);
//	printf("%d\n", k);
//	system("pause");
//	return;
//

//#include <string.h>
//
//int main()
//{
//	char arr[2][4];
//	strcpy((char*)arr, "you");
//	strcpy(arr[1], "me");
//	arr[0][3] = '&';
//	printf("%s\n", arr);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int m = 0;
//	int n = 0;
//	for (m = 0, n = -1; n = 0; n++, m++)
//		n++;
//	return 0;
//}

//int a = 1;
//void test()
//{
//	int a = 2;
//	a += 1;
//}
//int main()
//{
//	test();
//	printf("%d\n", a);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int y = 10;
//	int x = 0;
//	x = y++;
//	printf("%d %d", x, y);
//	system("pause");
//	return 0;
//}
#include<string.h>
//int main()
//{
//	char s = "\\123456\123456\t";
//	printf("%d\n", strlen(s));
//	system("pause");
//	return 0;
//}
int main()
{
	char* p = "bluel";
	char a[] = "bluel";
	printf("%d\n", strlen(p));
	printf("%d\n", strlen(a));
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(p));
	system("pause");
	return 0;

}






