#include <stdio.h>

int main()
{
    int score;
    scanf("%d", &score);
    if (score >= 95 && score <= 100)
    {
        printf("1");
    }
    else if (score >= 90 && score < 95)
    {
        printf("2");
    }
    else if (score >= 85 && score < 90)
    {
        printf("3");
    }
    else if (score >= 80 && score < 85)
    {
        printf("4");
    }
    else if (score >= 70 && score < 80)
    {
        printf("5");
    }
    else if (score >= 60 && score < 70)
    {
        printf("6");
    }
    else
    {
        printf("7");
    }
    return 0;
}
