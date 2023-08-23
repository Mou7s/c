#include <stdio.h>

int main()
{
    FILE *file_ptr;
    char *filename = "./data.txt";

    file_ptr = fopen(filename, "w"); // 打开文件以写入模式

    if (file_ptr == NULL)
    {
        printf("Failed to open the file.\n");
        return 1;
    }

    fprintf(file_ptr, "Hello, world!\n");
    fclose(file_ptr);

    return 0;
}
