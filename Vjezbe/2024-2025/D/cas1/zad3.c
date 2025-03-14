#include <stdio.h>
#include <stdlib.h>

int main() {

    int matr[5][4]; //matrica dimenzija 5 x 4 

    matr[0][3] = 2;
    matr[1][1] = 5;

    for(int i=0;i<5;i++) {
        for(int j=0;j<4;j++)
            printf("%d ", matr[i][j]);

        printf("\n");
    }

    return 0;
}