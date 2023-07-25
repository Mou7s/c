#include <stdio.h>

int main()
{
    double balance, sum = 0;
    for (int i = 0; i < 12; i++)
    {
        scanf("%lf", &balance);
        sum += balance;
    }

    double result = sum / 12;
    printf("$%.2lf", result);
    return 0;
}
