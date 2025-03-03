#include <stdio.h>
#include <stdlib.h>

int inc(int x) {
    return x++;
}

void inc_arr(int arr[], int n) {
    for(int i=0;i<n;i++)
        arr[i]++;
}

int main() {

    printf("Unesite duzinu niza: ");

    int n;
    scanf("%d", &n);

    // n = inc(n);
    // printf("%d", n);

    int arr[n];

    printf("Unesite elemente niza: ");
    for(int i=0;i<n;i++)
        scanf("%d", &arr[i]);

    inc_arr(arr, n);

    for(int i=0;i<n;i++)
        printf("%d ", arr[i]);

    return 0;
}