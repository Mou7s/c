#include <stdio.h>

void inplace_swap(int *x, int *y)
{
    *y = *x ^ *y;
    *x = *x ^ *y;
    *y = *x ^ *y;
}

int main()
{
    int a = 3;
    int b = 5;

    inplace_swap(&a, &b);
    return 0;
}
