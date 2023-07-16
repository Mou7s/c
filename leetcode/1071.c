#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *gcdOfStrings(char *str1, char *str2)
{
    if (strcmp(str1, str2) == 0)
    {
        return str1;
    }

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (len1 < len2)
    {
        return gcdOfStrings(str2, str1);
    }

    if (strncmp(str1, str2, len2) != 0)
    {
        return "";
    }

    return gcdOfStrings(str1 + len2, str2);
}
int main()
{
    char str1[] = "ABCDABCD";
    char str2[] = "ABCD";
    char *result = gcdOfStrings(str1, str2);
    printf("GCD of Strings: %s\n", result);
    free(result);

    return 0;
}