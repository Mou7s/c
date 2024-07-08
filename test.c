#include <stdio.h>
#include <stdlib.h>

int sumOfElement(int a[], int size)
{
    int i, sum = 0;
    for (i = 0; i < size; i++)
    {
        sum += a[i];
    }
    return sum;
}
int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int total = sumOfElement(a, sizeof(a) / sizeof(a[0]));
    printf("Sum of elements: %d\n", total);
}