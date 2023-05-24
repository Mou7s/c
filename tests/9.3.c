#include <stdio.h>
#include <string.h>

int main()
{
    char sentence[500];     // 输入的句子
    char word[500];         // 存储分割出来的单词
    char longest_word[500]; // 存储最长的单词
    int longest_length = 0; // 最长单词的长度
    int length;             // 当前单词的长度

    fgets(sentence, 500, stdin); // 读取输入的句子

    char *ptr = strtok(sentence, " "); // 使用空格分割单词
    while (ptr != NULL)
    {
        strncpy(word, ptr, 500); // 复制单词
        length = strlen(word);
        if (length > longest_length)
        { // 如果当前单词更长，则更新最长单词
            longest_length = length;
            strncpy(longest_word, word, 500);
        }
        ptr = strtok(NULL, " "); // 继续分割下一个单词
    }

    printf("%s\n", longest_word);

    return 0;
}
