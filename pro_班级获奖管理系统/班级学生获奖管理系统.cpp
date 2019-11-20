#include"stdio.h"        //标准的输入输出函数文件头部说明  
#include"math.h"              // 数学函数头部说明  
#include"string.h"  
#include"stdlib.h"    //通过该函数头部里的函数，改变控制台的背景和颜色  
#include"windows.h"    //头文件声明，下文用到了改变控制台的宽度和高度  
#define M 100            //宏定义说明 
struct student
{    //结构体定义并声明  
	char num[25];     //学号
 	char name[25];     //姓名 
 	char xing[];      //性别 
	int special;      //专业 
   	int banji;    //班级
  	char jiangxiang[35];   //奖项  
};
//****************************************函数的声明********************************************  
void input(struct student stu[M]);     //输入函数  
void output(struct student stu[M]);     //输出函数 
void lookfor(struct student stu[M]);    //查询函数  
void modify(struct student stu[M]);     //修改函数    
void delete_student(struct student stu[M]);   //删除函数  
void xuehao(struct student stu[M]);  //学号     
void xingming(struct student stu[M]);  //姓名 
void fileread(struct student stu[M]);  
void filewrite(struct student stu[M]);  
void yanshi(char *p);        //延时函数说明  
//**********************************************************************************************
int count=0;  
struct student t;  
int main() 
{ 
    int choice,sum;  
    struct student stu[M];
    system("color 0b");      //调节控制台的背景和字体颜色 
point1:    
    sum=0;  
    do
	{  
    printf("\t\t\t\t\t\t\t\t-------------------------------------------------\n");  
    printf("\t\t\t\t\t\t\t\t\t+       学生班级获奖管理系统            +\n");  
    printf("\t\t\t\t\t\t\t\t-------------------------------------------------\n");  
    printf("\t\t\t\t\t\t\t\t\t\t ***************\n");  
    printf("\t\t\t\t\t\t\t\t\t\t 1、添加学生信息\n");  
    printf("\t\t\t\t\t\t\t\t\t\t 2、浏览学生信息\n");  
    printf("\t\t\t\t\t\t\t\t\t\t 3、查询学生信息\n");  
    printf("\t\t\t\t\t\t\t\t\t\t 4、修改学生信息\n");  
    printf("\t\t\t\t\t\t\t\t\t\t 5、删除学生信息\n");     
    printf("\t\t\t\t\t\t\t\t\t\t 6、读取文件学生\n");                  //从文件读取  
    printf("\t\t\t\t\t\t\t\t\t\t 7、保存到文件\n");                    //保存到文件  
    printf("\t\t\t\t\t\t\t\t\t\t 8、退出系统\n");     
    printf("\t\t\t\t\t\t\t\t\t\t ***************\n");   
    printf("请输入你的选择\n");  
    scanf("%d",&choice);
	if (choice>8||choice<=0)  
    {  
    sum++;  
    if (sum>=5)  
    {  
    printf("输入错误次数过多,程序将重新开始\n");  
    system("pause");        //程序暂停  
    system("cls");   //清屏语句  
    goto point1;  
    }  
    }  
    switch (choice)       //根据选择，调用不同的函数来完成不同的任务  
    {  
    case 1:input(stu);break;         
    case 2:output(stu);break;  
    case 3:lookfor(stu);break;  
    case 4:modify(stu);break;  
    case 5:delete_student(stu);break;    
    case 6:fileread(stu);break;  
    case 7:filewrite(stu);;break;  
    case 8:printf("感谢你使用学生信息管理系统,请关掉程序!!!\n");system("pause");break;  
    default:printf("无效的选择!!!请重新输入!!!\n");break;  
    }  
    }
	while (choice!=8);  
    printf("the program is over!!!\n");  
    return 0;  
}  
void input(struct student stu[M])      //自定义输入函数 
{
    int len;  
    system("cls");  
    printf("请添加要输入学生的信息\n"); 
	do 
	{  
    printf("请输入由10位数字组成的学生学号\n");   //do-while循环应用，提示输入位数为一确定数  
    scanf("%s",&stu[count].num);  
    len=strlen(stu[count].num); 
	}
	while(len!=10);
	printf("请输入同学的姓名 ；\n"); 
 	scanf("%s",&stu[count].name); 
	printf("请输入性别:\n");
	scanf("%s",&stu[count].xing);
	printf("请输入所需要的专业代号：1、计算机科学与技术 2、软件工程 3、网络工程\n");  //采用如此方法解决了专业输入难问题
	scanf("%d",&stu[count].special);
	printf("请输入对应的学生班级:1、1701  2、1702 \n");  
    scanf("%d",&stu[count].banji);
	printf("请输入对应同学的奖项 ；\n");
	scanf("%s",&stu[count].jiangxiang); 
	count++; 
} 
void output(struct student stu[M])     //自定义输出函数 
{  
    int j;  
    system("cls");  
    if (count==0)  
    {  
    printf("当前已存学生信息为0个\n");  
    return;  
    } 
    for (j=0;j<count;j++)  
    {  
    printf("学号\t\t   姓名\t\t性别\t专业\t班级\t\t\t奖项\n"); 
 	for (j=0;j<count;j++)
	{       //for循环控制输出的个数  
    printf("%s\t",stu[j].num);  
    printf("%s\t",stu[j].name);
    printf("%s\t",stu[j].xing);  	
	if (stu[j].special==1) 
	printf("计算机科学与技术\t");  
    else if (stu[j].special==2)  
    printf("软件工程\t");
	else  
    printf("网络工程\t");	
	if(stu[j].banji==1)
	printf("1701\t"); 
	else if(stu[j].banji==2)
	printf("1702\t");
	printf("%s\t",stu[j].jiangxiang);
	}
	}
}
void lookfor(struct student stu[M])      //自定义查询学生信息函数 
{  
    int j,flag=0;  
    char xh[25];  
    system("cls");  
    if (count==0)  
    {  
    printf("当前已存学生信息为0个,无法查询!!!\n");  
    return;  
    } 
    else  
    {  
    printf("请输入你想要查看的同学学号\n");  
    scanf("%s",&xh);  
    fflush(stdin);  
    for (j=0;j<count;j++)  
    {  
    if (strcmp(stu[j].num,xh)==0)       //通过字符函数对已存入的学生信息进行比较,找出要查看的学生  
    {  
    printf("学号\t\t   姓名\t\t性别\t专业\t班级\t\t\t奖项\n"); 
    printf("%s\t",stu[j].num);  
    printf("%s\t",stu[j].name);
    printf("%s\t",stu[j].xing);
    if (stu[j].special==1)  
    printf("计算机科学\t");  
    else if (stu[j].special==2)  
    printf("通信工程\t");      
    else  
    printf("网络工程\t");   
	if(stu[j].banji==1)
	printf("1701\t"); 
	else if(stu[j].banji==2)
	printf("1702\t"); 
	printf("%s\t",stu[j].jiangxiang);
	}  
    }  
    if (j==count)  
    printf("很抱歉,没有你所需要的学生信息\n"); 
}
}
void modify(struct student stu[M])    //自定义修改函数
{  
    int j,flag=0,course;  
    char xh[25];  
    system("cls");  
    if (count==0)  
    {  
    printf("当前已存学生信息为0个,无法修改!!!\n");  
    return;  
    }
	else  
    {  
    printf("请输入你想要修改的同学学号\n");  
    scanf("%s",&xh);  
    fflush(stdin);  
    for (j=0;j<count;j++)
    if (strcmp(stu[j].num,xh)==0)
    printf("你确定要修改学生的信息吗???如果不确定的话,请关掉本程序吧!!!\n");
	printf("要修改的信息；1、姓名 2、性别 3、专业 4、班级 5、奖项\n");
	scanf("%d",&course); 
	printf("请输入你想要修改信息 \n");
	switch(course)  
    {  
    case 1:scanf("%s",&stu[j].name);break;  
    case 2:scanf("%s",&stu[j].xing);break;        //switch控制语句  
    case 3:scanf("%s",&stu[j].special);break;  
    case 4:scanf("%s",&stu[j].banji);break;  
    case 5:scanf("%s",&stu[j].jiangxiang);break;  
    default:printf("无效的选择!!!请重新输入!!!\n");break;  
    }   
    }
}
void delete_student(struct student stu[M])        //自定义删除函数 
{  
    int choice;  
    system("cls");  
    if (count==0)  
    {  
    printf("当前已存学生信息为0个,无法删除!!!\n");  
    return;  
    }
    else  
    {  
    printf("请选择你所要删除的方式:1、学号 2、姓名(如果你的姓名是中文,那么无法删除,请选择学号删除) 3、取消\n");  
    scanf("%d",&choice);  
    switch(choice)            //switch语句对用户要删除的方式进行选择  
    {  
    case 3:return;break;  
    case 2:xingming(stu);break;         //用户自定义函数之间的套用  
    case 1:xuehao(stu);break;  
    default:printf("无效的选择!!!请重新输入!!!\n");break;  
    }  
    }  
} 
void xuehao(struct student stu[M])           //自定义通过学号方式删除学生信息函数  
{  
    int j,index=0,k=count;  
    char xh[25];  
    system("cls");  
    printf("请输入你想要删除的同学学号\n");  
    scanf("%s",xh);  
    fflush(stdin);  
    for (j=0;j<count;j++)  
    { if (strcmp(stu[j].num,xh)==0)  
    {     
    for (j=index;j<count;j++)  
    stu[j]=stu[j+1];  
    count--;  
    if (count<k)  
    printf("你已经删除成功\n");  
    }  
    index++;}  
    if (j==count)  
    printf("抱歉!!!没有你所需要删除的学生信息!*_*!\n");  
}
void xingming(struct student stu[M])           //自定义通过姓名方式删除学生信息函数  
{  
    int flag=0,j,k=count;  
    char xm[25];  
    system("cls");  
    printf("请输入你想要删除的同学姓名\n");  
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
    printf("你已经删除成功\n");  
    }     
    flag++;}  
    if (j==count)  
    printf("抱歉!!!没有你所需要删除的学生信息!*_*!\n");  
} 
void yanshi(char *p)              //延时函数的定义  
{  
    while (1)  
    {  
    if (*p!=0)  
    printf("%c",*p++);  
    else  
    break;  
    Sleep(100);               //延时控制间断语句  
    }  
}  
void filewrite(struct student stu[M])                   //写入文件函数定义  
{  
    int j=0;  
    char c;  
    FILE *fp;  
    printf("请选择是否要存入已输入的学生信息:'y'还是'n'???\n");  
    scanf("%c",&c);  
    fflush(stdin);  
    while(c!='y'&&c!='n'){  
    if (c!='y'&&c!='n')  
    printf("输入错误,请重新输入\n");  
    printf("以下操作将会覆盖已存储的数据,确定请输入'y'或'n'???\n");  
    scanf("%c",&c);  
    fflush(stdin);  
    }  
    if (c=='y')  
    {  
    if((fp=fopen("d:\\stu.dat","wb"))==NULL)  
    {  
        printf("文件打开错误,程序无法进行\n");  
        exit(0);  
    }  
    for(j=0;j<count;j++)  
      {fwrite(&stu[j],sizeof(struct student),1,fp);  
    }  
    fclose(fp);  
    if(count==0)  
        printf("没有文件，无法保存\n");  
    else  
    printf("数据存储完毕\n");  
    system("pause");  
    }  
    else  
        return;  
}
void fileread(struct student stu[M])                    //读取文件信息函数定义  
{  
    int j=0;  
    char c;  
    FILE *fp;  
    system("cls");  
    printf("请选择是否要存入已输入的学生信息:'y'还是'n'???\n");  
    scanf("%c",&c);  
    fflush(stdin);  
    while(c!='y'&&c!='n'){  
    if (c!='y'&&c!='n')  
    printf("输入错误,请重新输入\n");  
    printf("以下操作将会覆盖已存储的数据,确定请输入'y'或'n'???\n");  
    scanf("%c",&c);  
    fflush(stdin);  
    }  
    if (c=='y')  
    {  
    if((fp=fopen("d:\\stu.dat","rb"))==NULL)  
    {  
        printf("文件打开错误,程序无法进行\n");  
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
    printf("数据读取完毕!!!\n");  
    system("pause");  
    }  
    else  
    return;  
}
 


 
 
	


