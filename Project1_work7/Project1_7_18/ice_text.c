#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//1���ǵݹ����n��쳲�������
//int fibon(int n)
//{
//	int a1 = 1;
//	int a2 = 1;
//	int a3 = 0;
//	if (n <= 2)
//	{
//		return 1;
//	}
// else
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
//	printf("�������n��: ");
//	scanf("%d", &n);
//	printf("%d\n", fibon(n));
//	system("pause");
//	return 0;
//}
//�ݹ��㷨���n��쳲�������

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
//
//int main()
//{
//	int n = 0;
//	printf("�������n������");
//	scanf("%d",&n);
//	printf ("%d\n",fibon(n));
//	system("pause");
//	return 0;
//
//}
//
//
//2.��дһ������ʵ��n^k��ʹ�õݹ�ʵ��
//
//int my_power(int a,int b)
//{
//	if (b == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return a * my_power(a , b - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	printf("�����������");
//	scanf("%d", &n);
//	printf("������ָ����");
//	scanf("%d", &k);
//	printf("%d\n",my_power(n, k));
//	system("pause");
//	return 0;
//}
//
//
//3. дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ�
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
//
//
//int DigitSum(int a)
//{
//	
//	if (a == 0)
//	{
//		return 0;
//	}
//	else 
//	{	
//	return a%10 + DigitSum( a/10);		
//	}	
//}
//int main()
//{
//	int n = 0;
//	printf("������һ���Ǹ�������");
//	scanf("%d",&n);
//	printf("%d\n", DigitSum(n));
//	system("pause");
//	return 0;
//}
//
//4. ��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������С�
//Ҫ�󣺲���ʹ��C�������е��ַ�������������
//void reverse_string(char* string)
//{
//	if ('\0' == *string)
//	{
//		printf("%c", *string);
//	}
//	else
//	{
//		reverse_string(++string);
//		printf("%c", *(--string ));
//	}
//	
//
//}

//void Reverse(char arr[], int sz)
//{
//	int left = 0;
//	int right = sz-1;
//
//	while(left<right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[] = {0};
//	scanf("%s", &arr);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Reverse(arr,sz);
//	printf("%s\n", arr);
//	return 0;
//}
 int my_strlen(char* str)
 {
 	if(*str != '\0')
 		return 1+my_strlen(str+1);
 	else
 		return 0;
 }

//void reverse_string(char arr[])
//{
//	int left = 0;
//	int right = my_strlen(arr)-1;
//	while(left<right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}

void reverse_string(char arr[])
{
	int len = my_strlen(arr);
	char tmp = arr[0];//1
	arr[0] = arr[len-1];//2
	arr[len-1] = '\0';
	if(my_strlen(arr+1) >= 2)
		reverse_string(1+arr);
	arr[len-1]= tmp;
}

int main()
{
	char arr[] = "abcdef";
	reverse_string(arr);//fedcba
	printf("%s\n", arr);
	system("pause");
	return 0;
}

//5.�ݹ�ͷǵݹ�ֱ�ʵ��strlen
//
////(1)�ǵݹ�ʵ��
//
//int strlen(char* arr)
//{
//	int count= 0;
//	if ('\0' == *arr)//�ж��Ƿ��ǿ��ַ���
//	{
//		return 0;
//	}
//	else
//	{
//		while (*arr)
//		{
//		count++;
//		arr++;	
//		}
//		return count;
//	}
//}
//int main()
//{
//	char arr[20] = { 0 };
//	scanf("%s", &arr);
//	printf("%d\n", strlen(arr));
//	system("pause");
//	return 0;
//}



//// (2)�ݹ���

//int strlen(char* arr)
//{
//	int i = 0;
//	if ('\0' == *arr)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1 + strlen(arr+1);//�ݹ��󳤶�
//	}
//}
//int main()
//{
//	char arr[20] = { 0 };
//	scanf("%s", &arr);
//	printf("%d\n", strlen(arr));
//	system("pause");
//	return 0;
//}


//6.�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳�
//// �ǵݹ��㷨��
//int fsc_tor(int a)
//{
//	int i = 0;
//	int sum = 1;
//	for (i = 1; i <= a; i++)
//	{
//		sum = i*sum;
//	}
//	return sum;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", fsc_tor(n));
//	system("pause");
//	return 0;
//}
//// �ݹ��㷨
//
//int fsc_tor(int a)
//{
//	if (a == 1)
//	{
//		return 1;
//	}
//	else
//		return a*fsc_tor(a - 1);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", fsc_tor(n));
//	system("pause");
//	return 0;
//}
//7.�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
//void my_stmpet(int n)
//{
//	if (n < 10)
//	{
//		printf("%d\n", n);
//	}
//	else
//	{
//		my_stmpet(n / 10);
//		printf("%d\n", n % 10);
//	}	
//}
//int main()
//{
//	int input = 0;
//	printf("������һ��������");
//	scanf("%d", &input);
//	my_stmpet(input);//��ӡÿһλ����
//	system("pause");
//	return 0;
//}
