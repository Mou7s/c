#include <stdio.h>
#include <string.h>

int romanToInt(char *roman)
{
    int result = 0;
    int power = 1;
    for (int i = strlen(roman) - 1; i >= 0; i--)
    {
        switch (roman[i])
        {
        case 'M':
            result += 1000 * power;
            break;
        case 'D':
            result += 500 * power;
            break;
        case 'C':
            result += 100 * power;
            break;
        case 'L':
            result += 50 * power;
            break;
        case 'X':
            result += 10 * power;
            break;
        case 'V':
            result += 5 * power;
            break;
        case 'I':
            result += 1 * power;
            break;
        }
        power *= 10;
    }
    return result;
}

int main()
{
    char roman[10];
    int num;
    printf("Enter a Roman numeral: ");
    scanf("%s", roman);
    num = romanToInt(roman);
    printf("The integer value is %d\n", num);
    return 0;
}
