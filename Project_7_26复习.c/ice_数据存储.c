#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//1.��������С�ˣ����С�����жϵ�ǰ�������ֽ���
//��ˣ���һ�����ݵĵ�λ�ֽ�������ݴ浽�ߵ�ַ�����Ѹ�λ�ֽ�������ݴ浽�͵�ַ����
//С�ˣ���һ�����ݵĸ�λ�ֽ�������ݴ浽�ߵ�ַ�����ѵ�λ�ֽ�������ݴ浽�͵�ַ����
//��һ�ַ���
//int check_sys()
//{
//	int i = 1;
//	char* pa = (char*)&i;
//	return *pa;
//}
//�ڶ��ַ���
//int check_sys()
//{
//	union Un//�����壬������
//	{
//		int i;
//		char j;
//	}s;
//	s.i = 1;
//	return s.j;
//}
//
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//		printf("��С��\n");
//	else
//		printf("�Ǵ��\n");
//	system("pause");
//	return 0;
//}

//����1��
//���ʲô
//int main()
//{
//	char a = -1;
//	signed char b = -1;//�޷���char
//	unsigned char c = -1;
//	//��������
//	//11111111111111111111111111111111--����
//	printf("%d %d %d", a, b, c);// -1 -1 255
//	system("pause");
//	return 0;
//}


//����2

//int main()
//{
//	char  a = -128;
//	//00000000000000000000000010000000--���� 
//	//00000000000000000000000001111111
//	//11111111111111111111111110000000//�޷������͸�λ��0
//	printf("%u", a);
//	system("pause");
//	return 0;
//}
//
////����3
//int main()
//{
//	char a = 128;
//	//
//	printf("%u", a);
//	system("pause");
//	return 0;
//}

//����4
//int main()
//{
//	int i = -20;
//	//10000000000000000000000000010100
//	//11111111111111111111111111101100--����
//	unsigned int j = 10;
//	//00000000000000000000000000001010---ԭ�룬����
//	//11111111111111111111111111110110---i+j ����
//	//10000000000000000000000000001010---ԭ��
//	printf("%d\n", i + j);//   -10
//	system("pause");
//	return 0;
//}

////����5
//int main()
//{
//	unsigned int i;//�޷������α���
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//	}
//	system("pause");
//	return 0;
//}//��ѭ�� ��i ����С��0 ��

//���� 6
//int main()
//{
//	char a[1000];
//	//  ֻ�е� �ַ����� a[1000]������0 
//	int i = 0;
//	//0---127  -128---0   �� 127+128=255
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d\n", strlen(a));//  255
//	system("pause");
//	return 0;
//}
//����7
unsigned char i = 0;//char �ܵ�254
int main()
{
	int ret = 0;
	for (i = 0; i <255; i++)
	{
		printf("hello word\n");
		ret++;
	}
	printf("%d\n", ret);
	system("pause");
	return 0;
}