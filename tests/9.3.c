#include <stdio.h>
#include <string.h>

int main() {
    char sentence[501]; // 存储输入的句子
    char longest_word[21] = ""; // 存储最长的单词,初始化为空字符串
    char current_word[21] = ""; // 存储当前正在处理的单词,初始化为空字符串
    int i, j;

    // 读入句子
    fgets(sentence, 501, stdin);

    // 处理单词
    for (i = 0, j = 0; i < strlen(sentence); i++) {
        if (sentence[i] == ' ' || sentence[i] == '.') { // 遇到空格或句号,表示-个单词结束
            current_word[j] = '\0'; // 在当前单词的结尾加上字符串结束符
            if (strlen(current_word) > strlen(longest_word)) { // 如果当前单词比最长单词更长,更新最长单词
                strcpy(longest_word, current_word);
            }
            j = 0; // 重置当前单词的长度
        } else { // 继续处理当前单词
            current_word[j] = sentence[i];
            j++;
        }
    }

    // 输出最长单词
    printf("%s\n", longest_word);

    return 0;
}
