#include <stdio.h>

#define NUMS_SIZE 5

int main(void)
{
    int a, nums[NUMS_SIZE], sum = 0;

    if (scanf("%d", &a) != 1)
    {
        printf("Error: Failed to read input.\n");
        return 1;
    }

    for (int i = 0; i < NUMS_SIZE; ++i)
    {
        if (scanf("%d", &nums[i]) != 1)
        {
            printf("Error: Failed to read input.\n");
            return 1;
        }

        if (nums[i] < a)
        {
            sum += nums[i];
        }
    }

    printf("%d", sum);
    return 0;
}
