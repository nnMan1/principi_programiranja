#include <stdio.h>
#include "matr_lib.h"

void spirala(int n, int matr[2*n+1][2*n+1]) {
    int N = 2*n+1;
    popuni_matricu_const(N, N, matr, -1);
    int br = 0;
    int dx = -1, dy = 0;
    int i = n, j = n;

    while(br < N*N) {
        matr[i][j] = br;
        br++;
        i += dx;
        j += dy;

        if(dx == -1 && matr[i][j-1] == -1) {
            dx = 0;
            dy = -1;
            continue;
        }

        if(dy == -1 && matr[i+1][j] == -1) {
            dx = 1;
            dy = 0;
            continue;
        }

        if(dx == 1 && matr[i][j+1] == -1) {
            dx = 0;
            dy = 1;
            continue;
        }

        if(dy == 1 && matr[i-1][j] == -1) {
            dx = -1;
            dy = 0;
            continue;
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int matr[2*n+1][2*n+1];
    spirala(n, matr);

    stamapaj_matricu(2*n+1, 2*n+1, matr);
    return 0;
}