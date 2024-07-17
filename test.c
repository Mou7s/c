#include <stdio.h>
#include <time.h>

#define __DATE__ "July 23 2021"
#define __TIME__ "16:45:00"
#define __FILE__ "test.c"
#define __LINE__ 4
#define __STDC__ 1

int main()
{
    printf("Date: %s\n", __DATE__);
    printf("Time: %s\n", __TIME__);
    printf("File: %s\n", __FILE__);
    printf("Line: %d\n", __LINE__);
    printf("STDC: %d\n", __STDC__);
    return 0;
}