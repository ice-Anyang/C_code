#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//#include <math.h>
//1.��д������ 
//unsigned int reverse_bit(unsigned int value);
//��������ķ���ֵvalue�Ķ�����λģʽ�����ҷ�ת���ֵ��
//
//�磺
//��32λ������25���ֵ�������и�λ��
//00000000000000000000000000011001
//��ת�󣺣�2550136832��
//10011000000000000000000000000000
//���������أ�
//2550136832

//
//unsigned int reverse_bit(unsigned int value)
//{
//	int arr[32] = { 0 };
//	int i = 0;
//	int j = 0;
//	int sum = 0;
//	for (i = 0; i < 32;i++)
//	{
//		arr[i] = value & 1;
//		value = value >> 1;
//	}
//	for (j = 0; j < 32; j++)
//	{
//	sum = sum + arr[j] * pow(2, 32 - 1 - j);
//	}
//	return sum;
//}

//unsigned int reverse_bit(unsigned int value)
//{
//	//����  �����ư�λ�� �� ��λ�����Ųλ��
//	int a = 0;
//	int sum = 0;
//	int i = 0;
//	while (i<31)
//	{
//		a = value & 1;
//		sum = sum | a;
//		value = value >> 1;
//		sum = sum << 1;
//		i++;
//	}
//	return sum;
//}
//
//int main()
//{
//	int val = 0;
//	scanf("%d", &val);
//	unsigned int ret = reverse_bit(val);
//	printf("%u\n", ret);//  %u ��ӡ�޷��ŵ�����
//	system("pause");
//	return 0;
//}
//2.��ʹ�ã�a + b�� / 2���ַ�ʽ������������ƽ��ֵ��

//int ave_rage(int x, int y)
//{
//	/*return x + (x - y)/2;*/
//	return x&y + (x^y) / 2;//   "/"���ȼ����ڡ�^��
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int ret = ave_rage(a, b);
//	printf("ret=%d\n", ret);
//	system("pause");
//	return 0;
//}

//3.���ʵ�֣�
//һ��������ֻ��һ�����ֳ�����һ�Ρ������������ֶ��ǳɶԳ��ֵġ�
//���ҳ�������֡���ʹ��λ���㣩

//int main()
//{
//	int i = 0;
//	int num1 = 0;
//	int arr[] = {1,4,5,6,4,5,6};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz ; i++)
//	{
//		num1 = num1^arr[i];
//	}
//	printf("%d\n",num1);
//	system("pause");
//	return 0;
//}//

//4.
//��һ���ַ����������Ϊ:"student a am i",
//			���㽫��������ݸ�Ϊ"i am a student".
//			Ҫ��
//			����ʹ�ÿ⺯����
//			ֻ�ܿ������޸��ռ䣨�ռ�������ַ����ĳ����޹أ���
#include<string.h>
#include<assert.h>

void reverse(char* pa, char* pb)
{
	assert(pa);//����
	assert(pb);
	while (pa < pb)

	{
		char temp = *pa;
		*pa = *pb;
		*pb = temp;
		pa++;
		pb--;
	}
}

void reverse_str(char* str, int len)
{
	assert(str);
	char* str1 = str;
	char* left = str;
	char* right = str + (len - 1);
	reverse(left, right);//���ַ���������н�����
	//�����Ƕ��ڲ����ʽ��н���
	while (*str1)
	{
		left = str1;
		while ((*str1 != '\0') &&( *str1 != ' '))
		{
			str1++;
		}
		right = str1 - 1;
		reverse(left, right);//�Ե��ʽ��н���
		if (*str1 == ' ')
		{
			str1++;
		}
	}
}

int main()
{
	char arr[] = "student a am i" ;
	int len = 0;
	len=strlen(arr);
	reverse_str(arr, len);
	printf("������Ľ����%s\n", arr);
	system("pause");
	return 0;
}




