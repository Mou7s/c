#include <stdio.h>

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);

    int nums[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    int found = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (nums[i] + nums[j] == k)
            {
                found = 1;
                break;
            }
        }
        if (found)
        {
            break;
        }
    }

    if (found)
    {
        printf("yes\n");
    }
    else
    {
        printf("no\n");
    }

    return 0;
}
