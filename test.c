#include <stdio.h>
#include <string.h>

int strlonger(char *s, char *t)
{
    return strlen(s) > strlen(t);
}

int main()
{
    char str1[] = "Helo";
    char str2[] = "World";

    if (strlonger(str1, str2))
    {
        printf("%s is longer than %s\n", str1, str2);
    }
    else
    {
        printf("%s is not longer than %s\n", str1, str2);
    }

    return 0;
}
