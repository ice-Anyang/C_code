#ifndef _HOME_H_
#define _HOME_H_
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define Maxsize 100

typedef struct ANode
{
	int adjchild;//�洢���ӵ�αָ��
	struct ANode *nextchild;//ָ����һ�����ӵ�ָ��
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

typedef struct VNode//��ͷ���
{
	ElemType data;//˫����Ϣ
	int adjparents;//˫�׵�ַ��αָ��
	ArcNode *firstchild;//ָ���һ������

}st;

void CreatTree(int n);//���������Ա
void InputTree(int n);//��������Ա
void InestTree(int n);//���뺢��
void DeleteTree(int n);//ɾ�������Ա
void ReviseTree(int n);//�޸ļ����Ա
void SearchTree(int n);//���¼����Ҽ����Ա
int system(const char *string);//����
#endif/*_HOME_H_*/

