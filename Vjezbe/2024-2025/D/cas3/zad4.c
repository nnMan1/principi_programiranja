#include <stdio.h>
#include <stdlib.h>

int main() {

    int x = 5;
    int *x_ptr = &x;
    // x_ptr = &x;

    printf("&x = %p\n", &x);
    printf("x_ptr = %p\n", x_ptr);
    printf("*x_ptr = %d\n", *x_ptr);
    printf("&x_ptr = %p \n", &x_ptr);
    printf("*&x = %d \n", *&x);
    printf("&*x_ptr = %p \n", &*x_ptr);

    *x_ptr = 7;
    printf("x = %d\n", x);

    return 0;
}