// Napisati program koji provjerava da li je data matrica cijelih brojeva Toplicova. 
// Matrica se smatra Toplicovom ukoliko za svaku dijagonalu paralelnu glavnoj dijagonali 
// (uključujući i samu glavnu dijagonalu) važi da su svi elementi na dijagonali jednaki. 
// Ukoliko je matrica Toplicova odštampati riječ “DA”. U suprotnom odštampati riječ “NE”.
#include <stdio.h>
#include "matr_lib.h"

int main() {
    int n, m;
    scanf("%d%d", &n, &m);

    int matr[n][m];
    ucitaj_matricu(n, m, matr);
    
    printf("%s", toplicova(n, m, matr) ? "DA" :"NE");

    return 0;
}