#include <stdio.h>
// 不同的平台下引入不同的头文件
#if _WIN32 // 识别windows平台
#include <windows.h>
#elif __linux__ // 识别linux平台
#include <unistd.h>
#endif

int main()
{
// 不同的平台下调用不同的函数
#if _WIN32 // 识别windows平台

    printf("windows\n");
#elif __linux__ // 识别linux平台
    printf("linux\n");
#endif
    return 0;
}