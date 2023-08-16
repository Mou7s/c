#include <stdio.h>
int main()
{
    char str1[] = "Hello, world!"; // 字符数组形式
    char *str2 = "Hello, world!";  // 指针形式
    printf("%s\n%s\n", str1, str2);
    return 0;
}