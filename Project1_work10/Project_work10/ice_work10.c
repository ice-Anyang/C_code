#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
//1.
//дһ���������ز����������� 1 �ĸ���
//���磺 15 0000 1111 4 �� 1

//void count_one_bits(unsigned int value)
//{
//	int i = 0;
//	int ret = 0;//������
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
//	printf("������һ����\n");
//	scanf("%d", &val);
//	count_one_bits(val);
//	system("pause");
//	return 0;
//}

//2.��ȡһ�������������������е�ż��λ������λ��
//�ֱ�������������С�

//int main()
//{
//	int n = 0;
//	int i = 0;
//	printf("�����������:>\n");
//	scanf("%d", &n);
//	//������λ����ӡ
//	printf("����λΪ��\n");
//	for (i = 31; i >=0; i -= 2)
//	{
//		printf("%d", (n >> i) & 1);
//	}
//	printf("\n");
// //��ż��λ����ӡ
//	printf("ż��λΪ��\n");
//	for (i = 30; i >= 0; i -= 2)s
//	{
//		
//		printf("%d", (n >> i) & 1);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}


//3. ���һ��������ÿһλ��


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
//	printf("�����������: ");
//	scanf("%d", &sum);
//	print(sum);
//	system("pause");
//	printf("\n");
//	return 0;
//}

//4.���ʵ�֣�
//����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
//�������� :
//1999 2299

void my_bit(int m, int n)//�ж϶����Ʊ���λ�Ƿ����
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
	printf("���ǵ���ͬλ��count=%d\n", count);
}

int main()
{
	int m = 0;
	int n = 0;
	printf("������������ ��\n");
	scanf("%d %d", &m, &n);
	my_bit(m, n);
	system("pause");
	return 0;
}