#include <stdio.h>

unsigned int unsignedAddition(unsigned int x, unsigned int y)
{
    unsigned int sum = x + y;
    return sum;
}

int main()
{
    unsigned int c1 = 255;
    unsigned int c2 = 10;
    unsigned int result = unsignedAddition(c1, c2);

    printf("c1 + c2 = %u\n", result);

    return 0;
}
