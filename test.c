#include <stdio.h>
#include <stdlib.h>

void shellSort(int data[], int n)
{
    int *delta, k, i, t, dk, j;
    k = n;
    delta = (int *)malloc(sizeof(int) * (n / 2));

    i = 0;

    do
    {
        k = k / 2;
        delta[i] = k;
        i++;
    } while (k > 1);

    i = 0;
    while ((dk = delta[i]) > 0)
    {
        for (k = dk; k < n; ++k)
        {
            if (data[k] < data[k - dk])
            {
                t = data[k];
                for (j = k - dk; j >= 0 && t < data[j]; j -= dk)
                    data[j + dk] = data[j];
                data[j + dk] = t;
            }
        }
        i++;
    }
}

int main()
{
    int data[] = {12, 34, 54, 2, 3, 4, 6, 8};
    int n = sizeof(data) / sizeof(data[0]);

    printf("Array before sorting: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", data[i]);
    }

    shellSort(data, n);

    printf("\nArray after sorting: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", data[i]);
    }
    printf("\n");

    return 0;
}