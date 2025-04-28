#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "arrlib.h"

typedef struct student student;
typedef int cio_broj;

struct student {
    char ime[30];
    char prezime[30];
    int broj_indeksa;
    int godina_upisa;
    double prosjek;
};

int compare_int(void *_a, void *_b) {
    int *a = (int*)_a;
    int *b = (int*)_b;
    if(*a < *b)
        return 1;
    return 0;
}

int compare_student(void *_a, void *_b) {
    student *a = (student*)_a;
    student *b = (student*)_b;

    if(a->prosjek > b->prosjek)
        return 1;
    return 0;
}

void print_student(struct student s) {
    printf("Student {\n\tIme: %s\n\tPrezime: %s\n\tBrIndeksa: %d\n\tGodinaUpisa: %d\n\tProjek: %lg\n}\n", s.ime, s.prezime, s.broj_indeksa, s.godina_upisa, s.prosjek);
}

void uvecaj_prosjek(student s) {
    s.prosjek += 0.1;
}

void uvecaj_prosjek_ptr(student *s) {
    s->prosjek += 0.1;
}

void uppercase_ime(student s) {
    for(int i=0;i<strlen(s.ime);i++)
        s.ime[i] = toupper(s.ime[i]);
}

void upperace_string(char *s) {
    for(int i=0;i<strlen(s);i++)
        s[i] = toupper(s[i]);
}

int main() {

    // cio_broj x = 5;
    // printf("%d", x);

    struct student marko;
    strcpy(marko.ime, "Marko");
    strcpy(marko.prezime, "Markovic");
    marko.broj_indeksa = 4;
    marko.godina_upisa = 2024;
    marko.prosjek = 9.3;

    print_student(marko);

    struct student c_smjer[4];
    student* student_ptr = &marko;

    printf("Student {\n\tIme: %s\n\tPrezime: %s\n\tBrIndeksa: %d\n\tGodinaUpisa: %d\n\tProjek: %lg\n}\n", 
            student_ptr->ime, 
            student_ptr->prezime, 
            student_ptr->broj_indeksa, 
            (*student_ptr).godina_upisa, 
            (*student_ptr).prosjek);

    student petar = {"Petar", "Petrovic", 15, 24, 7.3};
    print_student(petar);

    printf("siuvecaj_prosjek_ptrzeof(student) = %ld\n", sizeof(student));

    uvecaj_prosjek(petar);
    print_student(petar);

    uvecaj_prosjek_ptr(&petar);
    print_student(petar);

    uppercase_ime(petar);
    print_student(petar);

    upperace_string(petar.ime);
    print_student(petar);

    c_smjer[0] = petar;
    c_smjer[1] = marko;
    student temp = {"Ana", "Markovic", 1, 24, 6.3}; 
    c_smjer[2] = temp;

    student temp1 = {"Andrijana", "Bozovic", 9, 24, 9.1}; 
    c_smjer[3] = temp1;
        printf("####################################\n");
    // sort_array(c_smjer, 4, sizeof(student), compare_student);
    qsort(c_smjer, 4, sizeof(student), compare_student);

    for(int i=0;i<4;i++)
    print_student(c_smjer[i]);

    // int arr1[] = {4, 5, 7, 9, 12, 3, 1, 8};
    // int arr2[8] =  {4, 5, 7, 9, 12, 3, 1, 8};

    // // printf("%d\n", memcmp(arr1, arr2, 8*sizeof(int)));
    // sort_array(arr1, 8, sizeof(int), compare_int);
    // print_array(arr1, 8);

    // memcpy(arr2, arr1, sizeof(arr1));

    // print_array(arr1, 8);
    // print_array(arr2, 8);

    // int x = arr1[0];
    // memcpy(arr1, arr1+1, 7*sizeof(int));
    // arr1[7] = x;

    // print_array(arr1, 8);
    // print_array(arr2, 8);

    return 0;
}