#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 9
#define COL 9
#define ROWS ROW + 2
#define COLS COL + 2
#define EASY_COUNT 10
// 初始化棋盘
void init_board(char board[ROWS][COLS], int rows, int cols, char set);
// 打印棋盘
void display_board(char board[ROWS][COLS], int row, int col);
// 布置雷
void set_mine(char mine[ROWS][COLS], int row, int col);
// 排雷
void find_mine(char mine[ROWS][COLS], char shoe[ROWS][COLS], int row, int col);