#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>


//һ��ָ��Ķ���
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	printf("%d\n", *p);//ָ��p�����a�ĵ�ַ��ͨ����Ӧ���ҵ�p��ָ��ռ��
//	system("pause");
//	return 0;
//}
//

////ָ��+-����
//int main()
//{
//	int arr[4] = { 1, 2, 3, 4 };
//	int* p = arr;//arr��ʾ��Ԫ�ص�ַ
//	p++;
//	printf("%d\n", *p);
//	system("pause");
//	return 0;
//}

//ָ��-ָ��
//int my_strlen(char* p)
//{
//	char* s = p;
//	while (*s != '\0')
//	{
//		s++;
//	}
//	return s - p;
//}
//
//int main()
//{
//	char str[]= "asdf";
//	int len = my_strlen(str);
//	printf("%d\n", len);
//	system("pause");
//	return 0;
//}

void test(const char* str)
{
	printf("%s\n", str);
}
int main() 
{  
	//����ָ��pfun  void (*pfun)(const char*) = test; 
	//����ָ�������pfunArr ���ؿƼ�
	void(*pfunArr[5])(const char* str); 
	pfunArr[0] = test;
	//ָ����ָ������pfunArr��ָ��ppfunArr
	void (*(*ppfunArr)[10])(const char*) = &pfunArr;  return 0; 
}