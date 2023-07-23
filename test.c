#include <stdio.h>

double calculatePolynomial(double x, double a, double b, double c, double d)
{
    double result = a * x * x * x + b * x * x + c * x + d;
    return result;
}

int main()
{
    double x, a, b, c, d;
    scanf("%lf %lf %lf %lf %lf", &x, &a, &b, &c, &d);

    double result = calculatePolynomial(x, a, b, c, d);
    printf("%.7lf\n", result);

    return 0;
}
