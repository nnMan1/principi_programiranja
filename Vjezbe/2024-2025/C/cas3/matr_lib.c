#include <stdio.h>

int stampaj_matricu(int n, int m, int matr[n][m]) {
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++)
            printf("%3d ", matr[i][j]);
        
        printf("\n");
    }
}

int ucitaj_matricu(int n, int m, int matr[n][m]) {
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            scanf("%d", &matr[i][j]);
}

void popuni_nulama(int n, int m, int matr[n][m]) {
    for(int i=0;i<n;i++) 
        for(int j=0;j<m;j++)
            matr[i][j] = 0;
}

void popuni_minus_1(int n, int m, int matr[n][m]) {
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            matr[i][j] = -1;
}
