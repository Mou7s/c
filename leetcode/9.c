#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// bool isPalindrome(int x)
// {
//     int temp = x;
//     long rev = 0;
//     while (temp > 0)
//     {
//         rev = rev * 10 + temp % 10;
//         temp /= 10;
//     }
//     return rev == x;
// }

bool isPalindrome(int number)
{
    char str[10];
    int i, j;

    // 将数字转换为字符串
    sprintf(str, "%d", number);

    // 从字符串的两端开始比较
    for (i = 0, j = strlen(str) - 1; i < j; i++, j--)
    {
        if (str[i] != str[j])
        {
            return false;
        }
    }

    // 数字是回文
    return true;
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
