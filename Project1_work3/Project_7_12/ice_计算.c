#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <math.h>
//#include <stdlib.h>
////��һ�ַ�����
////����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ
////���ú������ڷ���λ�ı任��
//int main()
//{
//	int i = 0;
//	float sum = 0.0;
//	float t = 0.0;
//	for (i = 1; i <= 100; i++) 
//	{
//		t = pow(-1, i + 1);
//		sum = sum + t*1 / i;
//	}
//	printf("sum=%f\n", sum);
//	system("pause");
//	return 0;
//}
//�ڶ��ַ�����
// ÿһ�����ӷ�ĸ��ż������Ϊ����Ϊ�����Ķ�Ϊ����


#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i = 0;
	float sum = 0.0;
	while(i <= 100)
	{
		if (i % 2 == 0)
		{
			sum = sum - 1 / i;
		}
		else
		{
			sum = sum + 1 / i;
		}
	}
	printf("sum=%f\n", sum);
	system("pause");

	return 0;
}