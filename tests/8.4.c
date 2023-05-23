#include <stdio.h>

int main()
{
    int n, k, nums[100];
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", nums[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (nums[i] + nums[j] = k)
            {
                printf("yes\n");
            }
            else
            {
                printf("no\n");
            }
        }
    }

    return 0;
}
