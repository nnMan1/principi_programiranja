// Provjeriti da li je data kvadratna matrica simetrična u odnosu na glavnu dijagonalu. 
// Ulaz: Prvi red sadrži broj N – dimenziju matrice (1 ≤ N ≤ 100). 
// U sljedećih N redova unosi se po N brojeva – elementi matrice. 
// Izlaz: Štampati YES ili NO,
#include <stdio.h>
#include <stdlib.h>

int simetricna(int n, int matr[][n]) {
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            if(matr[i][j] != matr[j][i])
                return 0;
    
    return 1;
}

int main() {

    int n;
    scanf("%d", &n);

    int matr[n][n];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d", &matr[i][j]);

    printf("%d", simetricna(n, matr));

    return 0;
}

/*
* Domaci: Za datu matricu dimenzija nxm stampati najvecu simetricnu podmatricu.
*/