#include <stdio.h>
#include <stdlib.h>

int zbir_iznad_glavne_dijagonale(int n, int matr[][n]) {
    int zbir = 0;

    for(int i=0;i<n;i++) 
        for(int j=0;j<n;j++)
            if(i < j)
                zbir += matr[i][j];

    return zbir;
}

int zbir_iznad_sporedne_dijagonale(int n, int matr[][n]) {
    // Dijagonala iz donjeg lijevog ugla do gornjeg desnog ugla kvadratne matrice
    int zbir = 0;

    for(int i=0;i<n;i++) 
        for(int j=0;j<n-1-i;j++)
            zbir += matr[i][j];

    return zbir;
}

void zbir_po_kolonama(int n, int m, int matr[][m]) {
    //stampa zbir po kolonama
    int zbir[m];

    for(int j=0;j<m;j++) {
        zbir[j] = 0;
        for(int i=0;i<n;i++)
            zbir[j] += matr[i][j];
    }

    for(int j=0;j<m;j++)
        printf("%d ", zbir[j]);
}

int main() {

    int n; 
    scanf("%d", &n); //kvadratna matrica -> dovoljno jednu dimenziju da ucitamo

    int matr[n][n];

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d", &matr[i][j]);
    
    printf("Zbir elemenata iznad glavne dijagonale %d\n", zbir_iznad_glavne_dijagonale(n, matr));
    printf("Zbir elemenata iznad sporedne dijagonale %d\n", zbir_iznad_sporedne_dijagonale(n, matr));
    printf("Zbir po kolonama: "); (n, n, matr); printf("\n");

    return 0;
}