#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch = 'A';

    if (isalpha(ch))
    {
        printf("%c is an alphabet.\n", ch);
    }
    else
    {
        printf("%c is not an alphabet.\n", ch);
    }

    if (isdigit(ch))
    {
        printf("%c is a digit.\n", ch);
    }
    else
    {
        printf("%c is not a digit.\n", ch);
    }

    return 0;
}
