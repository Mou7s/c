#include <stdio.h>

int main()
{
    char a[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
    printf("first five letters:\n");
    for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++)
    {
        printf("%c ", a[i]); //%c is char
    }

    return 0;
}