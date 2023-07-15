#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int x)
{
    int temp = x;
    int rev = 0;
    while (temp > 0)
    {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    return (x == rev);
}

int main()
{
    int x;
    printf("Enter an integer: ");
    scanf("%d", &x);
    if (isPalindrome(x))
    {
        printf("%d is a palindrome.\n", x);
    }
    else
    {
        printf("%d is not a palindrome.\n", x);
    }
    return 0;
}
