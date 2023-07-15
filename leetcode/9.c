#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int x)
{
    int temp = x;
    long rev = 0;
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
