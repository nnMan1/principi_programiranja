#include <stdio.h>
#include <stdlib.h>

void print_bits(unsigned int x) {
    for(int i=31;i>=0;i--) {
        if((x & (1 << i)) != 0) 
            printf("1");
        else 
            printf("0");
        if(i%8==0)
            printf(" ");
    }
    printf("\n");
}

int is_bit_set(unsigned int x, int k) {
    if(k < 0 || k > 31)
        return -1;

    if((x & (1 << k)) != 0)
        return 1;
        
    return 0;
}

int set_bit(unsigned int x, int k) {
    if(k < 0 || k > 31)
        return -1;
    
    return x | (1 << k);
}

unsigned get_bits(int x, int p, int n) {

    if(p < 0 || p > 31 || n < 0 || n + p > 31) {
        printf("pogresna vrijednost indeksa\n");
        exit(1);
    }

    unsigned int mask = ~0;
    mask >>= (32-n);
    mask <<= p;
    return x & mask;
}

unsigned set_bits(unsigned x, int p, int n, unsigned y) {
    if(p < 0 || p > 31 || n < 0 || n + p > 31) {
        printf("pogresna vrijednost indeksa\n");
        exit(1);
    }

    unsigned int mask = ~0;
    mask >>= (32-n);
    mask <<= p;
    x &= ~mask;

    mask = ~0;
    mask >>= (32-n);
    y &= mask;

    return x | (y << p);
}

unsigned invert_bits(unsigned x, int p, int n) {
    if(p < 0 || p > 31 || n < 0 || n + p > 31) {
        printf("pogresna vrijednost indeksa\n");
        exit(1);
    }

    unsigned int mask = ~0;
    mask >>= (32-n);
    mask <<= p;

    return x ^ mask;
}