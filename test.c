#include <stdio.h>
#define ROW 10
#define COL 10
int map[ROW][COL];

void gameinit()
{
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            map[i][j] = 0;
        }
    }
}

void show()
{
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            printf("%d  ", map[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    show();
    return 0;
}