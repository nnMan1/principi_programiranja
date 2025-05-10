#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // char broj_a[] = "123";
    // char broj_b[] = "56";

    // int broj_vrijednost_a = atoi(broj_a);
    // int broj_vrijednost_b = atoi(broj_b);

    // printf("Zbir: %d\n", broj_vrijednost_a + broj_vrijednost_b);

    // char *broj_a = "123.2";
    // char *broj_b = "56e-1"; // =  5.6 = 56 * 10^-1

    // double broj_vrijednost_a = atof(broj_a);
    // double broj_vrijednost_b = atof(broj_b);

    // printf("Zbir: %.2f\n", broj_vrijednost_a + broj_vrijednost_b);

    // char *broj_a = "1234534535562";
    // char *broj_b = "564785723480"; 

    // long vrijednost_a = atol(broj_a); 
    // long vrijednost_b = atol(broj_b);

    // printf("Zbir: %ld\n", vrijednost_a + vrijednost_b);

    // char broj_a[] = "123.2marko";
    // char *ptr_stop;

    // double vrijednost = strtod(broj_a, &ptr_stop);
    // printf("Zbir: %.2f\n", vrijednost);

    // printf("Ostatak stringa: %s\n", ptr_stop);
    // ptr_stop[0] = 'M';

    // printf("%s\n", broj_a);

    // char broj_a[] = "12B3.2marko";
    // char broj_a[] = "10101102marko";

    // char *ptr_stop;
    // // long vrijednost = strtol(broj_a, &ptr_stop, 10);
    // long vrijednost = strtol(broj_a, &ptr_stop, 2);

    // printf("Vrijednost %ld\n", vrijednost);
    // printf("Ostatak stringa: %s\n", ptr_stop);

    // char broj_a[] = "123.2marko"; //alocirano na stacku
    // char *broj_b = "1234";  //pokazivac na string literal u data segmentu

    // broj_a[0] = 'M'; //promjena prvog znaka stringa
    // // broj_b[0] = 'M'; //ne smijemo promijeniti string literal

    // char c = getchar();
    // // printf("%c\n", c);
    // putchar(c); //ispisuje znak

    // char tekst[100];
    // gets(tekst); //ucetiava string do \n
    // puts(tekst); //ispisuje string
    // printf("%s\n", tekst);

    // char ime[] = "Marko";
    // char prezime[] = "Markovic";
    // int broj_ideksa = 1;
    // int godina_upisa = 2024;
    // char smjer[] = "C";

    // //Marko Markovic 1/24 C
    // char student[100];
    // sprintf(student, "%s %s %d/%d %s", ime, prezime, broj_ideksa, godina_upisa % 100, smjer);
    // puts(student);

    // char student2[] = "Janko Jankovoc 4/24 D";
    // char ime2[50];
    // char prezime2[50];
    // int br_indeksa2;
    // int god_upisa2;
    // char smjer2[50];

    // sscanf(student2, "%s %s %d/%d %s", ime2, prezime2, &br_indeksa2, &god_upisa2, smjer2);
    // printf("Ime: %s\n", ime2);
    // printf("Prezime: %s\n", prezime2);
    // printf("Br Indeksa: %d\n", br_indeksa2);
    // printf("God Upisa: %d\n", god_upisa2);
    // printf("Smjer: %s\n", smjer2);

    // char broj[] = "123";
    // int x;
    // sscanf(broj, "%d", &x);
    // printf("%d\n", x);


    // char tekst[] = "123marko";
    // char *ptr_stop;
    // int broj = strtol(tekst, &ptr_stop, 10);
    // printf("Broj: %d\n", broj);
    // printf("Ostatak stringa: %s\n", ptr_stop);

    // char ostatak_cop[200];
    // // strcpy(ostatak_cop, ptr_stop); //kopiramo ostatak stringa
    // strncpy(ostatak_cop, ptr_stop, 3); //kopira samo prva tri karaktera iz ptr_stop u ostatak_cop
    // printf("Ostatak stringa kopiran: %s\n", ostatak_cop);

    // ostatak_cop[0] = 'M'; //promjena prvog znaka stringa
    // printf("Ostatak stringa kopiran: %s\n", ostatak_cop);
    // printf("Originalni string: %s\n", tekst);

    // char ime[100] = "Marko";
    // char prezime[] = "Markovic";
    // strcat(ime, " "); //nadovezuje razmak na string ime
    // // strcat(ime, prezime); //nadovezuje prezime na string ime
    // strncat(ime, prezime, 3); //nadovezuje samo prva tri znaka prezimena na string ime

    // printf("Ime: %s\n", ime);
    // printf("Prezime: %s\n", prezime);

    // char ime2[100] = "Marijana";
    // char ime1[100] = "Maja";

    // printf("%s == %s => %d\n", ime1, ime2, ime1 == ime2); //upoedimo da li su pokazivaci jednaki
    // printf("strcmp(%s, %s) => %d\n", ime1, ime2, strcmp(ime1, ime2)); //uporedimo stringove

    // printf("strncmp(%s, %s, 2) => %d\n", ime1, ime2, strncmp(ime1, ime2, 2)); //uporedimo prvi karakter stringova

    char ime[] = "Andrijana";
    // char *d_addr = strchr(ime, 'd'); //prvo pojavljivanje 'd'
    // printf("%s\n", d_addr);
    // printf("%p\n", d_addr); 
    // printf("indx d: %ld\n", d_addr - ime); //indeks 'd' u stringu

    // char *j_addr = strchr(ime, 'j'); //prvo pojavljivanje 'd'
    // printf("%s\n", j_addr);
    // printf("%p\n", j_addr); 
    // printf("indx j: %ld\n", j_addr - ime); //indeks 'd' u stringu

    // char *u_addr = strchr(ime, 'u'); //prvo pojavljivanje 'd'
    // printf("%p\n", u_addr);

    // char tekst[] = "Petar1234Marko";
    // printf("%ld\n", strcspn(tekst, "1234567890")); //prvo pojavljivanje neke cifre
    // printf("%ld\n", strspn(tekst+5, "1234567890")); //koliko karaktera pocev od pozicije 5 predstavlja cifre
    // printf("%s\n", strpbrk(tekst, "1234567890")); //isto kao strcspn ali vraca pokazivac na prvi karakter koji je u stringu
    // printf("%s\n", strrchr(tekst, 'a')); //vraca pokaziva na poslednje pojavljivanje 'a'
    
    // char tekst[] = "Mainarko Markovic";
    // char *p = strstr(tekst, "ar"); //prvo pojavljivanje "ar"
    // printf("%s\n", p); //vraca pokaziva na prvo pojavljivanje "ar"


    char tekst[] = "Ovo je neki dugacak.tekst koji ima puno rijeci";
    char *rijec = strtok(tekst, " ");
    int i = 0;
    while(rijec != NULL) {
        printf("rijec[%d] = %s\n", i, rijec);
        printf("tekt = %s\n", tekst);
        rijec = strtok(NULL, " ."); //kraj rijeci je razmak ili tacka
        i++;
    }
   
    return 0;
}