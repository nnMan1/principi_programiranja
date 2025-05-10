#include "arrlib.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(void* a, void* b, int size) {
    void* temp = malloc(size);

    memcpy(temp, a, size);
    memcpy(a, b, size);
    memcpy(b, temp, size);

    free(temp);
}

void printArray(int *arr, int n) {
    for(int i=0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void sort_array(void *arr, int n, int size, int (*cmp)(const void *, const void *)) {
    for(int i=0;i<n;i++) 
        for(int j=0;j<n;j++) {
            if(cmp(arr+i*size, arr+j*size)) {
                swap(arr+i*size, arr+j*size, size);
            }
        }
}