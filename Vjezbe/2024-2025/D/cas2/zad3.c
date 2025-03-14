/*
3.	Napisati funkciju void zamijeniKolone(int mat[][], int r, int s)
 koja mijenja datu matricu cijelih brojeva tako što zamijeni r-tu i s-tu kolonu.*/

#include <stdio.h>
#include "matr_lib.h"

int main() {
    int n, m;
    scanf("%d%d", &n, &m);

    int matr[n][m];
    ucitaj_matricu(n, m, matr);

    int k1, k2;
    scanf("%d %d", &k1, &k2);
    zamijeni_kolone(n, m, matr, k1, k2);

    stamapaj_matricu(n, m, matr);
}