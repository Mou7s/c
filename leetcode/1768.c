#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *mergeAlternately(char *word1, char *word2)
{
    int i = 0, j = 0, len1 = strlen(word1), len2 = strlen(word2);
    char *result = (char *)malloc(len1 + len2 + 1);
    if (result == NULL)
    {
        return NULL;
    }
    while (i < len1 && j < len2)
    {
        result[i + j] = word1[i];
        i++;
        result[i + j] = word2[j];
        j++;
    }
    // Copy remaining characters from word1
    while (i < len1)
    {
        result[i + j] = word1[i];
        i++;
    }
    // Copy remaining characters from word2
    while (j < len2)
    {
        result[i + j] = word2[j];
        j++;
    }
    result[len1 + len2] = '\0';
    return result;
}

int main(void)
{
    char word1[] = "abc";
    char word2[] = "pqr";
    char *result = mergeAlternately(word1, word2);
    printf("The merged string is: %s\n", result);
    free(result);
    return 0;
}
