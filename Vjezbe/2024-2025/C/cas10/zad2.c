#include <stdio.h>
#include <stdlib.h>
#include "bitwise_lib.h"

int main() {

    int x, p, n;
    scanf("%d%d%d", &x, &p, &n);
    print_bits(invert_bits(x, p, n));

    /*zad6
    int x, y, n, p;
    scanf("%d%d%d%d", &x, &y, &n, &p);
    printf("x = "); print_bits(x);
    printf("y = "); print_bits(y);
    printf("k = "); print_bits(set_bits(x, p, n, y));
    */

    /*zad5
    int x, p, n;
    scanf("%d%d%d", &x, &p, &n);
    print_bits(get_bits(x, p, n));
    */

    /*zad3
    int x, k;
    scanf("%d%d", &x, &k);
    print_bits(x);

    int value = set_bit(x, k);

    if(value == -1)
        printf("pozija nije u dobrom opsegu\n");
    
    print_bits(value);
    printf("value=%d\n", value);
    */

    /*zad2
    int x, k;
    scanf("%d%d", &x, &k);

    int is_set = is_bit_set(x, k);

    if(is_set == -1)
        printf("pozija nije u dobrom opsegu\n");
    if(is_set == 1)
        printf("jeste\n");
    if(is_set == 0)
        printf("nije\n");
        */
    return 0;
}