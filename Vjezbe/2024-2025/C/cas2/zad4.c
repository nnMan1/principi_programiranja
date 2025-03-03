// Za date brojeve M i N kreirati matricu A dimenzija MxN, kao u primjeru.
// Ulaz:
// 4 6
// Izlaz:
// 0 1 2 3 4 5
// 11 10 9 8 7 6
// 12 13 14 15 16 17
// 23 22 21 20 19 18

#include <stdlib.h>
#include <stdio.h>
#include "matr_lib.h"

void popuni(int n, int m, int matr[n][m]) {
    int br = 0; //broj koji treba trenutno da upisemo

    for(int i=0;i<n;i++) {
        if(i % 2 == 0) {
            for(int j=0;j<m;j++)
                matr[i][j] = br++;
        } else {
            for(int j=m-1;j>=0;j--)
                matr[i][j] = br++;
        }
    }
}

int main() {
    int n, m;
    scanf("%d%d", &n, &m);

    int matr[n][m];
    popuni(n, m, matr);

    print_matrix(n, m, matr);
}