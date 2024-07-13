// sprintf例子
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100];
    int i = 10;
    float x = 3.14;
    sprintf(str, "i=%d, x=%f", i, x);
    printf("%s\n", str);
    return 0;
}