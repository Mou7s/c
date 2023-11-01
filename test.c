// 实现kmp算法
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int *getNext(char *p) // 求模式串p的next函数值并存入数组next
{
    int len = strlen(p);
    int *next = (int *)malloc(sizeof(int) * len);
    next[0] = -1;       // next[0]初始化为-1，-1表示不存在相同的最大前缀和最大后缀
    int k = -1;         // k初始化为-1
    int j = 0;          // j初始化为0
    while (j < len - 1) // 因为next[j]要表示p[0]到p[j-1]的字符串的最大相同前缀后缀长度，所以j最大取到len-1
    {
        if (k == -1 || p[j] == p[k]) // p[j]表示后缀的单个字符，p[k]表示前缀的单个字符
        {
            ++k;
            ++j;
            next[j] = k;
        }
        else
        {
            k = next[k];
        }
    }
    return next;
}

int kmp(char *s, char *p)
{
    int len1 = strlen(s);
    int len2 = strlen(p);
    int i = 0;
    int j = 0;
    int *next = getNext(p); // 获取next数组
    while (i < len1 && j < len2)
    {
        if (j == -1 || s[i] == p[j])
        {
            ++i;
            ++j;
        }
        else
        {
            j = next[j];
        }
    }
    if (j == len2)
    {
        return i - j;
    }
    else
    {
        return -1;
    }
}

int main()
{
    char s[] = "ababababca";
    char p[] = "abababca";
    int pos = kmp(s, p);
    printf("%d\n", pos);
    return 0;
}
