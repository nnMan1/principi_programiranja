#include <stdio.h>

void print_binary(unsigned int n) {
    for(int i=31;i>=0;i--) 
        printf("%d", (n & (1 << i)) != 0);

    printf("\n");
}

int is_set_bit(unsigned int n, int k) {
    return (n & (1 << k)) != 0;
}

int set_bit(unsigned int n, int k) {
    return n | (1 << k);
}

unsigned get_bits(int x, int p, int n) {
    unsigned int mask = ~0;
    mask >>= (32 - n); //mask = mask >> (32-n);
    mask <<= p;

    return x & mask;
}

unsigned set_bits(unsigned x, int p, int n, unsigned y) {
    unsigned int mask = ~0;
    mask >>= (32 - n); //mask = mask >> (32-n);
    mask <<= p;
    mask = ~mask;

    x &= mask;

    mask = ~0;
    mask >>= (32 - n); //mask = mask >> (32-n);
    y &= mask;

    y <<= p;

    return x | y;
}

unsigned left_rotate(unsigned x, int n) {
    unsigned x_copy = x;
    x <<= n;
    x_copy >>= (32-n);

    return x | x_copy;
}

unsigned right_rotate(unsigned x, int n) {
    unsigned x_copy = x;
    x >>= n;
    x_copy <<= (32-n);

    return x | x_copy;
}