#include <stdio.h>
#include <stdlib.h>

// 链表节点的结构定义
struct Node
{
    int data;
    struct Node *next;
};

// 创建一个新节点
struct Node *createNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (newNode == NULL)
    {
        printf("内存分配失败\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// 在链表末尾添加节点
void append(struct Node **head, int data)
{
    struct Node *newNode = createNode(data);
    if (*head == NULL)
    {
        *head = newNode;
    }
    else
    {
        struct Node *current = *head;
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = newNode;
    }
}

// 打印链表的内容
void printList(struct Node *head)
{
    struct Node *current = head;
    while (current != NULL)
    {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
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
