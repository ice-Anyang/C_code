#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

//int main()
//{
//	int a = 3;
//	//00000000000000000000000000000011 //-����������
//	int b = -3;
//	//10000000000000000000000000000011 //-����������
//	int c1= a << 1;
//	//����nλ���ұ߿�λ��0��
//	//00000000000000000000000000000110----����
//	//00000000000000000000000000000110----ԭ�뼴 6
//	int c2= a >> 1;
//	//
//	//���Ʒ�Ϊ�������ƺ��߼����ƣ�ȡ���ڱ�����
//	//�������ƣ�������nλ����߸��ݷ���λ����0����1��
//	//�߼����ƣ�������nλ����߲���0����
//	int d1 = b << 1;
//	int d2 = b >> 1;
//	//10000000000000000000000000000011  //������
//	//11111111111111111111111111111011  // ����
//	//11111111111111111111111111111101  // ����
//	//10000000000000000000000000000011 //ԭ��  �� -2 ˵���˱���������������
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







