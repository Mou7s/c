#include <stdio.h>

int main()
{
    char c = 'K'; // 定义字符变量 c，存储字符 'K'
    char *p = &c; // 定义指针变量 p，将其指向变量 c 的地址

    printf("Value of c: %c\n", c);          // 输出变量 c 的值
    printf("Address of c: %p\n", &c);       // 输出变量 c 的地址
    printf("Value pointed by p: %c\n", *p); // 通过指针 p 访问变量 c 的值
    printf("Address stored in p: %p\n", p); // 输出指针 p 存储的地址

    *p = 'Z'; // 通过指针 p 修改变量 c 的值为字符 'Z'

    printf("New value of c: %c\n", c); // 输出修改后的变量 c 的值

    return 0;
}
