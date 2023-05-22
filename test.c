#include <stdio.h>

int main()
{
    int best_car = 0;
    char right_expert = '\0';

    for (int car = 1; car <= 4; car++)
    {
        int count = 0;
        if (car != 2)
            count++;
        if (car == 4)
            count++;
        if (car != 3)
            count++;
        if (count == 1)
        {
            best_car = car;
            break;
        }
    }

    if (best_car == 1 && right_expert == '\0')
        right_expert = 'A';
    if (best_car == 2 && right_expert == '\0')
        right_expert = 'B';
    if (best_car == 3 && right_expert == '\0')
        right_expert = 'C';
    if (best_car == 4 && right_expert == '\0')
        right_expert = 'D';

    printf("%d\n%c", best_car, right_expert);

    return 0;
}
