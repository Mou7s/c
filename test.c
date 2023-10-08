#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *createNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void append(struct Node **head, int data)
{
    struct Node *newNode = createNode(data);
    if (*head == NULL)
    {
        *head == *newNode;
    }
    else
    {
        struct Node *current = *head;
    }
}

// 主函数
int main()
{
    struct Node *head = NULL;

    // 向链表中添加元素
    append(&head, 1);
    append(&head, 2);
    append(&head, 3);

    // 打印链表
    printf("链表内容：\n");
    printList(head);

    // 释放链表内存
    while (head != NULL)
    {
        struct Node *temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}
