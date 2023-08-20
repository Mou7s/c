#include <stdio.h>

// 回调函数：执行操作
int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

// 执行回调操作的函数
void executeOperation(int (*operation)(int, int), int a, int b)
{
    int result = operation(a, b);
    printf("Result: %d\n", result);
}

int main()
{
    executeOperation(add, 3, 4);      // 调用 executeOperation，使用 add 函数
    executeOperation(subtract, 8, 5); // 调用 executeOperation，使用 subtract 函数

    return 0;
}
