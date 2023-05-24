#include <stdio.h>
#include <string.h>
#define MAX_LEN 80

int main()
{
    char s[MAX_LEN];
    int a = 0, e = 0, i = 0, o = 0, u = 0;

    fgets(s, MAX_LEN, stdin);

    for (int j = 0; j < strlen(s); j++)
    {
        switch (s[j])
        {
        case 'a':
            a++;
            break;

        case 'e':
            e++;
            break;

        case 'i':
            i++;
            break;

        case 'o':
            o++;
            break;

        case 'u':
            u++;
            break;

        default:
            break;
        }
    }

    printf("%d %d %d %d %d", a, e, i, o, u);

    return 0;
}
