#include <stdio.h>
#include "matr_lib.h"

void popuni_matricu(int n, int m, int matr[n][m]) {
    int br = 0;

    for(int y=0;y<m;y++) {
        int i = 0;
        int j = y;

        while(i <= n-1 && j >= 0) {
            matr[i][j] = br;
            br = br+1;
            i++;
            j--;
        }
    }

    for(int x=1;x<n;x++) {
        int i = x;
        int j = m-1;

        while(i <= n-1 && j >= 0) {
            matr[i][j] = br;
            br = br+1;
            i++;
            j--;
        }
    }
}

int main() {

    int n, m;
    scanf("%d%d", &n, &m);

    int matr[n][m];
    popuni_matricu(n, m, matr);

    stamapaj_matricu(n, m, matr);
    return 0;
}