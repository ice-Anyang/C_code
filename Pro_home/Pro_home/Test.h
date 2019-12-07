#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"Home.h"
st Pt[Maxsize];//定义结构体数组
/*********************创建家族成员**********************/
void CreatTree(int n)//n是全部人员
{
	system("cls");
	int i, j, p = 0, q = 0, d;
	ArcNode *m = NULL, *w = NULL;
	char namechild[20];
	char nameparents[20];
	for (i = 0; i<n; i++)
	{
		Pt[i].adjparents = 0;
	}
	printf("请依次输入全部家族成员信息:\n");
	for (i = 0; i<n; i++)
	{
		scanf("%s%s%s%s%s%s", Pt[i].data.name, Pt[i].data.sex, Pt[i].data.birthday, Pt[i].data.wifename, Pt[i].data.thing, Pt[i].data.relationship);
	}
	printf("请输入其中一个双亲和他有几个孩子\n");
	scanf("%s%d", nameparents, &d);
	printf("请输入孩子的名字：\n");
	for (i = 0; i<d; i++)
	{
		scanf("%s", namechild);
		for (j = 0; j<n; j++)
		{
			if (strcmp(namechild, Pt[j].data.name) == 0)
			{
				p = j;//孩子的位置 4
			}
			if (strcmp(nameparents, Pt[j].data.name) == 0)
			{
				q = j;//双亲的位置 1
			}
		}
		Pt[p].adjparents = q;
		if (i == 0)
		{
			m = (ArcNode*)malloc(sizeof(ArcNode));
			Pt[q].firstchild = m;
			m->adjchild = p;
			m->nextchild = NULL;
			w = m;
		}
		else
		{
			m = (ArcNode*)malloc(sizeof(ArcNode));
			w->nextchild = m;
			m->adjchild = p;
			w = m;
		}
		w->nextchild = NULL;
	}
	printf("创建成功！\n");
}
/***********************输出家族成员**********************/
void InputTree(int n)

{
	system("cls");
	int a;
	for (int i = 0; i<n; i++)
	{
		ArcNode *w = Pt[i].firstchild;
		printf("[%d]%s %s %s %s %s %s\n", i + 1, Pt[i].data.name, Pt[i].data.sex, Pt[i].data.birthday, Pt[i].data.wifename, Pt[i].data.thing, Pt[i].data.relationship);
		while (w != NULL)
		{
			a = w->adjchild;
			printf("  %s %s %s %s %s %s\n", Pt[a].data.name, Pt[a].data.sex, Pt[a].data.birthday, Pt[a].data.wifename, Pt[a].data.thing, Pt[a].data.relationship);
			w = w->nextchild;
		}
		printf("\n\n");
	}
}
/*********************插入孩子**********************/
void InestTree(int n)
{
	system("cls");
	int p, q;
	ArcNode *m = NULL;
	char namechild[20];
	char nameparents[20];
	printf("请输入要插入的双亲和孩子:\n");
	scanf("%s%s", nameparents, namechild);
	for (int i = 0; i<n; i++)
	{
		if (strcmp(nameparents, Pt[i].data.name) == 0)
		{
			q = i;//双亲位置
		}
		if (strcmp(namechild, Pt[i].data.name) == 0)
		{
			p = i;//孩子的位置
		}
	}
	Pt[p].adjparents = q;	
	m = (ArcNode*)malloc(sizeof(ArcNode));
	m->adjchild = p;
	m->nextchild = Pt[q].firstchild;
	Pt[q].firstchild = m;
	printf("添加成功！\n");
}
/************************删除家族成员***************************/

void DeleteTree(int n)
{
	system("cls");
	char nameDelete[20];
	printf("要删除的家族成员的名字：\n");
	scanf("%s", nameDelete);
	for (int i = 0; i<n; i++)
	{
		if (strcmp(nameDelete, Pt[i].data.name) == 0)
		{
			for (int j = i; j<n - 1; j++)
			{
				Pt[j] = Pt[j + 1];
			}
		}
	}
	printf("删除成功！\n");
}

/*********************修改家族成员*************************/
void ReviseTree(int n)
{
	system("cls");
	char reviseName[20];
	int i, m;
	char name[20];
	char sex[10];
	char birthday[20];
	char wifename[20];
	char thing[100];
	char relationship[30];
	printf("请输入要修改家族成员的名字：\n");
	scanf("%s", reviseName);
	for (i = 0; i<n; i++)
	{
		if (strcmp(reviseName, Pt[i].data.name) == 0)
		{
			printf("请选择要修改家族成员的信息(1.姓名 2.性别 3.出生年月 4.配偶姓名 5.事迹 6.关系)\n");
			scanf("%d", &m);
			switch (m)
			{
			case 1:
				printf("请输入：\n");
				scanf("%s", name);
				strcpy(Pt[i].data.name, name);
				break;
			case 2:
				printf("请输入：\n");
				scanf("%s", sex);
				strcpy(Pt[i].data.sex, sex);
				break;
			case 3:
				printf("请输入：\n");
				scanf("%s", birthday);
				strcpy(Pt[i].data.birthday, birthday);
				break;
			case 4:
				printf("请输入：\n");
				scanf("%s", wifename);
				strcpy(Pt[i].data.wifename, wifename);
				break;
			case 5:
				printf("请输入：\n");
				scanf("%s", thing);
				strcpy(Pt[i].data.thing, thing);
				break;
			case 6:
				printf("请输入：\n");
				scanf("%s", relationship);
				strcpy(Pt[i].data.relationship, relationship);
				break;
			default:
				printf("输入有误！");
 			}
		}
	}
	printf("修改成功！\n");
}

/************查找**************/
void SearchTree(int n)
{
	system("cls");
	int i, k = 0;
	char thing[100];
	printf("请输入家族成员的事迹：\n");
	scanf("%s", thing);
	for (i = 0; i < n; i++)
	{
		k++;
		if (strcmp(thing, Pt[i].data.thing) == 0)
		{
			printf("%s %s %s %s %s %s\n", Pt[i].data.name, Pt[i].data.sex, Pt[i].data.birthday, Pt[i].data.wifename, Pt[i].data.thing, Pt[i].data.relationship);
			break;
		}
	}
	if (k == n&&i != n - 1)
		printf("按事迹没有查到此人，请准确输入此人的事迹。\n");
}

