/*
Napisati program koji sa standardnog ulaza ucitava prirodan broj n
koji predstavlja broj proizvoda u prodavnici
U narednih n redova ucitava se po jedan prozvod u formatur
naziv - cijena. Broj karaktera i svakoj liniji bice manji od 100
Napisati program koji stampa proizvode sortirane po cijeni

Ulaz:
4
soka - 30
crno vino - 150
limunada - 200
sendvic - 120

Izlaz:
sok
sendvic
crno vino
limunada
*/
#include <stdio.h>
#include <stdlib.h>

int cijena_proizvoda(char *s) {
    int i = 0;
    while(s[i] != '-') {
        i++;
    }

    char *cijena_str = s + i + 1;
    s[i] = '\0';

    printf("ime_proizvoda = %s\n", s);
    printf("cijena_proizvoda = %s\n", cijena_str);

    int cijena = 0;

    return cijena;
}

int main() {
    int n;
    scanf("%d", &n);

    char **proizvodi = malloc(n * sizeof(char *));
    for(int i=0;i<n;i++) {
        proizvodi[i] = malloc(100 * sizeof(char));
    }
    
    printf("Unesite proizvode:\n");
    for(int i=0;i<n;i++) {
        fgets(proizvodi[i], 100, stdin);
        cijena_proizvoda(proizvodi[i]);
    }   

    for(int i=0;i<n;i++) 
        free(proizvodi[i]);

    free(proizvodi);
    return 0;
}




