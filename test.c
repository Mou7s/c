#include <stdio.h>
#include <stdlib.h>

typedef unsigned char *pointer;

void show_bytes(pointer start, size_t len)
{
    size_t i;
    for (i = 0; i < len; i++)
        printf("%p\t0x%.2x\n", start + i, start[i]);
    printf("\n");
}

int main()
{
    int a = 0x01234567;
    show_bytes((pointer)&a, sizeof(int));
}
