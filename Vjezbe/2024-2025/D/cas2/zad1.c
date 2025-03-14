#include <stdio.h>
#include <stdlib.h>
#include "matr_lib.h"

int main() {

    int matr[5][4];

    ucitaj_matricu(5, 4, matr);
    stamapaj_matricu(5, 4, matr);

    return 0;
}