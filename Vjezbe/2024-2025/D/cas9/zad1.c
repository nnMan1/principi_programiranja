#include <stdio.h>
#include <stdlib.h>

typedef union Number Number;

union Number {
    int x;
    double y;
};


int main() {
    Number n;
    n.x = 5;
    printf("n.x = %d\n", n.x);
    printf("n.y = %f\n", n.y); 

    n.y = 2.5;
    printf("n.x = %d\n", n.x);
    printf("n.y = %f\n", n.y);

    printf("Size of union Number: %zu bytes\n", sizeof(Number));
    return 0;
}