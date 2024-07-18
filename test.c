#include <stdio.h>
#include <stdlib.h> // 为了使用EXIT_FAILURE

int main(void)
{
    FILE *file = fopen("test.txt", "r");
    if (file == NULL)
    {
        perror("Error opening file");
        return EXIT_FAILURE;
    }

    int c;
    while ((c = fgetc(file)) != EOF)
    {
        putchar(c);
    }

    fclose(file); // 完成操作后关闭文件

    return 0;
}