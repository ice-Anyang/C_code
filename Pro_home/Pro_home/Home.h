#ifndef _HOME_H_
#define _HOME_H_
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define Maxsize 100

typedef struct ANode
{
	int adjchild;//存储孩子的伪指针
	struct ANode *nextchild;//指向下一个孩子的指针
}ArcNode;

typedef struct JDdate
{
	char name[20];
	char sex[10];
	char birthday[20];
	char wifename[20];
	char thing[100];
	char relationship[30];
}ElemType;

typedef struct VNode//表头结点
{
	ElemType data;//双亲信息
	int adjparents;//双亲地址的伪指针
	ArcNode *firstchild;//指向第一个孩子

}st;

void CreatTree(int n);//创建家族成员
void InputTree(int n);//输出家族成员
void InestTree(int n);//插入孩子
void DeleteTree(int n);//删除家族成员
void ReviseTree(int n);//修改家族成员
void SearchTree(int n);//按事迹查找家族成员
int system(const char *string);//清屏
#endif/*_HOME_H_*/

