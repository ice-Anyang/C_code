#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include <string.h>

////��һ��sizeof
////һά����
//int main()
//{
//	int a[] = { 1, 2, 3, 4 };
//	printf("%d\n", sizeof(a));
//	// a��ʾ���飬sizeof��a�������鳤�ȣ� 4*4=16
//	printf("%d\n", sizeof(a + 0));
//	//a��ʾ��Ԫ�ص�ַ������Ϊ��4
//	printf("%d\n", sizeof(*a)); 
//	// a��ʾ��Ԫ�ص�ַ,*a��ʾ�����е� 1һ������ռ4���ֽڣ����Խ��Ϊ��4
//	printf("%d\n", sizeof(a + 1));
//	//a��ʾ��Ԫ�ص�ַ ��a+1 ��ʾ����ڶ���Ԫ�صĵ�ַ����ַΪ�ĸ��ֽڣ����Ϊ��4
//	printf("%d\n", sizeof(a[1]));
//	//���Ϊ��4
//	printf("%d\n", sizeof(&a));
//	//���Ϊ 4
//	printf("%d\n", sizeof(*&a));
//	//���Ϊ 16
//	printf("%d\n", sizeof(&a + 1));
//	//���Ϊ 4
//	printf("%d\n", sizeof(&a[0]));
//	//���Ϊ 4
//	printf("%d\n", sizeof(&a[0] + 1));
//	//���Ϊ 4
//	system("pause");
//	return 0;
//}
////�ַ�����
//int main()
//{
//	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
//
//	//printf("%d\n", sizeof(arr));
//	////arrΪ����������ʾ�������飬��Ϊ6
//	//printf("%d\n", sizeof(arr + 0));
//	//// arr Ϊ��Ԫ�ص�ַ����Ϊ 4
//	//printf("%d\n", sizeof(*arr));
//	////arrΪ��Ԫ�ص�ַ��*arr��ʾ�ַ�����Ϊ1
//	//printf("%d\n", sizeof(arr[1]));
//	////���Ϊ 1
//	//printf("%d\n", sizeof(&arr));
//	////&arr ȡ������������ĵ�ַ����Ϊ 4
//	//printf("%d\n", sizeof(&arr + 1));
//	////Ϊ 4
//	//printf("%d\n", sizeof(&arr[0] + 1));
//	////Ϊ 4
//
	//printf("%d\n", strlen(arr));
	//// ���ֵ
	//printf("%d\n", strlen(arr + 0));
	//// ���ֵ
//	/*printf("%d\n", strlen(*arr));*/  //�������
//	/*printf("%d\n", strlen(arr[1]));*/   //�������
//	printf("%d\n", strlen(&arr));
//	//���ֵ  
//	printf("%d\n", strlen(&arr + 1));
//	//���ֵ-6
//	printf("%d\n", strlen(&arr[0] + 1));
//	//���ֵ-1
////	system("pause");
////	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", sizeof(arr)); 
//	//�ַ���ĩβ�и���\0����Ϊ 7
//	printf("%d\n", sizeof(arr + 0));
//	//arrΪ��Ԫ�ص�ַ������ӡΪ 4
//	printf("%d\n", sizeof(*arr));
//	//char����   ��Ϊ 1
//	printf("%d\n", sizeof(arr[1]));
//	//1
//	printf("%d\n", sizeof(&arr));
//	//4
//	printf("%d\n", sizeof(&arr + 1));
//	//4
//	printf("%d\n", sizeof(&arr[0] + 1));
//	//4
//
//	printf("%d\n", strlen(arr));
//	//6
//	printf("%d\n", strlen(arr + 0));
//	//6
//	//printf("%d\n", strlen(*arr));
//	//printf("%d\n", strlen(arr[1]));
//	printf("%d\n", strlen(&arr)); 
//	//6
//	printf("%d\n", strlen(&arr + 1));
//	//12
//	printf("%d\n", strlen(&arr[0] + 1));
//	//5
//	system("pause");
//	return 0;
//}
//int main()
//{
//	char* p = "abcdef";
//	printf("%d\n", sizeof(p));
//	//4
//	printf("%d\n", sizeof(p + 1));
//	//4
//	printf("%d\n", sizeof(*p));
//	//1
//	printf("%d\n", sizeof(p[0]));
//	//1
//	printf("%d\n", sizeof(&p));
//	//4
//	printf("%d\n", sizeof(&p + 1));
//	//4
//	printf("%d\n", sizeof(&p[0] + 1));
//	//4
//
//	printf("%d\n", strlen(p));
//	// 6
//	printf("%d\n", strlen(p + 1));
//	// 5
//	/*printf("%d\n", strlen(*p));
//	printf("%d\n", strlen(p[0]));*/ //�������
//	printf("%d\n", strlen(&p));
//	// ���ֵ 
//	printf("%d\n", strlen(&p + 1));
//	// ���ֵ
//	printf("%d\n", strlen(&p[0] + 1));
//	//5
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));
//	//  48 
//	printf("%d\n", sizeof(a[0][0]));
//	//  4
//	printf("%d\n", sizeof(a[0]));
//	// 16
//	printf("%d\n", sizeof(a[0] + 1));
//	// 4
//	printf("%d\n", sizeof(*(a[0] + 1)));
//	// 4
//	printf("%d\n", sizeof(a + 1));
//	//4
//	printf("%d\n", sizeof(*(a + 1))); 
//	//16
//	printf("%d\n", sizeof(&a[0] + 1));
//	//4
//	printf("%d\n", sizeof(*(&a[0] + 1)));
//	//16
//	printf("%d\n", sizeof(*a));
//	//16
//	printf("%d\n", sizeof(a[3]));
//	//16
//	system("pause");
//	return 0;
//}
//�ܽ᣺1. sizeof(������)���������������ʾ�������飬���������������Ĵ�С��
//2. &���������������������ʾ�������飬ȡ��������������ĵ�ַ��
//3. ����֮�����е�����������ʾ��Ԫ�صĵ�ַ��


