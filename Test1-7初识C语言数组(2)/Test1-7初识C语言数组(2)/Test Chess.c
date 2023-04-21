#define _CRT_SECURE_NO_WARNINGS
#include "Game Chess.h"

//test.c //������Ϸ���߼�
//game.c //��Ϸ��ʵ��
//game.h //�������������ŵĶ���
//������������Ϸ���߼�



void menu()
{
	printf("******************************\n");
	printf("***********1.play*************\n");
	printf("***********0.exit*************\n");
	printf("******************************\n");
}

void game()
{
	//������������
	char ret = 0; 
	char board[ROW][COL] = { 0 };  
	//��ʼ������Ϊȫ�ո�
	InitBoard(board, ROW, COL);
	//��ӡ����
	DisplayBoard(board,ROW,COL);
	//�������
	player_move(board, ROW, COL); 
	DisplayBoard(board, ROW, COL);

	//��������
	computer_move(board, ROW, COL); //�������
	DisplayBoard(board, ROW, COL);
	while (1)
	{
		//�������
		player_move(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�ж���Ӯ
		ret=is_win(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		//��������
		computer_move(board, ROW, COL); //�������
		DisplayBoard(board, ROW, COL);
		ret = is_win(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("���Ӯ��\n");
	}
	else if (ret == "#")
	{
		printf("����Ӯ��\n");
	}
	else  
	{
		printf("ƽ��\n");
	}
}

//ʲô�������Ϸ�ͽ�����
//���Ӯ--'*'
//����Ӯ--'#'
//ƽ����--'Q'
//������--'C'
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//��Ϸ
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input); 
}
  
int main()
{  
	test();
	return 0;
}