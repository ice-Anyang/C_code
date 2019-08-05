#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i = 0;
	int num = 0;
	for (i = 0; i <= 101; i++)
	{
		if (i % 10 == 9)
		{
			num++;
		}
		if (i / 10 == 9)
		{
			num++;
		}
			
	}
	printf("num=%d\n", num);
	system("pause");
	return 0;
}