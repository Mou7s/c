#include <stdio.h>
#include <math.h>

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    double price = 200.0;
    double salary = n;
    int year = 0;
    while (year <= 20 && salary * year < price)
    {
        year++;
        price *= (1.0 + k / 100.0);
        salary += n;
    }
    if (year <= 20)
    {
        printf("%d", year);
    }
    else
    {
        printf("Impossible");
    }
    return 0;
}
