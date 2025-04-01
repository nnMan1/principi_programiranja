#include <stdio.h>
#include <stdlib.h>

void swap(int *x, int *y) {
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

void obrni(int *arr, int n) {
    if(n <= 1)
        return;

    swap(arr, arr+n-1);
    obrni(arr+1, n-2);
}

void zad14(int arr[], int n, int x) {
    if(n < 2)
        return;

    int nula = 0;
    if(arr[0] + arr[1] == x)
        nula = 1;
    
    zad14(arr+1, n-1, x);

    if(nula)
        arr[0] = arr[1] = 0;
}

int skalarni_proizvod(int* a, int* b, int n) {
    if(n == 0)
        return 0;

    return *a * *b + skalarni_proizvod(a+1, b+1, n-1);
}

void ucitaj(int *arr, int n) {
    if(n == 0)
        return;
    
    scanf("%d", arr);
    ucitaj(arr+1, n-1);
}

void stampaj(int *arr, int n) {
    if(n == 0)
        return;

    printf("%d ", *arr);
    stampaj(arr+1, n-1);
}

int main() {

    int x;
    scanf("%d", &x);

    int n;
    scanf("%d", &n);
    int *arr = malloc(sizeof(int) * n);

    ucitaj(arr, n);

    zad14(arr, n, x);
    // obrni(arr, n);

    stampaj(arr, n);
    return 0;
}