#define _CRT_SECURE_NO_WARNINGS 1
#include <string.h> 
#include<stdlib.h>
#include<stdio.h>
#define NULL 0 
int *p; 
struct node //���ڵ� 
{ 
	char name[20],address[50]; 
	char num[11]; 
	
}; 
struct Node //���ڵ� 
{ 
	char name[20],address[50]; 
	char num[11]; 
	struct node * next; 
}; 
typedef struct node* Lnode; 
typedef struct Node Tnode; 
typedef struct lode
{
	Lnode next;
}lode;
typedef struct{//˳���洢�µĹ�ϣ��
	int size;
    Tnode t[10000];
}Qnode;
typedef struct{//����洢�µĹ�ϣ��
	int size;
	lode L[10000];
}Pnode;
void chuliu()//����ȡ�෨��ѯ�绰����
{
	Qnode W;
	memset(W.t,0,sizeof(W.t));//��ʼ��
	Tnode s;
	printf("����¼�����ݸ�����");
	int n;
	scanf("%d",&n);
    W.size=n;
	//¼��Ԫ��
	printf("��������Ҫ¼���Ԫ�أ�");
	while(n--)
	{
		printf("����  ��ַ  �绰����\n");
		scanf("%s %s %s",s.name,s.address,s.num);
		int i = 3,key; 
		while(s.num[i]!='\0') //�ؼ���
		{ 
			 key+=(s.num[i]-'0'); //�ؼ������
			i++; 
		} 
		key=key%21;
		//����̽����ɢ�д����ͻ
		if(!strcmp(W.t[key].num,""))//���ң������ͻ
			W.t[key]=s;
		else
		{//��һ��û������ף����������ͻ
			int j=1;
			while(strcmp(W.t[(key+j)%21].num,"")) j++;
			W.t[(key+j)%21]=s;
		}
	}
	printf("��������Ҫ���ҵĵ绰���룺");
	//����
	char xnum[11];
	scanf("%s",xnum);
    int i = 3; 
	int key=xnum[2]-'0'; 
	while(xnum[i]!='\0') 
	{ 
		key+=(xnum[i]-'0'); //���
		i++; 
	} 
	key=key%21;
	if(!strcmp(W.t[key].num,xnum))//��һ�β��ң����ֵ���ֱ�Ӹ�ֵ
		printf("%s %s %s\n",W.t[key].name,W.t[key].address,W.t[key].num);
	else 
	{//��һ��û�ҵ�����������
		int j=1;
		while(strcmp(W.t[(key+j)%21].num,xnum)) j++;
		if(j==20)
			printf("����Ԫ�ز����ڣ�");	
		else
			printf("%s %s %s\n",W.t[(key+j)%21].name,W.t[(key+j)%21].address,W.t[(key+j)%21].num);//������ҵ���Ԫ��		
	}
}
void shuzi()//���绰����-���ַ�����
{
    Qnode q1;
	printf("��������Ҫ��������ݸ�����");
	int n,m1,m2;
	memset(q1.t,0,sizeof(q1.t));//��ʼ��
	Tnode s;
	scanf("%d",&n);
	q1.size=n;
	for(int i=0;i<10000;i++)
		strcpy(q1.t[i].num,"");//�ÿ�
	m1=m2=0;
	while(n--)
	{
		printf("��������Ҫ¼���Ԫ�أ�");
		printf("����  ��ַ  �绰����\n");
		scanf("%s %s %s",s.name,s.address,s.num);//��������
        __int64 key;
		key=((__int64)s.num)%10000;
		//�����ͻ������ͬ�ϣ�
		if(!strcmp(q1.t[key].num,""))
			q1.t[key]=s;
		else
		{
			int i=1;
			m1++;
			while(strcmp(q1.t[(key+i)%10000].num,"")) i++;
			q1.t[(key+i)%10000]=s;
		}
	}
    printf("��������Ҫ���ҵĵ绰���룺");
	//����
	char xnum[11];
	scanf("%s",xnum);
    int k= 3; 
	__int64 key=(__int64)xnum; 
	key=key%10000;
	if(!strcmp(q1.t[key].num,xnum))
		printf("%s %s %s",q1.t[key].name,q1.t[key].address,q1.t[key].num);
	else 
	{
		int j=1;
		while(strcmp(q1.t[(key+j)%10000].num,xnum)) j++;
		if(j==20)
			printf("����Ԫ�ز����ڣ�");	
		else
			printf("%s %s %s\n",q1.t[(key+j)%10000].name,q1.t[(key+j)%10000].address,q1.t[(key+j)%10000].num);		
	}
}
void fenxi()
{
	Qnode q2;
	printf("��������Ҫ��������ݸ�����");
	int n,m1,m2;
	memset(q2.t,0,sizeof(q2.t));//��ʼ��
	Tnode s;
	scanf("%d",&n);
	q2.size=n;
	for(int i=0;i<10000;i++)
		strcpy(q2.t[i].name,"");//�ÿ�
	m1=m2=0;
	while(n--)
	{
		printf("��������Ҫ¼���Ԫ�أ�");
		printf("����  ��ַ  �绰����\n");
		scanf("%s %s %s",s.name,s.address,s.num);
        __int64 key;
		key=((__int64)s.name)%10000;
		//�����ͻ
		if(!strcmp(q2.t[key].name,""))
			q2.t[key]=s;
		else
		{
			int i=1;
			m1++;
			while(strcmp(q2.t[(key+i)%10000].name,"")) i++;
			q2.t[(key+i)%10000]=s;
		}
	}
    printf("��������Ҫ���ҵ����֣�");
	//����
	char xname[20];
	scanf("%s",xname);
    int k= 1; 
	__int64 key=(__int64)xname; 
	key=key%10000;
	if(!strcmp(q2.t[key].name,xname))
		printf("%s %s %s",q2.t[key].name,q2.t[key].address,q2.t[key].num);
	else 
	{
		int j=1;
		while(strcmp(q2.t[(key+j)%10000].name,xname)) j++;
		if(j==20)
			printf("����Ԫ�ز����ڣ�");	
		else
			printf("%s %s %s\n",q2.t[(key+j)%10000].name,q2.t[(key+j)%10000].address,q2.t[(key+j)%10000].num);		
	}
}
void menu()
{
	printf("********�绰�����ѯϵͳ********\n");
	printf("        �õ绰�����ѯ 1        \n");
    printf("        ���û�����ѯ   2        \n");
	printf("********************************\n");
	printf("��������Ҫ��ѡ�\n");
	int x,y;
	while(scanf("%d",&x)!=-1)
	{
	   if(x==1)
	   {
		printf("********�绰�����ѯ********\n");
		printf("        ����ȡ�෨ 1        \n");
        printf("        ���ַ����� 2        \n");
        printf("****************************\n");
		printf("������yֵ��\n");
		scanf("%d",&y);
		while(y<3)
		{
			switch(y)
			{
             case 1:chuliu();break;//���ó���ȡ�ຯ��
             case 2:shuzi();break;//�������ַ�������
	         default:printf("����ָ����ڣ�\n");
			}
        printf("********�绰�����ѯ********\n");
		printf("        ����ȡ�෨ 1        \n");
        printf("        ���ַ����� 2        \n");
        printf("****************************\n");
        printf("��������Ҫ��ѡ�\n");
		scanf("%d",&y);
		}
	   }
		else if(x==2)
		{
			printf("********�û�����ѯ ********\n");
			printf("          ������  3        \n");
			printf("****************************\n");
			fenxi();//���÷�������
		}
		else
			printf("���ҷ�ʽ�����ڣ�����������\n");
	}
	}
	int main()//����
	{
		menu();
		return 0;
	}
