#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *gcdOfStrings(char *str1, char *str2)
{
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    int i, j, gcd = 0;

    for (i = 0; i < len1 && i < len2; i++)
    {
        if (str1[i] == str2[i])
        {
            gcd = i + 1;
        }
        else
        {
            break;
        }
    }

    char *result = malloc(gcd + 1);
    if (result == NULL)
    {
        return NULL;
    }

    for (i = 0; i < gcd; i++)
    {
        result[i] = str1[i];
    }
    result[gcd] = '\0';

    return result;
}
int main()
{
    char str1[] = "ABCABC";
    char str2[] = "ABC";
    char *result = gcdOfStrings(str1, str2);
    printf("GCD of Strings: %s\n", result);
    free(result);

    return 0;
}