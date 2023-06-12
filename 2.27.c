#include <stdio.h>
#include <string.h>

int uadd_ok(unsigned x, unsigned y)
{
    unsigned sum = x + y;
    return sum >= x;
}

int main()
{
    unsigned x = 4294967295;
    unsigned y = 1;
    int result = uadd_ok(x, y);
    if (result)
    {
        printf("Addition is safe.\n");
    }
    else
    {
        printf("Addition is overflow.\n");
    }

    return 0;
}
//这个函数是对