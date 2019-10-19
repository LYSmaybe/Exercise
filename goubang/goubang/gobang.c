#include "gobang.h"
void menu()
{
	printf("************************\n");
	printf("******   1.play   ******\n");
	printf("******   0.exit   ******\n");
	printf("************************\n");
}

void Init_board(char board[ROW][COL], int row, int col)
{
	int i, j = 0;
	for (i = 0; i < row ; i++)
	{
		for (j = 0; j < col ; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void Show_board(char board[ROW][COL], int row, int col)
{
	int i, j = 0;
	for (j = 0; j < col; j++)
	{
		for (i = 0; i < row; i++)
		{
			printf(" %c",board[i][j]);
			if (i < row - 1)
				printf(" |");
		}
		printf("\n");
		if (j < col - 1)
		{
			for (i = 0; i < row; i++)
			{
				printf("---");
				if (i < row - 1)
					printf("|");
			}
		}
		printf("\n");
	}
}

char is_win(char board[ROW][COL], int row, int col)
{
	int i, j = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
			return board[i][0];
	}
	for (j = 0; j < col; j++)
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[1][j] != ' ')
			return board[0][j];
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
		return board[0][0];
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
		return board[1][1];
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 'c';
		}
	}
	return 'q';
}

void player_move(char board[ROW][COL], int row, int col)
{
	int i, j = 0;
	printf("玩家走棋，请输入坐标：");
	while (1)
	{
		scanf("%d %d", &i, &j);
		if (i >= 1 && i <= 3 && j >= 1 && j <= 3)
		{
			if (board[i - 1][j - 1] == ' ')
			{
				board[i - 1][j - 1] = '*';
				break;
			}
			else
				printf("此处已落子，请重新输入坐标：");
		}
		else
			printf("越界，请重新输入坐标：");
	}
	Show_board(board, ROW, COL);
}

void computer_move(char board[ROW][COL], int row, int col)
{
	printf("电脑走棋：\n");
	while (1)
	{
		int i = rand() % 3;
		int j = rand() % 3;
		if (board[i][j] == ' ')
		{
			board[i][j] = '#';
			break;
		}
	}
	Show_board(board, ROW, COL);
}

void game()
{
	char board[ROW][COL] = { 0 };
	char ret = 0;
	Init_board(board, ROW, COL);
	Show_board(board, ROW, COL);
	while (1)
	{
		player_move(board, ROW, COL);
		if ((ret = is_win(board, ROW, COL)) == '*')
		{
			printf("玩家赢\n");
			break;
		}
		else if ((ret = is_win(board, ROW, COL)) == 'q')
		{
			printf("平局\n");
			break;
		}
		computer_move(board, ROW, COL);
		if ((ret = is_win(board, ROW, COL)) == '#')
		{
			printf("电脑赢\n");
			break;
		}
		else if ((ret = is_win(board, ROW, COL)) == 'q')
		{
			printf("平局\n");
			break;
		}
	} while ((ret = is_win(board, ROW, COL)) == 'c');
} 