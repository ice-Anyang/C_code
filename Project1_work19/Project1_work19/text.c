#define _CRT_SECURE_NO_WARNINGS 1
//1.ʵ��һ�����������������ַ����е�k���ַ���
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB
#include <stdio.h>
#include <string.h>
#include <assert.h>


//a b c d
//d b c a
//
//void left_move(char arr[], int k)
//{
//	int i = 0;
//	int len = strlen(arr);
//	for(i=0; i<k; i++)
//	{
//		//����ת1���ַ�
//		int j = 0;
//		//1. �����һ��
//		char tmp = arr[0];
//		//2. ��ǰ�ƶ�
//		for(j=0; j<len-1; j++)
//		{
//			arr[j] = arr[j+1];
//		}
//		//3. �ѵ�һ����������λ��
//		arr[len-1] = tmp;
//	}
//}

//void reverse(char*left, char*right)
//{
//	assert(left && right);
//	while(left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void left_move(char arr[], int k)
//{
//	int len = strlen(arr);
//	reverse(arr, arr+k-1);
//	reverse(arr+k, arr+len-1);
//	reverse(arr, arr+len-1);
//}
//
//
//int main()
//{
//	char arr[] = "abcdef";
//	//cdefab
//	left_move(arr, 2);
//	printf("%s\n", arr);
//	return 0;
//}

//�ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//	���磺����s1 =AABCD��s2 = BCDAA������1
//	����s1=abcd��s2=ACBD������0.
//
//	AABCD����һ���ַ��õ�ABCDA
//	AABCD���������ַ��õ�BCDAA
//
//	AABCD����һ���ַ��õ�DAABC
//
//int is_left_move(char* str1, char* str2)
//{
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//
//	if(len1 != len2)
//		return 0;
//	strncat(str1, str1, len1);
//	if(strstr(str1, str2) == NULL)
//		return 0;
//	else
//		return 1;
//}
//
//int main()
//{
//	//abcdefabcdef
//	//cdefab
//	char arr1[20] = "abcdef";//abcdefabcdef
//	char arr2[] = "cdefgh";
//	if(is_left_move(arr1, arr2) == 1)
//		printf("yes\n");
//	else
//		printf("no\n");
//	return 0;
//}
//

//1.һ��������ֻ�����������ǳ���һ�Σ�
//	�����������ֶ����������Ρ�
//	�ҳ�������ֻ����һ�ε����֣����ʵ�֡�
//
//void find_two_diff_num(int arr[], int sz, int*p1, int *p2)
//{
//	int ret = 0;
//	int pos = 0; int i = 0;
//	for(i=0; i<sz; i++)
//	{
//		ret ^= arr[i];
//	}
//	//2. �ҳ����������һλΪ1
//	for(i=0; i<32; i++)
//	{
//		if(((ret >> i)&1)==1)
//		{
//			pos = i;
//			break;
//		}
//	}
//	//3. ����
//	for(i=0; i<sz; i++)
//	{
//		if(((arr[i]>>pos)&1) == 1)
//			*p1 ^= arr[i];
//	}
//	*p2 = *p1^ret;
//}
//
//int main()
//{
//	int arr[] = {1,2,3,4,1,2,3,4,5,6};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int num1 = 0;
//	int num2 = 0;
//	//�����Ͳ���
//	find_two_diff_num(arr, sz, &num1, &num2);
//	printf("num1 = %d num2 = %d\n", num1, num2);
//
//	//1 1 2 2 3 3 4 4 5 6
//	//5^6
//	//101
//	//110
//	//
//	//1 1 4 4 5
//	//2 2 3 3 6
//	//011
//	
//	return 0;
//}

//
//2.����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ��
//	��20Ԫ�����Զ�����ˮ��
//	���ʵ�֡�
//
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d", &money);
//
//	if (money>0)
//		total = money * 2 - 1;
//	else
//		total = 0;
//
//	/*total += money;
//	empty = money;
//	while(empty>=2)
//	{
//	total += empty/2;
//	empty = empty/2 + empty%2;
//	}*/
//
//	printf("%d\n", total);
//	return 0;
//}
//1.ģ��ʵ��strncpy
/*char* my_strncpy(char* str1, char* str2, int n)
{
	assert(str1 != NULL);
	assert(str2 != NULL);
	assert(n > 0);
	char *cpy = str1;
	while (n--)
	{
		*str1++ = *str2++;
	}
	return cpy;
}
int main()
{
	char str1[30] = "asdf";
	char str2 [10]= "ghjkl";
	int  n = 0;
	scanf("%d", &n);
	char* p = my_strncpy(str1, str2, n);
	printf("%s\n", p);
	system("pause");
	return 0;

}*/	
//2.ģ��ʵ��strncat

//void My_strncat(char *des, char *scr, int num)
//{
//	assert(des != NULL);
//	assert(scr != NULL);
//	while (*des)
//	{
//		*des++;
//	}//�ҵ�Ŀ���ַ�����'\0'����ʼ����
//	while (num && (*des++ = *scr++))
//	{
//		num--;
//	}
//	des = NULL;
//}
//
//int main()
//{
//	char str1[] = "i am a student";
//	char str2[20] = { "fgys" };
//	strncat(str2, str1, 6);
//	My_strncat(str2, str1, 6);
//	printf("%s", str2);
//	system("pause");
//	return 0;
//}

//3.ģ��ʵ��strncmp
int My_strncmp(char *des, char *scr, int num)
{
	int ret = 0;
	assert(des != NULL);
	assert(scr != NULL);
	while ((*scr == *des) && num)
	{
		if (*des == '\0')
		{
			return 0;
		}
		scr++;
		des++;
	}
	return *des - *scr;
}

int main()
{
	char str1[] = "i am a student";
	char str2[20] = { "fgys" };
	int res = My_strncmp(str1, str2, 6);
	if (res > 0)
	{
		printf("str1>srt2");
	}
	else if (res < 0)
	{
		printf("str1<str2");
	}
	else{
		printf("str1=str2");
	}
	system("pause");
	return 0;
}