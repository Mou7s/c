#include <stdio.h>

struct ExampleStruct
{
    int intValue;
    float floatValue;
};

union ExampleUnion
{
    int intValue;
    float floatValue;
};

int main()
{
    struct ExampleStruct structInstance;
    union ExampleUnion unionInstance;

    structInstance.intValue = 42;
    structInstance.floatValue = 3.14;

    unionInstance.intValue = 42;
    printf("union floatValue: %.2f\n", unionInstance.floatValue);

    return 0;
}
