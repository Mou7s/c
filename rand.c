#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // 使用当前时间来设置随机数生成器的种子
    srand(time(NULL));

    int num_of_random_numbers = 5; // 指定要生成的随机数的数量

    printf("Generated random numbers:\n");
    for (int i = 0; i < num_of_random_numbers; i++)
    {
        int random_number = rand();
        printf("%d: %d\n", i + 1, random_number);
    }

    return 0;
}
