#include <stdio.h>
#include <stdlib.h>

// 定义链表节点结构体
struct Node
{
    int data;
    struct Node *next;
};

// 定义链表头指针
struct Node *head = NULL;

// 插入节点到链表尾部
void insert(int data)
{
    // 创建新节点
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    // 如果链表为空，将新节点作为头节点
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    // 找到链表尾部，将新节点插入到尾部
    struct Node *current = head;
    while (current->next != NULL)
    {
        current = current->next;
    }
    current->next = newNode;
}

// 删除指定节点
void delete(int data)
{
    // 如果链表为空，直接返回
    if (head == NULL)
    {
        return;
    }

    // 如果要删除的节点是头节点，直接将头指针指向下一个节点
    if (head->data == data)
    {
        head = head->next;
        return;
    }

    // 找到要删除的节点的前一个节点
    struct Node *current = head;
    while (current->next != NULL && current->next->data != data)
    {
        current = current->next;
    }

    // 如果找到了要删除的节点，将前一个节点的next指针指向要删除节点的下一个节点
    if (current->next != NULL)
    {
        current->next = current->next->next;
    }
}

// 打印链表
void printList()
{
    struct Node *current = head;
    while (current != NULL)
    {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main()
{
    // 插入节点
    insert(1);
    insert(2);
    insert(3);
    insert(4);

    // 打印链表
    printf("链表：");
    printList();

    // 删除节点
    delete (3);

    // 打印链表
    printf("删除节点后的链表：");
    printList();

    return 0;
}