//����1��
//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int *ptr = (int*)(&a + 1);
//	//&a ��ȥȡ������a�ĵ�ַ,+1���������������飬Ȼ�󽫵�ַǿ��ת��Ϊint* ���͸���*ptr
//	//ptr-1�ǽ�ptrָ��ĵ�ַ����Ų�ĸ��ֽڣ��Ӷ�ָ��5��λ����
//	printf("%d ,%d", *(a + 1), *(ptr - 1));
//	// ���� �����н��Ϊ 2 ��5.
//	system("pause");
//	return 0;
//}
////����2��
//struct Test 
//{ 
//	int Num;
//	char *pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//
//}*p;
//int main()
//{
//	 //���ڻ�ûѧϰ�ṹ�壬�����֪�ṹ��Ĵ�С��20����
//	 //����p ��ֵΪ0x100000�� ���±���ʽ��ֵ�ֱ�Ϊ����?  
//	printf("%p\n", p + 0x1);
//	//p��ʾ�ṹ��ĵ�ַ����һ��ʾ��������ṹ�壬���ṹ���ֽ�Ϊ20�ֽ�
//	//���Դ�ӡΪ:00100014   
//	printf("%p\n", (unsigned long)p + 0x1);
//	//00100001
//	system("pause");
//	return 0;
//}

//����3
//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int *ptr1 = (int*)(&a + 1);
//	//&a ������a�ĵ�ַ���Ӷ�Ϊ 4
//	int *ptr2 = (int*)((int)a + 1);
//	//2000000
//	printf("%d ,%x", ptr1[-1], *ptr2);
//	//4 ,2000000
//	system("pause");
//	return 0;
//}

////���� 4
//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };//���������������ű��ʽ��
//	//a[3][2]={1,3,5};
//	int *p;    
//	p = a[0];  
//	printf("%d", p[0]);
//	//��ӡ��� 1
//	system("pause");
//	return 0;
//}

//����5
//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	//  fffffffc   -4
//	system("pause");
//	return 0;
//}

////���� 6
//int main()
//{ 
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }; 
//	int *ptr1 = (int *)(&aa + 1);    
//	int *ptr2 = (int *)(*(aa + 1));   
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1)); 
//	// 10   6
//	system("pause");
//	return 0; 
//}
//
////���� 7
//
//int main()
//{
//	char *a[] = { "work", "at", "alibaba" };
//	//����һ��ָ�����飬��ŵ������� char* ���͵�ָ��
//	char**pa = a;
//	//����ָ��ָ���char*ָ���ָ��
//	pa++;
//	printf("%s\n", *pa); 
//	//���Ϊ at
//	system("pause");
//	return 0;
//}


//���� 8
//int main()
//{
//	char *c[] = { "ENTER", "NEW", "POINT", "FIRST" };
//	char**cp[] = { c + 3, c + 2, c + 1, c };
//	char***cpp = cp;  printf("%s\n", **++cpp);
//	printf("%s\n", *--*++cpp + 3);
//	printf("%s\n", *cpp[-2] + 3);
//	printf("%s\n", cpp[-1][-1] + 1);
//	system("pause");
//	return 0;
//}


//��ҵ�⣺
//��һ���ַ����������Ϊ:"student a am i",
//	���㽫��������ݸ�Ϊ"i am a student".
//	Ҫ��
//	����ʹ�ÿ⺯����
//	ֻ�ܿ������޸��ռ䣨�ռ�������ַ����ĳ����޹أ���
//#include <assert.h>
//
//int my_strlen(const char* str)
//{
//	int count=0;
//	assert(*str != NULL);
//	while (*str++)
//	{
//		count++;
//	}
//	return count;
//}
//
//void reverse_str(char* left, char* right)
//{
//	assert(left != NULL);
//	assert(right != NULL);
//	while (left < right)
//	{
//		char tem = *left;
//		*left = *right;
//		*right = tem;
//		left++;
//		right--;
//	}
//}
//
//void reverse(char* arr, int n)
//{
//	char* end = arr;
//	reverse_str(arr, arr + n - 1);//���������ַ���
//	//����ÿ���ַ�
//	while (*end != '\0')
//	{
//		char* start = end;
//		while(*end != ' ' && *end != '\0')
//		{
//			end++;
//		}
//		reverse_str(start, end-1);//���򵥴�
//	    if(*end != '\0')
//			end++;
//	}
//}
//int main()
//{
//	char arr[] = "student a am i";
//	int len = my_strlen(arr);
//	reverse(arr, len);
//	printf("%s\n", arr);
//	system("pause");
//	return 0;
//}


///*
//1.��������ʹ����ȫ����λ��ż��ǰ�档
//
//��Ŀ��
//
//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ��*/���������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿�֡�
//������ż��ǰ��

int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9};
	int i = 0;
	int left = 0;
	int sz = sizeof(arr)/sizeof(arr[0]);
	int right = sz-1;

	while(left<right)
	{
		int tmp = 0;
		//�����ż��
		while((left<right)&&(arr[left]%2 == 1))
		{
			left++;
		}
		//�ұ�������
		while((left<right)&&(arr[right]%2==0))
		{
			right--;
		}
		//����
		if(left<right)
		{
			tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
		left++;
		right--;
	}
	for(i=0;i<sz; i++)
	{
		printf("%d ", arr[i]);
	}
	system("pause");
	return 0;
}
