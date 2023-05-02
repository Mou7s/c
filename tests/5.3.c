#include <stdio.h>

int main()
{
    int k;
    scanf("%d", &k);

    int nums[k];
    for (int i = 0; i < k; i++)
    {
        scanf("%d", &nums[i]);
    }

    int one_count = 0, five_count = 0, ten_count = 0;
    for (int i = 0; i < k; i++)
    {
        if (nums[i] == 1)
        {
            one_count++;
        }
        else if (nums[i] == 5)
        {
            five_count++;
        }
        else if (nums[i] == 10)
        {
            ten_count++;
        }
    }

    printf("%d\n", one_count);
    printf("%d\n", five_count);
    printf("%d\n", ten_count);

    return 0;
}
