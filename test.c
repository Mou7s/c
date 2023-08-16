#include <conio.h>
#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a character: ");
    ch = getch(); // 获取字符（不显示在屏幕上）
    printf("\nYou entered: %c\n", ch);
    return 0;
}
