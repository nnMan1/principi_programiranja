#include <stdio.h>
#include <stdlib.h>
#include "matr_lib.h"

void popuni_matricu(int n, int matr[2*n+1][2*n+1]) {

    int N = 2 * n + 1;
    int br = 0;
    int position[] = {n, n};
    int direction[] = {-1, 0};

    popuni_minus_1(N, N, matr);

    while(br < N * N) {
        matr[position[0]][position[1]] = br++;

        position[0] += direction[0];
        position[1] += direction[1];

        if(direction[0] == -1 && matr[position[0]][position[1] - 1] == -1) {//ako idemo gore
            direction[0] = 0;
            direction[1] = -1;
        }
        
        if(direction[1] == -1 && matr[position[0]+1][position[1]] == -1) {//ako idemo lijevo
            direction[0] = 1;
            direction[1] = 0;
        }

        if(direction[0] == 1 && matr[position[0]][position[1]+1] == -1) {//ako idemo dolje
            direction[0] = 0;
            direction[1] = 1;
        }

        if(direction[1] == 1 && matr[position[0]-1][position[1]] == -1) {//ako idemo desno
            direction[0] = -1;
            direction[1] = 0;
        }

        stampaj_matricu(N, N, matr);

        printf("\n");

    } 
}

int main() {

    int n;
    scanf("%d", &n);

    int matr[2*n+1][2*n+1];

    popuni_matricu(n, matr);

    stampaj_matricu(2*n+1, 2*n+1, matr);

    return 0;
}