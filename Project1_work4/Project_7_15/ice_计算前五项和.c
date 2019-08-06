#define _CRT_SECURE_NO_WARNINGS 1

# include <stdio.h>
# include <math.h>
# include <stdlib.h>

int main()
{
	int a = 0;
	int i = 0;
	int Sn= 0;	
	int num = 0;
	scanf("%d", &a);
	for (i = 0; i <= 5; i++)
	{
		num = num + a*pow(10, i);
		Sn = Sn + num;
	}
	printf("Sn = %d\n", Sn);
	system("pause");
	return 0;
}