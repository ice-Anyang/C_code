#include"stdio.h"        //��׼��������������ļ�ͷ��˵��  
#include"math.h"              // ��ѧ����ͷ��˵��  
#include"string.h"  
#include"stdlib.h"    //ͨ���ú���ͷ����ĺ������ı����̨�ı�������ɫ  
#include"windows.h"    //ͷ�ļ������������õ��˸ı����̨�Ŀ�Ⱥ͸߶�  
#define M 100            //�궨��˵�� 
struct student
{    //�ṹ�嶨�岢����  
	char num[25];     //ѧ��
 	char name[25];     //���� 
 	char xing[];      //�Ա� 
	int special;      //רҵ 
   	int banji;    //�༶
  	char jiangxiang[35];   //����  
};
//****************************************����������********************************************  
void input(struct student stu[M]);     //���뺯��  
void output(struct student stu[M]);     //������� 
void lookfor(struct student stu[M]);    //��ѯ����  
void modify(struct student stu[M]);     //�޸ĺ���    
void delete_student(struct student stu[M]);   //ɾ������  
void xuehao(struct student stu[M]);  //ѧ��     
void xingming(struct student stu[M]);  //���� 
void fileread(struct student stu[M]);  
void filewrite(struct student stu[M]);  
void yanshi(char *p);        //��ʱ����˵��  
//**********************************************************************************************
int count=0;  
struct student t;  
int main() 
{ 
    int choice,sum;  
    struct student stu[M];
    system("color 0b");      //���ڿ���̨�ı�����������ɫ 
point1:    
    sum=0;  
    do
	{  
    printf("\t\t\t\t\t\t\t\t-------------------------------------------------\n");  
    printf("\t\t\t\t\t\t\t\t\t+       ѧ���༶�񽱹���ϵͳ            +\n");  
    printf("\t\t\t\t\t\t\t\t-------------------------------------------------\n");  
    printf("\t\t\t\t\t\t\t\t\t\t ***************\n");  
    printf("\t\t\t\t\t\t\t\t\t\t 1�����ѧ����Ϣ\n");  
    printf("\t\t\t\t\t\t\t\t\t\t 2�����ѧ����Ϣ\n");  
    printf("\t\t\t\t\t\t\t\t\t\t 3����ѯѧ����Ϣ\n");  
    printf("\t\t\t\t\t\t\t\t\t\t 4���޸�ѧ����Ϣ\n");  
    printf("\t\t\t\t\t\t\t\t\t\t 5��ɾ��ѧ����Ϣ\n");     
    printf("\t\t\t\t\t\t\t\t\t\t 6����ȡ�ļ�ѧ��\n");                  //���ļ���ȡ  
    printf("\t\t\t\t\t\t\t\t\t\t 7�����浽�ļ�\n");                    //���浽�ļ�  
    printf("\t\t\t\t\t\t\t\t\t\t 8���˳�ϵͳ\n");     
    printf("\t\t\t\t\t\t\t\t\t\t ***************\n");   
    printf("���������ѡ��\n");  
    scanf("%d",&choice);
	if (choice>8||choice<=0)  
    {  
    sum++;  
    if (sum>=5)  
    {  
    printf("��������������,�������¿�ʼ\n");  
    system("pause");        //������ͣ  
    system("cls");   //�������  
    goto point1;  
    }  
    }  
    switch (choice)       //����ѡ�񣬵��ò�ͬ�ĺ�������ɲ�ͬ������  
    {  
    case 1:input(stu);break;         
    case 2:output(stu);break;  
    case 3:lookfor(stu);break;  
    case 4:modify(stu);break;  
    case 5:delete_student(stu);break;    
    case 6:fileread(stu);break;  
    case 7:filewrite(stu);;break;  
    case 8:printf("��л��ʹ��ѧ����Ϣ����ϵͳ,��ص�����!!!\n");system("pause");break;  
    default:printf("��Ч��ѡ��!!!����������!!!\n");break;  
    }  
    }
	while (choice!=8);  
    printf("the program is over!!!\n");  
    return 0;  
}  
void input(struct student stu[M])      //�Զ������뺯�� 
{
    int len;  
    system("cls");  
    printf("�����Ҫ����ѧ������Ϣ\n"); 
	do 
	{  
    printf("��������10λ������ɵ�ѧ��ѧ��\n");   //do-whileѭ��Ӧ�ã���ʾ����λ��Ϊһȷ����  
    scanf("%s",&stu[count].num);  
    len=strlen(stu[count].num); 
	}
	while(len!=10);
	printf("������ͬѧ������ ��\n"); 
 	scanf("%s",&stu[count].name); 
	printf("�������Ա�:\n");
	scanf("%s",&stu[count].xing);
	printf("����������Ҫ��רҵ���ţ�1���������ѧ�뼼�� 2��������� 3�����繤��\n");  //������˷��������רҵ����������
	scanf("%d",&stu[count].special);
	printf("�������Ӧ��ѧ���༶:1��1701  2��1702 \n");  
    scanf("%d",&stu[count].banji);
	printf("�������Ӧͬѧ�Ľ��� ��\n");
	scanf("%s",&stu[count].jiangxiang); 
	count++; 
} 
void output(struct student stu[M])     //�Զ���������� 
{  
    int j;  
    system("cls");  
    if (count==0)  
    {  
    printf("��ǰ�Ѵ�ѧ����ϢΪ0��\n");  
    return;  
    } 
    for (j=0;j<count;j++)  
    {  
    printf("ѧ��\t\t   ����\t\t�Ա�\tרҵ\t�༶\t\t\t����\n"); 
 	for (j=0;j<count;j++)
	{       //forѭ����������ĸ���  
    printf("%s\t",stu[j].num);  
    printf("%s\t",stu[j].name);
    printf("%s\t",stu[j].xing);  	
	if (stu[j].special==1) 
	printf("�������ѧ�뼼��\t");  
    else if (stu[j].special==2)  
    printf("�������\t");
	else  
    printf("���繤��\t");	
	if(stu[j].banji==1)
	printf("1701\t"); 
	else if(stu[j].banji==2)
	printf("1702\t");
	printf("%s\t",stu[j].jiangxiang);
	}
	}
}
void lookfor(struct student stu[M])      //�Զ����ѯѧ����Ϣ���� 
{  
    int j,flag=0;  
    char xh[25];  
    system("cls");  
    if (count==0)  
    {  
    printf("��ǰ�Ѵ�ѧ����ϢΪ0��,�޷���ѯ!!!\n");  
    return;  
    } 
    else  
    {  
    printf("����������Ҫ�鿴��ͬѧѧ��\n");  
    scanf("%s",&xh);  
    fflush(stdin);  
    for (j=0;j<count;j++)  
    {  
    if (strcmp(stu[j].num,xh)==0)       //ͨ���ַ��������Ѵ����ѧ����Ϣ���бȽ�,�ҳ�Ҫ�鿴��ѧ��  
    {  
    printf("ѧ��\t\t   ����\t\t�Ա�\tרҵ\t�༶\t\t\t����\n"); 
    printf("%s\t",stu[j].num);  
    printf("%s\t",stu[j].name);
    printf("%s\t",stu[j].xing);
    if (stu[j].special==1)  
    printf("�������ѧ\t");  
    else if (stu[j].special==2)  
    printf("ͨ�Ź���\t");      
    else  
    printf("���繤��\t");   
	if(stu[j].banji==1)
	printf("1701\t"); 
	else if(stu[j].banji==2)
	printf("1702\t"); 
	printf("%s\t",stu[j].jiangxiang);
	}  
    }  
    if (j==count)  
    printf("�ܱ�Ǹ,û��������Ҫ��ѧ����Ϣ\n"); 
}
}
void modify(struct student stu[M])    //�Զ����޸ĺ���
{  
    int j,flag=0,course;  
    char xh[25];  
    system("cls");  
    if (count==0)  
    {  
    printf("��ǰ�Ѵ�ѧ����ϢΪ0��,�޷��޸�!!!\n");  
    return;  
    }
	else  
    {  
    printf("����������Ҫ�޸ĵ�ͬѧѧ��\n");  
    scanf("%s",&xh);  
    fflush(stdin);  
    for (j=0;j<count;j++)
    if (strcmp(stu[j].num,xh)==0)
    printf("��ȷ��Ҫ�޸�ѧ������Ϣ��???�����ȷ���Ļ�,��ص��������!!!\n");
	printf("Ҫ�޸ĵ���Ϣ��1������ 2���Ա� 3��רҵ 4���༶ 5������\n");
	scanf("%d",&course); 
	printf("����������Ҫ�޸���Ϣ \n");
	switch(course)  
    {  
    case 1:scanf("%s",&stu[j].name);break;  
    case 2:scanf("%s",&stu[j].xing);break;        //switch�������  
    case 3:scanf("%s",&stu[j].special);break;  
    case 4:scanf("%s",&stu[j].banji);break;  
    case 5:scanf("%s",&stu[j].jiangxiang);break;  
    default:printf("��Ч��ѡ��!!!����������!!!\n");break;  
    }   
    }
}
void delete_student(struct student stu[M])        //�Զ���ɾ������ 
{  
    int choice;  
    system("cls");  
    if (count==0)  
    {  
    printf("��ǰ�Ѵ�ѧ����ϢΪ0��,�޷�ɾ��!!!\n");  
    return;  
    }
    else  
    {  
    printf("��ѡ������Ҫɾ���ķ�ʽ:1��ѧ�� 2������(����������������,��ô�޷�ɾ��,��ѡ��ѧ��ɾ��) 3��ȡ��\n");  
    scanf("%d",&choice);  
    switch(choice)            //switch�����û�Ҫɾ���ķ�ʽ����ѡ��  
    {  
    case 3:return;break;  
    case 2:xingming(stu);break;         //�û��Զ��庯��֮�������  
    case 1:xuehao(stu);break;  
    default:printf("��Ч��ѡ��!!!����������!!!\n");break;  
    }  
    }  
} 
void xuehao(struct student stu[M])           //�Զ���ͨ��ѧ�ŷ�ʽɾ��ѧ����Ϣ����  
{  
    int j,index=0,k=count;  
    char xh[25];  
    system("cls");  
    printf("����������Ҫɾ����ͬѧѧ��\n");  
    scanf("%s",xh);  
    fflush(stdin);  
    for (j=0;j<count;j++)  
    { if (strcmp(stu[j].num,xh)==0)  
    {     
    for (j=index;j<count;j++)  
    stu[j]=stu[j+1];  
    count--;  
    if (count<k)  
    printf("���Ѿ�ɾ���ɹ�\n");  
    }  
    index++;}  
    if (j==count)  
    printf("��Ǹ!!!û��������Ҫɾ����ѧ����Ϣ!*_*!\n");  
}
void xingming(struct student stu[M])           //�Զ���ͨ��������ʽɾ��ѧ����Ϣ����  
{  
    int flag=0,j,k=count;  
    char xm[25];  
    system("cls");  
    printf("����������Ҫɾ����ͬѧ����\n");  
    scanf("%s",xm);  
    fflush(stdin);  
    for (j=0;j<count;j++)  
    {  
    if (strcmp(stu[j].num,xm)==0)  
    {  
  
    for (j=flag-1;j<count;j++)               
    stu[j]=stu[j+1];  
    count--;  
    if (count<k)  
    printf("���Ѿ�ɾ���ɹ�\n");  
    }     
    flag++;}  
    if (j==count)  
    printf("��Ǹ!!!û��������Ҫɾ����ѧ����Ϣ!*_*!\n");  
} 
void yanshi(char *p)              //��ʱ�����Ķ���  
{  
    while (1)  
    {  
    if (*p!=0)  
    printf("%c",*p++);  
    else  
    break;  
    Sleep(100);               //��ʱ���Ƽ�����  
    }  
}  
void filewrite(struct student stu[M])                   //д���ļ���������  
{  
    int j=0;  
    char c;  
    FILE *fp;  
    printf("��ѡ���Ƿ�Ҫ�����������ѧ����Ϣ:'y'����'n'???\n");  
    scanf("%c",&c);  
    fflush(stdin);  
    while(c!='y'&&c!='n'){  
    if (c!='y'&&c!='n')  
    printf("�������,����������\n");  
    printf("���²������Ḳ���Ѵ洢������,ȷ��������'y'��'n'???\n");  
    scanf("%c",&c);  
    fflush(stdin);  
    }  
    if (c=='y')  
    {  
    if((fp=fopen("d:\\stu.dat","wb"))==NULL)  
    {  
        printf("�ļ��򿪴���,�����޷�����\n");  
        exit(0);  
    }  
    for(j=0;j<count;j++)  
      {fwrite(&stu[j],sizeof(struct student),1,fp);  
    }  
    fclose(fp);  
    if(count==0)  
        printf("û���ļ����޷�����\n");  
    else  
    printf("���ݴ洢���\n");  
    system("pause");  
    }  
    else  
        return;  
}
void fileread(struct student stu[M])                    //��ȡ�ļ���Ϣ��������  
{  
    int j=0;  
    char c;  
    FILE *fp;  
    system("cls");  
    printf("��ѡ���Ƿ�Ҫ�����������ѧ����Ϣ:'y'����'n'???\n");  
    scanf("%c",&c);  
    fflush(stdin);  
    while(c!='y'&&c!='n'){  
    if (c!='y'&&c!='n')  
    printf("�������,����������\n");  
    printf("���²������Ḳ���Ѵ洢������,ȷ��������'y'��'n'???\n");  
    scanf("%c",&c);  
    fflush(stdin);  
    }  
    if (c=='y')  
    {  
    if((fp=fopen("d:\\stu.dat","rb"))==NULL)  
    {  
        printf("�ļ��򿪴���,�����޷�����\n");  
        exit(0);  
    }  
    fread(&stu[j],sizeof(struct student),1,fp);   
    count=0;  
    count++;  
    j++;  
    while(fread(&stu[j],sizeof(struct student),1,fp))  
    {  
        j++;  
        count++;  
    }  
    fclose(fp);  
    printf("���ݶ�ȡ���!!!\n");  
    system("pause");  
    }  
    else  
    return;  
}
 


 
 
	


