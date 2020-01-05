#define _CRT_SECURE_NO_WARNINGS 1
#include <string.h> 
#include<stdlib.h>
#include<stdio.h>
#define NULL 0 
int *p; 
struct node //建节点 
{ 
	char name[20],address[50]; 
	char num[11]; 
	
}; 
struct Node //建节点 
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
typedef struct{//顺序表存储下的哈希表
	int size;
    Tnode t[10000];
}Qnode;
typedef struct{//链表存储下的哈希表
	int size;
	lode L[10000];
}Pnode;
void chuliu()//除留取余法查询电话号码
{
	Qnode W;
	memset(W.t,0,sizeof(W.t));//初始化
	Tnode s;
	printf("输入录入数据个数：");
	int n;
	scanf("%d",&n);
    W.size=n;
	//录入元素
	printf("请输入你要录入的元素：");
	while(n--)
	{
		printf("姓名  地址  电话号码\n");
		scanf("%s %s %s",s.name,s.address,s.num);
		int i = 3,key; 
		while(s.num[i]!='\0') //关键字
		{ 
			 key+=(s.num[i]-'0'); //关键字求和
			i++; 
		} 
		key=key%21;
		//线性探测再散列处理冲突
		if(!strcmp(W.t[key].num,""))//查找，解决冲突
			W.t[key]=s;
		else
		{//第一次没解决彻底，继续解决冲突
			int j=1;
			while(strcmp(W.t[(key+j)%21].num,"")) j++;
			W.t[(key+j)%21]=s;
		}
	}
	printf("请输入您要查找的电话号码：");
	//查找
	char xnum[11];
	scanf("%s",xnum);
    int i = 3; 
	int key=xnum[2]-'0'; 
	while(xnum[i]!='\0') 
	{ 
		key+=(xnum[i]-'0'); //求和
		i++; 
	} 
	key=key%21;
	if(!strcmp(W.t[key].num,xnum))//第一次查找，如果值相等直接赋值
		printf("%s %s %s\n",W.t[key].name,W.t[key].address,W.t[key].num);
	else 
	{//第一次没找到，继续查找
		int j=1;
		while(strcmp(W.t[(key+j)%21].num,xnum)) j++;
		if(j==20)
			printf("查找元素不存在！");	
		else
			printf("%s %s %s\n",W.t[(key+j)%21].name,W.t[(key+j)%21].address,W.t[(key+j)%21].num);//输出查找到得元素		
	}
}
void shuzi()//按电话号码-数字分析法
{
    Qnode q1;
	printf("请输入您要输入的数据个数：");
	int n,m1,m2;
	memset(q1.t,0,sizeof(q1.t));//初始化
	Tnode s;
	scanf("%d",&n);
	q1.size=n;
	for(int i=0;i<10000;i++)
		strcpy(q1.t[i].num,"");//置空
	m1=m2=0;
	while(n--)
	{
		printf("请输入您要录入的元素：");
		printf("姓名  地址  电话号码\n");
		scanf("%s %s %s",s.name,s.address,s.num);//读入数据
        __int64 key;
		key=((__int64)s.num)%10000;
		//处理冲突（方法同上）
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
    printf("请输入您要查找的电话号码：");
	//查找
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
			printf("查找元素不存在！");	
		else
			printf("%s %s %s\n",q1.t[(key+j)%10000].name,q1.t[(key+j)%10000].address,q1.t[(key+j)%10000].num);		
	}
}
void fenxi()
{
	Qnode q2;
	printf("请输入您要输入的数据个数：");
	int n,m1,m2;
	memset(q2.t,0,sizeof(q2.t));//初始化
	Tnode s;
	scanf("%d",&n);
	q2.size=n;
	for(int i=0;i<10000;i++)
		strcpy(q2.t[i].name,"");//置空
	m1=m2=0;
	while(n--)
	{
		printf("请输入您要录入的元素：");
		printf("姓名  地址  电话号码\n");
		scanf("%s %s %s",s.name,s.address,s.num);
        __int64 key;
		key=((__int64)s.name)%10000;
		//处理冲突
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
    printf("请输入您要查找的名字：");
	//查找
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
			printf("查找元素不存在！");	
		else
			printf("%s %s %s\n",q2.t[(key+j)%10000].name,q2.t[(key+j)%10000].address,q2.t[(key+j)%10000].num);		
	}
}
void menu()
{
	printf("********电话号码查询系统********\n");
	printf("        用电话号码查询 1        \n");
    printf("        用用户名查询   2        \n");
	printf("********************************\n");
	printf("请输入您要的选项：\n");
	int x,y;
	while(scanf("%d",&x)!=-1)
	{
	   if(x==1)
	   {
		printf("********电话号码查询********\n");
		printf("        除留取余法 1        \n");
        printf("        数字分析法 2        \n");
        printf("****************************\n");
		printf("请输入y值：\n");
		scanf("%d",&y);
		while(y<3)
		{
			switch(y)
			{
             case 1:chuliu();break;//调用除留取余函数
             case 2:shuzi();break;//调用数字分析函数
	         default:printf("输入指令不存在！\n");
			}
        printf("********电话号码查询********\n");
		printf("        除留取余法 1        \n");
        printf("        数字分析法 2        \n");
        printf("****************************\n");
        printf("请输入您要的选项：\n");
		scanf("%d",&y);
		}
	   }
		else if(x==2)
		{
			printf("********用户名查询 ********\n");
			printf("          分析法  3        \n");
			printf("****************************\n");
			fenxi();//调用分析函数
		}
		else
			printf("查找方式不存在！请重新输入\n");
	}
	}
	int main()//函数
	{
		menu();
		return 0;
	}
