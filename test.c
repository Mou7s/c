#include <stdio.h>
#include <math.h>

#define PI 3.1415926

int main()
{
    double radius; // 球的半径
    while (scanf("%lf", &radius) == 1)
    {
        double volume = (4.0 / 3.0) * PI * pow(radius, 3); // 计算球的体积
        printf("%.3lf\n", volume);
    }
    return 0;
}
