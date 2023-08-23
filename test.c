#include <stdio.h>

typedef int IntArray[5];

int main()
{
    IntArray numbers = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++)
    {
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }

    return 0;
}
