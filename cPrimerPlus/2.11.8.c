#include <stdio.h>
int main(void)
{
    int a, b;
    a = 5;
    b = 2;
    b = a; // b=5
    a = b; // a=5
    printf("a=%d, b=%d\n", a, b);
    return 0;
}