#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include"Test.h"
int main()
{
	int n, m;
	printf("ȫ�������Ա������\n");
	scanf("%d", &m);
	while (1)
	{
		printf("��ѡ��1.����.2.��� 3.���� 4.ɾ�� 5.�޸� 6.���� 7.�˳�\n");
		scanf("%d", &n);
		switch (n)
		{
		case 1:
			CreatTree(m); 
			break;
		case 2:
			InputTree(m);
			break;
		case 3:
			InestTree(m);
			break;
		case 4:
			DeleteTree(m); 
			break;
		case 5:
			ReviseTree(m);
			break;
		case 6:
			SearchTree(m);
			break;
		case 7:
			exit(1); 
			break;
		default:
			printf("��������\n"); 
			break;
		}
	}
	return 0;
}