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
	//³õÊ¼»¯
	InitBoard(board, ROW, COL);
	//´òÓ¡ÆåÅÌ
	DisplayBoard(board, ROW, COL);	
	while (1)
	{
		//Íæ¼ÒÍæ
		PlayerMove(board, ROW, COL);
		//´òÓ¡ÆåÅÌ
		DisplayBoard(board, ROW, COL);
		//ÅĞ¶ÏÍæ¼ÒÊäÓ®
		ret = IsWin(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
		//µçÄÔÍæ
		ComeputerMove(board, ROW, COL);
		//´òÓ¡ÆåÅÌ
		DisplayBoard(board, ROW, COL);
		//ÅĞ¶ÏÊäÓ®
		ret = IsWin(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
	}
	if (ret == 'x')
	{
		printf("ÄãÓ®À²\n");
	}
	else if (ret == 'o')
	{
		printf("µçÄÔÓ®ÁË\n");
	}
	else if (ret == 'p')
	{
		printf("Æ½¾Ö\n");
	}
}

void rent()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		meau();
		printf("ÇëÊäÈëĞòºÅ:> ");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("ÍË³öÓÎÏ·\n");
			break;
		default:
			printf("ÊäÈë´íÎó£¬ÇëÖØĞÂÊäÈë\n");
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