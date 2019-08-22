#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void meau()
{
	printf("*******************************\n");
	printf("*******      1.play   *********\n");
	printf("*******      0.exit   *********\n");
	printf("*******************************\n");
}

void game()
{	
	char ret = 0;
	char board[ROW][COL] = { 0 };
	//��ʼ��
	InitBoard(board, ROW, COL);
	//��ӡ����
	DisplayBoard(board, ROW, COL);	
	while (1)
	{
		//�����
		PlayerMove(board, ROW, COL);
		//��ӡ����
		DisplayBoard(board, ROW, COL);
		//�ж������Ӯ
		ret = IsWin(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
		//������
		ComeputerMove(board, ROW, COL);
		//��ӡ����
		DisplayBoard(board, ROW, COL);
		//�ж���Ӯ
		ret = IsWin(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
	}
	if (ret == 'x')
	{
		printf("��Ӯ��\n");
	}
	else if (ret == 'o')
	{
		printf("����Ӯ��\n");
	}
	else if (ret == 'p')
	{
		printf("ƽ��\n");
	}
}

void rent()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		meau();
		printf("���������:> ");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}

	} while (input);	
}
int main()
{
	rent();
	system("pause");
	return 0;
}