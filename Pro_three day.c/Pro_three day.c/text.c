#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

////�㷨һ��
////����ά���鿴��һά����
////1.�ȱȽ�Ŀ��������������������һ��
////2.����һ���ڽ��б�������
//void my_find(int *arr, int row, int col, int num)
//{
//	if (arr != NULL && row > 0 && col > 0)
//	{
//		int tmp_row = 0;
//		int tmp_col = col-1;
//		while (tmp_row < row && col >= 0)
//		{
//			if (arr[tmp_row*col + tmp_col] == num)
//			{
//				printf("%d,tex=%d\n", arr[tmp_row*col + tmp_col], tmp_row*col + tmp_col);
//				break;
//			}
//			else if (arr[tmp_row*col+tmp_col]>num)
//			{
//				--tmp_col;
//			}
//			else
//			{
//				++tmp_row;
//			}
//		}
//	}
//}
//int main()
//{
//	int tem= 0;
//	scanf("%d", &tem);
//	int arr[4][4] = {
//		1, 2, 8, 9,
//		2, 4, 9, 12,
//		4, 7, 10, 13,
//		6, 8, 11, 15 };
//	
//	my_find(arr, 4, 4, tem);
//	system("pause");
//	return 0;
//}

//��ҵ����
//���ո��滻��%20
void re_blank(char* str, int sz)
{
	int i = 0;
	int a = 0;//�����ַ�����
	int b = 0;//����ո����
	int in_mlen = 0;
	int in_newsz = 0;
	int newsz = 0;

	if (str == NULL || sz <= 0)
	{
		return;
	}
	while (str[i]!='\0')//��������
	{
		++a;
		if (str[i] ==' ')
		{
			++b;
		}
		++i;
	}
	newsz = sz + b * 2;
	if (newsz > sz)//�µĳ���С��ԭ������Ŀռ��С������װ����
	{
		return;
	}
	in_mlen = a;//�ַ�����
	in_newsz = newsz;//Ŀǰ�ĳ���

	while (in_mlen >= 0 && in_newsz > in_mlen)//�Ӻ���ǰ���
	{
		if (str[in_mlen] == ' ')
		{
			str[in_newsz--] = '0';
			str[in_newsz--] = '2';
			str[in_newsz--] = '%';
		}
		else
		{
			str[in_newsz--] = str[in_mlen--];
		}
		--in_mlen;
	}

}

int main()
{
	int sz = 0;
	char str[30] = "a b c y";
	sz = sizeof(str) / sizeof(str[0]);
	re_blank(str, sz);
	printf("%s\n", str);
	system("pause");
	return 0;
}
//�㷨����
//���n��쳲�������
//�ݹ��㷨��
//int fibon(int a)
//{
//	if (a <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return fibon(a - 1) + fibon(a - 2);//�ݹ麯��
//	
//	}
//}
//int main()
//{
//	int n = 0;
//	printf("�������n������");
//	scanf("%d",&n);
//	printf ("%d\n",fibon(n));
//	system("pause");
//	return 0;
//}
//�ǵݹ��㷨��
//int fi_bon(int n)
//{
//	int a1 = 1;
//	int a2 = 1;
//	int a3 = 0;
//	if (n <= 2)
//	{
//		a3 = 1;
//	}
//	else
//	{
//		while (n > 2)
//		{
//			a3 = a1 + a2;
//			a1 = a2;
//			a2 = a3;
//			n--;
//		}
//		return a3;
//	}
//}
//int main()
//{
//	int n = 0;
//	printf("�������n������");
//	scanf("%d", &n);
//	printf("%d\n", fi_bon(n));
//	system("pause");
//	return 0;
//}

//�㷨�ģ�
//
//
//int main()
//{
//	unsigned int a = 2019;
//	int count = 0;
//
//	while (a)
//	{
//		count++;
//		a = (a - 1)&a;
//	}
//	printf("%d\n", count);
//	system("pause");
//	return 0;
//}

//�㷨�壺

//int main()
//{
//
//}
//
//�㷨����
//
//int main()
//{
//
//}


