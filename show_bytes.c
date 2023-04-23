#include <stdio.h>
#include <stddef.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len)
{
    size_t i;
    for (i = 0; i < len; i++)
    {
        printf(" %.2x", start[i]);
    }
    printf("\n");
}


void show_int (int x){
    show_bytes((byte_pointer) &x,sizeof(int));
}

void show_float(float x){
    show_bytes((byte_pointer) &x, sizeof(float));
}

void show_pointer(void *x){
    show_bytes((byte_pointer) &x,sizeof(void *));
}

int main() {
    int x = 12345;
    float f = 3.14159;
    int* ptr = &x;
    
    printf("x = %d\n", x);
    show_int(x);
    
    printf("f = %f\n", f);
    show_float(f);
    
    printf("ptr = %p\n", ptr);
    show_pointer(ptr);
    
    return 0;
}
