#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "arrlib.h"

typedef struct student student;
typedef int cioBroj;

struct student {
    char ime[20];
    char prezime[20];
    int broj_indeksa;
    int godina_upisa;
    double prosjek;
};

int compare_int(const int *a, const int *b) {
    if(*a < *b) 
        return 1;
    return 0;
}

int compare_double(const double *a, const double *b) {
    if(*a < *b) 
        return 1;
    return 0;
}

int compare_student(const student *a, const student *b) {
    if(a->prosjek < b->prosjek) 
        return 1;
    return 0;
}

void print_student(struct student s) {
    printf("Student{\n\time: %s\n\tprezime: %s\n\tindeks: %d/%d\n\tprosjek: %.1f\n}", s.ime, s.prezime, s.broj_indeksa, s.godina_upisa % 100, s.prosjek);
}

void velikim_slovima_ime(struct student *s) {
    for(int i=0;i<strlen(s->ime);i++)
        s->ime[i] = toupper(s->ime[i]);
}

struct student uvecaj_prosjek(struct student s) {
    s.prosjek += 0.1;
    return s;
}

void uvecaj_broj(double x) {
    x += 0.1;
}

int main() {

    int n;
    scanf("%d", &n);

    student s[n];

    for(int i=0;i<n;i++) 
        scanf("%s %s %d/%d %lf", s[i].ime, s[i].prezime, &s[i].broj_indeksa, &s[i].godina_upisa, &s[i].prosjek);

    sort_array(s, n, sizeof(student), compare_student);

    for(int i=0;i<n;i++) {
        print_student(s[i]);
        printf("\n");
    }

    // cioBroj a = 5;

    // student s1;
    // strcpy(s1.ime, "Marko");
    // strcpy(s1.prezime, "Jankovic");
    // s1.broj_indeksa = 5;
    // s1.godina_upisa = 2024;
    // s1.prosjek = 8.5;

    // struct student s[30];
    // s[0] = s1;

    // printf("%p\n", &s1);
    // printf("sizeof(stuct student) = %lu\n", sizeof(struct student));
    // print_student(s1);

    // struct student s2 = {"Petar", "Perovic", 4, 2024, 7.9};
    // print_student(s2);

    // struct student *s_ptr = &s2;
    // // printf("Ime: %s\n", (*s_ptr).ime);
    // printf("Ime: %s\n", s_ptr->ime);

    // s1 = uvecaj_prosjek(s1);
    // uvecaj_broj(s1.prosjek);
    // print_student(s1);

    // velikim_slovima_ime(&s1);
    // print_student(s1);

    // int n = 100;

    // int arr1[10] = {2, 4, 5, 8, 1, 3, 2, 4 ,5, 6};

    // sort_array(arr1, n, sizeof(int), compare_int);
    // printArray(arr1, n);

    // double arr2[10] = {2.1, 4.5, -5, 873.7, 1, 3.2, 2, 4 ,5, 6};
    // sort_array(arr2, n, sizeof(double), compare_double);
    // for(int i=0;i<n;i++)
    //     printf("% -5.3f |\n", arr2[i]);

    // int arr2[10] = {2, 4, 5, 8, 1, 3, 2, 4 ,5, 6};

    // printf("%d", memcmp(arr1, arr2, 10*sizeof(int)));
    // return 0;

    // printArray(arr1, n);

    // // for(int i=0; i < n; i++) {
    // //     arr2[i] = arr1[i];
    // // }

    // memmove(arr1, arr1+1, 8*sizeof(int));

    // // arr1[1] = 10;

    // printArray(arr1, n);


    return 0;
}