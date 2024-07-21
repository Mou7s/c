#include <stdio.h>

double inch2cm(double inch)
{
    return inch * 2.54;
}

int main()
{
    double inch;
    printf("Please input the inch: ");
    scanf("%lf", &inch);
    printf("%lf inch is %lf cm\n", inch, inch2cm(inch));
    return 0;
}