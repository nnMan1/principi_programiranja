/*
Napisati program koji za unijete dimenzije matrice popunjava i stampa matricu kao u  primjeru
Ulaz: 4 5
Izlaz:
0 1 2 3 4 5
11 10 9 8 7 6
12 13 14 15 16 17
23 22 21 20 19 18
*/
#include <stdio.h>
#include "matr_lib.h"

void zmija1(int n, int m, int matr[n][m]) {
    int br = 0;

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
    scanf("%d %d", &n, &m);

    int matr[n][m];

    zmija1(n, m, matr);
    stamapaj_matricu(n, m, matr);

    return 0;
}