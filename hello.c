#include <stdio.h>

void inplace_swap(int *x, int *y){
    *y = *x ^ *y;
    *x = *x ^ *y;
    *y = *x ^ *y;
}

void reverse_array(int arr[], int size) {
    int i;
    for (i = 0; i < size/2; i++) {
        inplace_swap(&arr[i], &arr[size-i-1]);
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int i;

    printf("Before reverse: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    reverse_array(arr, size);

    printf("\nAfter reverse: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

