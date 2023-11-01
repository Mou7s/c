#include <stdio.h>
#include <string.h>

int longest_common_substring(char *s1, char *s2)
{
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    int dp[len1 + 1][len2 + 1];
    int max_len = 0;

    for (int i = 0; i <= len1; i++)
    {
        for (int j = 0; j <= len2; j++)
        {
            if (i == 0 || j == 0)
            {
                dp[i][j] = 0;
            }
            else if (s1[i - 1] == s2[j - 1])
            {
                dp[i][j] = dp[i - 1][j - 1] + 1;
                if (dp[i][j] > max_len)
                {
                    max_len = dp[i][j];
                }
            }
            else
            {
                dp[i][j] = 0;
            }
        }
    }

    return max_len;
}

int main()
{
    char s1[] = "hello world";
    char s2[] = "world hello";
    int len = longest_common_substring(s1, s2);
    printf("The length of the longest common substring is %d\n", len);

    return 0;
}
