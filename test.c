#include <stdio.h>
#include <string.h>

char *strcpy(char *dest, const char *source)
{
    char *ptr = dest;
    while (*dest++ = *source++)
        ;
    return ptr;
}

int main(void)
{
    char str[25];
    strcpy(str, "hello world");
    printf("%s\n", str);
    return 0;
}
