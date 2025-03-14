/*
Data je kvadratna matrica dimenzija nxn koja predstavlja sliku. 
Napisati program koji štampa sliku rotiranu za 90 stepeni u smjeru kazaljke na satu. 
Na primjer, ako je data matrica: 
1 2 3
4 5 6
7 8 9
nakon rotacije, ona izgleda ovako: 
7 4 1
8 5 2
9 6 3
*/

#include <stdio.h>
#include "matr_lib.h"

int main() {
    int n;
    scanf("%d", &n);

    int matr[n][n];
    ucitaj_matricu(n, n, matr);
    printf("\n");

    rotiraj(n, matr);

    stamapaj_matricu(n, n, matr);

    return 0;
}