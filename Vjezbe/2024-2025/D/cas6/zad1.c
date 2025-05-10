#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void obrni_niz(int *arr, int n) {
    if(n <= 1)
        return;
    
    swap(arr, arr + n - 1);
    obrni_niz(arr + 1, n - 2);
}

void stampaj_niz(int *arr, int n) {
    if(n == 0)
        return;
    
    printf("%d ", arr[0]);
    stampaj_niz(arr + 1, n - 1);
}

void izmiji_niz(int *arr, int n, int k) {
    if(n <= 1)
        return;
    
    int izmijeni = 0;
    if(arr[0] + arr[1] == k)
        izmijeni = 1;

    izmiji_niz(arr + 1, n - 1, k);
    if(izmijeni) 
        arr[0] = arr[1] = 0;
}

int main() {
    int n, k;
    scanf("%d%d", &k, &n);
    int *arr = malloc(n * sizeof(int));

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    izmiji_niz(arr, n, k);
    stampaj_niz(arr, n);
}