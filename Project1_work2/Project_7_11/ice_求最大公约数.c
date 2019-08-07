#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//求最大公约数
int main()
{
	int num1 = 0;
	int num2 = 0;
	int min = 0;
	int i = 0;
	int MAX = 0;
	printf("请输入两个整数：");
	scanf("%d %d", &num1, &num2);
	
	if (num1 < num2)
	{
		min = num1;
	}
	else
	{
		min = num2;
	}
	for (i = 1; i <= min; i++)
	{
		if (num1%i == 0 && num2%i == 0)
		{
			MAX = i;
		}

	}
	printf("最大公约数是：%d\n", MAX);
	system("pause");
	return 0;
}