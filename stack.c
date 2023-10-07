#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

// 定义栈结构
struct Stack
{
    int data[MAX_SIZE];
    int top;
};

// 初始化栈
void initStack(struct Stack *stack)
{
    stack->top = -1;
}

// 判断栈是否为空
int isEmpty(struct Stack *stack)
{
    return stack->top == -1;
}

// 判断栈是否已满
int isFull(struct Stack *stack)
{
    return stack->top == MAX_SIZE - 1;
}

// 入栈操作
void push(struct Stack *stack, int value)
{
    if (isFull(stack))
    {
        printf("栈已满，无法入栈\n");
        return;
    }
    stack->data[++stack->top] = value;
}

// 出栈操作
int pop(struct Stack *stack)
{
    if (isEmpty(stack))
    {
        printf("栈为空，无法出栈\n");
        return -1; // 返回一个特殊值表示出错
    }
    return stack->data[stack->top--];
}

// 获取栈顶元素但不出栈
int peek(struct Stack *stack)
{
    if (isEmpty(stack))
    {
        printf("栈为空，无法获取栈顶元素\n");
        return -1; // 返回一个特殊值表示出错
    }
    return stack->data[stack->top];
}

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
