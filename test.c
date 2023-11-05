#include <stdio.h>
#define MAXITEM 100

void Heapify(int R[MAXITEM], int v, int n)
{
    int i, j;
    i = v;
    j = 2 * i;

    R[0] = R[i];
    while (j <= n)
    {
        if (j < n && R[j] < R[j + 1])
        {
            j++;
        }
        if (R[0] < R[j])
        {
            R[i] = R[j];
            i = j;
            j = 2 * i;
        }
        else
        {
            break;
        }
    }
}