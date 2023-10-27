// 汉诺塔问题
#include <stdio.h>
#include <stdlib.h>

void move(char x, char y)
{
    printf("%c-->%c\n", x, y);
}

void hanoi(int n, char one, char two, char three)
{
    if (n == 1)
    {
        move(one, three);
    }
    else
    {
        hanoi(n - 1, one, three, two);
        move(one, three);
        hanoi(n - 1, two, one, three);
    }
}

int main()
{
    int m;
    printf("input the number of diskes:");
    scanf("%d", &m);
    printf("the step to moving %d diskes:\n", m);
    hanoi(m, 'A', 'B', 'C');
    system("pause");
    return 0;
}