#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main() {

    /*char str1[] = "Marko";
    char *str2 = "Janko";

    str1[0] = 'm';

    printf("%s\n", str1);
    printf("%s\n", str2);*/

    // char str[] = "123.!mark oMarko";

    // for(int i=0;i<strlen(str);i++) {
    //     printf("isdigit(%c) => %d\n", str[i], isdigit(str[i]));
    //     printf("isalpha(%c) => %d\n", str[i], isalpha(str[i]));
    //     printf("isalnum(%c) => %d\n", str[i], isalnum(str[i]));
    //     printf("isxdigit(%c) => %d\n", str[i], isxdigit(str[i]));
    //     printf("islower(%c) => %d\n", str[i], islower(str[i]));
    //     printf("isupper(%c) => %d\n", str[i], isupper(str[i]));
    //     printf("tolower(%c) => %c\n", str[i], tolower(str[i]));
    //     printf("isspace(%c) => %d\n", str[i], isspace(str[i]));


    //     printf("\n");
    // }

    // char str_x[] = "3567";
    // char str_y[] = "-35";

    // int x = atoi(str_x);
    // int y = atoi(str_y);
    // printf("x + y = %d", x + y);

    // char str_x[] = "35.67petar";
    // char str_y[] = "-35.25e-1";

    // double x = atof(str_x);
    // double y = atof(str_y);
    // printf("x + y = %lf", x + y);

    // char *ost_ptr;
    // double x = strtod(str_x, &ost_ptr);
    // printf("x = %lf, ost = %s\n", x, ost_ptr);

    // ost_ptr[0] = 'P';
    // printf("%s\n", str_x);

    // char str_x[] = "1010104";
    // char *ost_ptr;

    // int x = strtol(str_x, &ost_ptr, 8);
    // printf("x = %d, ost = %s\n", x, ost_ptr);

    // char c = getchar();
    // putchar(c);

    // char str[100];
    // gets(str);
    // puts(str);

    // char ime[] = "Marko";
    // char prezime[] = "Markovic";
    // char smjer  = 'C';
    // int br_ind = 19;
    // int god_upisa = 24;

    // char student[100];
    // sprintf(student, "%s %s %d/%d %c", ime, prezime, br_ind, god_upisa, smjer);
    // printf("Student %s", student);

    // char student[] = "Student Marko Markovic 19/24 C";
    // char ime[50];
    // char prezime[50];
    // char smjer;
    // int br_ind;
    // int god_upisa;

    // sscanf(student, "Student %s %s %d/%d %s", ime, prezime, &br_ind, &god_upisa, &smjer);
    // printf("Ime: %s\n", ime);
    // printf("Prezime: %s\n", prezime);
    // printf("Br indeksa: %d\n", br_ind);
    // printf("Godina upisa: %d\n", god_upisa);
    // printf("Smjer: %c\n", smjer);

    // strcpy(ime, prezime);
    // ime[0] = 'm';
    // printf("Ime: %s\n", ime);   
    // printf("Prezime: %s\n", prezime); 
    
    // strncpy(ime, prezime+2, 30);
    // ime[0] = 'm';
    // printf("Ime: %s\n", ime);   
    // printf("Prezime: %s\n", prezime); 

    // strcpy(ime, "Marko");
    // strcat(ime, " ");
    // strcat(ime, prezime);
    // printf("Ime i prezime: %s\n", ime);

    // strcpy(ime, "Marko");
    // strcat(ime, " ");
    // strncat(ime, prezime, 3);
    // printf("Ime i prezime: %s\n", ime);

    // char ime1[] = "Marako";
    // char ime2[] = "Marko";

    // printf("%d\n", strcmp(ime1, ime2));
    // printf("%d\n", strncmp(ime1, ime2, 3));

    // char tekst[] = "jasdnas123jndask;ueawipnsdjn";
    // printf("strchr(tekst, 'k') = %s\n", strchr(tekst, 'k'));
    // printf("strcspn(tekst, \"0123456789\") = %d\n", strcspn(tekst, "0123456789"));
    // printf("strcspn(tekst, \"0123456789\") = %s\n", strpbrk(tekst, "0123456789"));
    // printf("strstr(tekst, \"as\") = %s\n", strstr(tekst, "as"));

    char tekst[] = "Ovo je neki dugacak tekst koji bi trebalo da obradimo nekako.Za to nam trebaju riejci iz teksta";
    char *token = strtok(tekst, " ");
    while(token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, " .");
    }

    return 0;
}