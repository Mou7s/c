#include <stdio.h>

int find_max(int i, int j, int k)
{
    int max;
    if (i > j)
    {
        if (i > k)
        {
            max = i;
        }
        else
        {
            max = k;
        }
    }
    else
    {
        if (j > k)
        {
            max = j;
        }
        else
        {
            max = k;
        }
    }
    return max;
}

int main()
{
    int a, b, c, max;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    max = find_max(a, b, c);
    printf("Maximum number is %d\n", max);
    return 0;
}
