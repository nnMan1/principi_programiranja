#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_array(int *arr, int n) {
    for(int i=0;i<n;i++)
        printf("%d ", arr[i]);
    
    printf("\n");
}

void swap(void *a, void *b, int size) {
    void *tmp = malloc(size);
    memcpy(tmp, a, size);
    memcpy(a, b, size);
    memcpy(b, tmp, size);
    free(tmp);
}

void sort_array(void *arr, int n, int size, int (*compare)(void*, void*)) {
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++) {
            if(compare(arr+i*size, arr+j*size))
                swap(arr+i*size, arr+j*size, size);
        }
}