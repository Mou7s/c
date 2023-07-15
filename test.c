#include <stdio.h>

unsigned long Fibonacci(unsigned n)
{
    if (n > 2)
        return Fibonacci(n - 1) + Fibonacci(n - 2);
    else
        return 1;
}

int main(void)
{
    unsigned n = 10;
    unsigned long fib = Fibonacci(n);
    printf("The %uth Fibonacci number is %lu\n", n, fib);
    return 0;
}