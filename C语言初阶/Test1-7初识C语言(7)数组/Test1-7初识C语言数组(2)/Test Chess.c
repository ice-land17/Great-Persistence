#define _CRT_SECURE_NO_WARNINGS
#include "Game Chess.h"

//test.c //测试游戏的逻辑
//game.c //游戏的实现
//game.h //函数声明，符号的定义
//测试三子棋游戏的逻辑



void menu()
{
	printf("******************************\n");
	printf("***********1.play*************\n");
	printf("***********0.exit*************\n");
	printf("******************************\n");
}

void game()
{
	//存放下棋的数据
	char ret = 0; 
	char board[ROW][COL] = { 0 };  
	//初始化棋盘为全空格
	InitBoard(board, ROW, COL);
	//打印棋盘
	DisplayBoard(board,ROW,COL);
	//玩家下棋
	player_move(board, ROW, COL); 
	DisplayBoard(board, ROW, COL);

	//电脑下棋
	computer_move(board, ROW, COL); //随机下棋
	DisplayBoard(board, ROW, COL);
	while (1)
	{
		//玩家下棋
		player_move(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断输赢
		ret=is_win(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		//电脑下棋
		computer_move(board, ROW, COL); //随机下棋
		DisplayBoard(board, ROW, COL);
		ret = is_win(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢了\n");
	}
	else if (ret == "#")
	{
		printf("电脑赢了\n");
	}
	else  
	{
		printf("平局\n");
	}
}

//什么情况，游戏就结束了
//玩家赢--'*'
//电脑赢--'#'
//平局了--'Q'
//继续玩--'C'
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//游戏
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input); 
}
  
int main()
{  
	test();
	return 0;
}