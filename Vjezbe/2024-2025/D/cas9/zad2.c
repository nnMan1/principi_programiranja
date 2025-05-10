#include <stdio.h>
#include <stdlib.h>
#include "bitwise_lib.h"

typedef union Number Number;

union Number {
    float x;
    unsigned int y;
};

int main() {

    Number x;
    scanf("%f", &x.x);
    print_binary(x.y);

    // printf("Unesite broj x: ");
    // int x;
    // scanf("%d", &x);

    // printf("Binarni zapis broja x je :");
    // print_binary(x);

    // int n;
    // printf("Unesite n: ");
    // scanf("%d", &n);

    // int y = right_rotate(x, n);

    // printf("Binarni zapis broja z je :");
    // print_binary(y);


    // int n, p;
    // printf("Unesite n i p: ");
    // scanf("%d%d", &n, &p);
    // int y = get_bits(x, p, n);
    // printf("Binarni zapis broja x[n+p, p] je :");
    // print_binary(y);

    // printf("Unesite y: ");
    // scanf("%d", &y);
    // int z = set_bits(x, p, n, y);
    // printf("Binarni zapis broja %d je: ", z);
    // print_binary(z);


    // printf("Unesite indeks k:");
    // int k;
    // scanf("%d", &k);
    // if(k < 0 || k >31) {
    //     printf("Pogresna vrijednost za indeks\n");
    //     return 0;
    // }

    // printf("Na poziciji k %s postavljena 1\n", is_set_bit(x, k) ? "jeste" : "nije");
    // printf("Broj %d sa 1 na poziciji %d = %d\n", x, k, set_bit(x, k));
    return 0;
}