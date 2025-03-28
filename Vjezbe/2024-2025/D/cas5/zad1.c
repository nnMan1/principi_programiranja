#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int* make_int() {
    int *p = malloc(sizeof(int)); //alociramo promjenljivu na heap
    *p = 5; //dodjeljujemo vrijednost
    return p;
}

void print_array(int *arr ,int n) {
    for(int i=0;i<n;i++)
        printf("%d ", arr[i]);

    printf("\n");
}

int* make_arr(int n) {
    int* arr = malloc(n*sizeof(int));

    for(int i = 0; i < n; i++) 
        arr[i] = rand() % 100;

    return arr;
}

int compare_inc(int a, int b) {
    return a > b;
}

int compare_desc(int a, int b) {
    return a < b;
}

void bubblesort_inc(int *arr, int n) {
    for(int *it=arr;it<arr+n;it++) {
        for(int *jt=arr;jt<arr+n-1;jt++) {
            if(compare_inc(*jt, *(jt+1))) {
                int tmp = *jt;
                *jt = *(jt+1);
                *(jt+1) = tmp;
            }
        }
    }
}

void bubblesort_desc(int *arr, int n) {
    for(int *it=arr;it<arr+n;it++) {
        for(int *jt=arr;jt<arr+n-1;jt++) {
            if(compare_desc(*jt, *(jt+1))) {
                int tmp = *jt;
                *jt = *(jt+1);
                *(jt+1) = tmp;
            }
        }
    }
}

void bubblesort(int *arr, int n, int (*compare)(int, int)) {
    for(int *it=arr;it<arr+n;it++) {
        for(int *jt=arr;jt<arr+n-1;jt++) {
            if(compare(*jt, *(jt+1))) {
                int tmp = *jt;
                *jt = *(jt+1);
                *(jt+1) = tmp;
            }
        }
    }
}

int** make_matrix(int n, int m) {
    int** matrix = malloc(n * sizeof(int*));

    for(int i = 0; i < n; i++) 
        matrix[i] = malloc(m * sizeof(int));

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            matrix[i][j] = i * j;
        }
    }

    return matrix;
}

int main() {

    // int (*compare)(int, int) = compare_desc;
    // printf("%d\n", compare(5, 6));

    // int* p = make_int();
    // printf("%d\n", *p);
    // free(p); //oslobadamo memoriju

    srand(time(NULL));
    
    int n = 15;
    int* arr = make_arr(n);
    free(arr); //oslobadamo memoriju
    arr = make_arr(n); //ponovno alociramo memoriju

    print_array(arr, n);

    bubblesort(arr, n, compare_inc);

    print_array(arr, n);

    free(arr); //oslobadamo memoriju

    // int **matrix = make_matrix(n, n);
    // for(int i = 0; i < n; i++) {
    //     for(int j = 0; j < n; j++) {
    //         printf("%d ", matrix[i][j]);
    //     }
    //     printf("\n");
    // }

    // for(int i = 0; i < n; i++)
    //     free(matrix[i]); //oslobadamo memoriju za svaku kolonu

    // free(matrix); //oslobadamo memoriju niz koji cuva pokazivace na kolone

    return 0;
}