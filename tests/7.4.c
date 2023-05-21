#include <stdio.h>

int main()
{
    int amount, num_100, num_50, num_20, num_10, num_5, num_1;

    scanf("%d", &amount);

    num_100 = amount / 100;
    amount = amount % 100;

    num_50 = amount / 50;
    amount = amount % 50;

    num_20 = amount / 20;
    amount = amount % 20;

    num_10 = amount / 10;
    amount = amount % 10;

    num_5 = amount / 5;
    amount = amount % 5;

    num_1 = amount;

    printf("%d\n%d\n%d\n%d\n%d\n%d\n", num_100, num_50, num_20, num_10, num_5, num_1);

    return 0;
}
