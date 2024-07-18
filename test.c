#include <stdio.h>

int main(void)
{
    FILE *fp;
    char c;

    fp = fopen("hello.txt", "r");
    if (fp == NULL)
    {
        return -1;
    }

    c = fgetc(fp);
    printf("%c\n", c);

    fclose(fp);

    return 0;
}