#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define ROW 3
#define COL 3

void menu();
void game();

void Init_board(char board[ROW][COL], int row, int col);
void Show_board(char board[ROW][COL], int row, int col);
void player_move(char board[ROW][COL], int row, int col);
void computer_move(char board[ROW][COL], int row, int col);
char is_win(char board[ROW][COL], int row, int col);