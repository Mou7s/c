#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

struct Stack
{
    int data[MAX_SIZE];
    int top;
};



int main()
{
    struct Stack stack;
    initStack(&stack);

    push(&stack, 1);
    push(&stack, 2);
    push(&stack, 3);

    printf("栈顶元素：%d\n", peek(&stack));

    while (!isEmpty(&stack))
    {
        printf("出栈元素：%d\n", pop(&stack));
    }

    return 0;
}
