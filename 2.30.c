#include <stdio.h>
#include <stdbool.h>

// Function to check for overflow when adding two integers
bool tadd_ok(int x, int y)
{
    int sum = x + y;
    // Overflow occurs if the signs of x and y are the same and the sign of the sum is different
    return !((x > 0 && y > 0 && sum <= 0) || (x < 0 && y < 0 && sum >= 0));
}

int main()
{
    int x = 2147483647; // Maximum positive integer
    int y = 1;

    if (tadd_ok(x, y))
    {
        printf("No overflow\n");
    }
    else
    {
        printf("Overflow\n");
    }

    return 0;
}
