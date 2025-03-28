//Napisati program koji stampa najvecu siumetricnu podmatricu
//Primjer
/*
2 3 5 6 7 8 9 1 2 
4 5 1 3 8 9 0 8 1
5 6 3 8 9 9 4 1 5
8 7 8 9 4 1 4 1 2

3 5 6
5 1 3
6 3 8
*/

#include <stdio.h>
#include "matr_lib.h"

int simetricna(int x, int y, int d, int n, int m, int matr[n][m]) {
    for(int i=0;i<d;i++)
        for(int j=0;j<d;j++)
            if(matr[x+i][y+j] != matr[x+j][y+i])
                return 0;

    return 1;
}


void najveca_simetricna(int n, int m, int matr[n][m]) {
    int d = n < m ? n : m;

    int mi = 0;
    int mj = 0;
    int md = 0;

    for(int k=2;k<d;k++) {
        //ispitujemo postoji li nedje podmatrica dimenzija kxk
        //koja je simetricna
        for(int i=0;i<=n-k;i++)
            for(int j=0;j<=m-k;j++) 
                if(simetricna(i, j, k, n, m, matr)) {
                    mi = i;
                    mj = j;
                    md = k;
                }
    }

    for(int i=0;i<md;i++) {
        for(int j=0;j<md;j++)
            printf("%d ", matr[mi+i][mj+j]);
        
        printf("\n");
    }

}

int main() {

    int n, m;
    scanf("%d%d", &n, &m);

    int matr[n][m];
    ucitaj_matricu(n, m, matr);

    najveca_simetricna(n, m, matr);

    return 0;
}