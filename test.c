#include <stdio.h>
#include <stdlib.h>

// 定义链表节点的结构
struct Node
{
    int data;
    struct Node *next;
};

// 初始化一个空链表
struct Node *head = NULL;
// 插入一个新节点到链表的末尾
void insert(int data)
{
    // 创建一个新节点
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    // 如果链表为空，将新节点设为头节点
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    // 找到链表的最后一个节点
    struct Node *current = head;
    while (current->next != NULL)
    {
        current = current->next;
    }

    // 将新节点连接到最后一个节点的后面
    current->next = newNode;
}

// 打印链表的所有元素
void printList()
{
    struct Node *current = head;
    printf("链表元素: ");
    while (current != NULL)
    {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}
int main()
{
    // 插入一些元素到链表
    insert(1);
    insert(2);
    insert(3);

    // 打印链表
    printList();

    return 0;
}