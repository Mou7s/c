#include <stdio.h>
// 将比较字符串大小的代码封装成函数，并命名为strcmp_alias
int strcmp_alias(char *s1, char *s2)
{
    int i, result;
    for (i = 0; (result = s1[i] - s2[i]) == 0; i++)
    {
        if (s1[i] == '\0' || s2[i] == '\0')
        {
            break;
        }
    }

    return result;
}
int main()
{
    char str1[] = "http://c.biancheng.net";
    char str2[] = "http://www.baidu.com";
    char str3[] = "http://data.biancheng.net";
    // 重复使用strcmp_alias()函数
    int result_1_2 = strcmp_alias(str1, str2);
    int result_1_3 = strcmp_alias(str1, str3);
    printf("str1  - str2 = %d\n", result_1_2);
    printf("str1  - str3 = %d\n", result_1_3);
    return 0;
}