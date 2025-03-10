#include <stdio.h>
#include <stdlib.h>

void inc(int *x_ptr) {
    (*x_ptr) ++;
}

int main() {
    int x = 5;
    int *x_ptr;
    x_ptr = &x;

    printf("x = %d\n", x);
    printf("&x = %p\n", &x);
    printf("x_ptr = %p\n", x_ptr);
    printf("&x_ptr = %p\n", &x_ptr);
    printf("*x_ptr = %d\n", *x_ptr);

    *x_ptr = 8;
    printf("x = %d\n", x);

    printf("*&x = %d\n", *&x);
    printf("&*x_ptr = %p\n", &*x_ptr);

    inc(x_ptr);
    printf("x = %d\n", x);

    return 0;
}