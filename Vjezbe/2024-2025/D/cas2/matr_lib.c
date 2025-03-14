#include <stdio.h>

void ucitaj_matricu(int n, int m, int matr[n][m]) {
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            scanf("%d", &matr[i][j]);
}

void stamapaj_matricu(int n, int m, int matr[n][m]) {
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            printf("%d ", matr[i][j]);
        
        printf("\n");
    }
}

void zamijeni_kolone(int n, int m, int matr[n][m], int k1, int k2) {
    for(int i=0;i<n;i++) {
        int tmp = matr[i][k1];
        matr[i][k1] = matr[i][k2];
        matr[i][k2] = tmp;
    }
}

int toplicova(int n, int m, int matr[n][m]) {
    for(int i=1;i<n;i++)
        for(int j=1;j<m;j++)
            if(matr[i][j] != matr[i-1][j-1])
                return 0;
    
    return 1;
}

void kopiraj(int n, int m, int matr_src[n][m], int matr_tgt[n][m]) {
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            matr_tgt[i][j] = matr_src[i][j];
}

void rotiraj(int n, int matr[n][n]) {
    int rot[n][n]; //smjestite rotiranu matricu

    // (0, 0) -> (0, n-1)
    // (0, 1) -> (1, n-1)
    // (0, 2) -> (2, n-1)

    // (1, 0) -> (0, n-2)
    // (1, 1) -> (1, n-2)
    // (1, 2) -> (2, n-2)

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            rot[j][n-1-i] = matr[i][j];
    
    kopiraj(n, n, rot, matr);
}