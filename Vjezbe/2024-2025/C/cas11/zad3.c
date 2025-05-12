//napisati program koji sa standardnog ulaza ucitava ime dataoteke.
//Potrebno je sadrzaj datoteke upisati dva tputa u dataoteku 2.txt
#include <stdio.h>
#include <stdlib.h>

int main() {
    char naziv_datoteke[100];
    scanf("%s", naziv_datoteke);

    FILE *fin = fopen(naziv_datoteke, "r");
    FILE *fout = fopen("2.txt", "w");

    char linija[100];
    while(fscanf(fin, "%[^\n]\n", linija) != EOF) {
        fprintf(fout, "%s\n", linija);
    }

    rewind(fin);
    while(fscanf(fin, "%[^\n]\n", linija) != EOF) {
        fprintf(fout, "%s\n", linija);
    }

    fclose(fout);
    fclose(fin);

    return 0;
}