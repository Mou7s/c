#include <stdio.h>

int main()
{
    int year, month, day;
    scanf("%d%*c%d%*c%d", &year, &month, &day);
    printf("%d-%02d-%02d\n", year, month, day);
}