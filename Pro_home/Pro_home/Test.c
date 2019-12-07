#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include"Test.h"
int main()
{
	int n, m;
	printf("全部家族成员个数：\n");
	scanf("%d", &m);
	while (1)
	{
		printf("请选择：1.创建.2.输出 3.插入 4.删除 5.修改 6.查找 7.退出\n");
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
			printf("输入有误！\n"); 
			break;
		}
	}
	return 0;
}