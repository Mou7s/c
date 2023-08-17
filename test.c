#include <stdio.h>

int main()
{
    char operator;
    double num1, num2;

    printf("请输入运算符 (+, -, *, /): ");
    scanf("%c", &operator);

    printf("请输入两个数字: ");
    scanf("%lf %lf", &num1, &num2);

    switch (operator)
    {
    case '+':
        printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
        break;
    case '-':
        printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
        break;
    case '*':
        printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
        break;
    case '/':
        if (num2 != 0)
        {
            printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
        }
        else
        {
            printf("除数不能为零\n");
        }
        break;
    default:
        printf("无效的运算符\n");
    }

    return 0;
}
