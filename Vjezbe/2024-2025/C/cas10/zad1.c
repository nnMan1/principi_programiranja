#include <stdio.h>
#include <stdlib.h>

union Number {
    int x;
    float y;
};

int main() {
    union Number broj;

    broj.x = 5;
    printf("broj.x = %d, broj.y = %f\n", broj.x, broj.y);

    broj.y = 3.4;
    printf("broj.x = %d, broj.y = %f\n", broj.x, broj.y);

}