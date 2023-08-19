#include <stdio.h>

// 函数定义，有两个形参
int add(int a, int b)
{
    return a + b;
}

int main()
{
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // 函数调用，传递num1和num2作为实参
    int result = add(num1, num2);

    printf("Sum: %d\n", result);

    return 0;
}
