// Za date koordinate (x, y) polja tabele (matrice) dimenazija M × N štampati koordinate svih njegovih
// susjednih polja. Polja su susjedna kao imaju zajedničku stranicu. Numeracija redova i kolona počinje od
// jedinice. Ulaz: Prvi red sadrži cijele brojeve M, N, x, y (1 ≤ x ≤ M ≤ 109, 1 ≤ y ≤ N ≤ 109). Izlaz: Štampati
// koordinate susjeda, u proizvoljnom poretku

#include <stdio.h>
#include <stdlib.h>

int br_vojnika_na_granici(int n, int matr[][n]) {
    int br = 0;

    if(n == 1)
        return matr[0][0];

    for(int j=0;j<n;j++) {
        br += matr[0][j]; //dodamo elemente prve vrste
        br += matr[n-1][j]; //dodamo elemente posljedenje vrste
    }

    for(int i=1;i<n-1;i++) {
        br += matr[i][0]; //elementi prve kolone
        br += matr[i][n-1]; //elementi posljednje kolone
    }

    return br;
}

int main() {

    int n;
    scanf("%d", &n);

    int matr[n][n];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d", &matr[i][j]);

    printf("%d", br_vojnika_na_granici(n, matr));

    return 0;
}