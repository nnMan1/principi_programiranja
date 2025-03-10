#include <stdio.h>
#include <stdlib.h>
#include "matr_lib.h"

int simetricna_podmatrica(int x, int y, int d, int n, int m, int matr[n][m]) {
    for(int i=0;i<d;i++)
        for(int j=0;j<d;j++)
            if(matr[x+i][y+j] != matr[x+j][y+i])
                return 0;

    return 1;
}

void najveca_simetricna_podmatr(int n, int m, int matr[n][m]) {

    int xm = 0;
    int ym = 0; 
    int dm = 1;

    int max_d = n < m ? n : m;

    for(int d=1;d<=max_d;d++) {
        for(int i=0;i<=n-d;i++)
            for(int j=0;j<m-d;j++)
                if(simetricna_podmatrica(i, j, d, n, m,matr)) {
                    xm = i;
                    ym = j;
                    dm = d;
                }
    }

    for(int i=0;i<dm;i++) {
        for(int j=0;j<dm;j++)
            printf("%d ", matr[xm+i][ym+j]);
        
        printf("\n");
    }

}

int main() {

    int n, m;
    scanf("%d%d", &n, &m);

    int matr[n][m];
    ucitaj_matricu(n, m, matr);

    najveca_simetricna_podmatr(n, m, matr);

    return 0;
}

/*
5 7
1 2 3 4 5 6 7 
5 6 2 1 4 7 2
3 2 5 8 9 1 4
2 1 8 9 5 4 2
5 4 9 5 9 0 4  
*/