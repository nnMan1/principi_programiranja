#include <stdio.h>
#include <stdlib.h>

int uvecaj(int x) {
    return x + 1;
}

int kvadriraj(int x) {
    return x * x;
}

int negacija(int x) {
    return -x;
}

void modifikuj(int *arr, int n, int (*modifikacija)(int)) {
    for(int i=0;i<n;i++) 
        arr[i] = modifikacija(arr[i]);
}

void stamaj_niz(int *arr, int n) {
    for(int i=0;i<n;i++)
        printf("%d ", arr[i]);

    printf("\n");
}

int main() {

    int n;
    scanf("%d", &n);

    int *arr = malloc(n * sizeof(int));

    for(int *it=arr;it<arr+n;it++)
        scanf("%d", it);

    modifikuj(arr, n, uvecaj);
    stamaj_niz(arr, n);

    modifikuj(arr, n, kvadriraj);
    stamaj_niz(arr, n);

    modifikuj(arr, n, negacija);
    stamaj_niz(arr, n);

    free(arr);

    return 0;
}