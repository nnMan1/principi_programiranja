#include <stdio.h>
#include <stdlib.h>

int uvecaj(int x) {
    return x+1;
}

int kvadrat(int x) {
    return x * x;
}

int negacija(int x) {
    return -x;
}

void modifikuj(int *arr, int n, int (*modifikacija)(int)) {
    for(int *it=arr;it<arr+n;it++)
        *it = modifikacija(*it);
}

void print_arr(int *arr, int n) {
    for(int i=0;i<n;i++)
        printf("%d ", arr[i]);
    
    printf("\n");
}

int main() {

    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i=0;i<n;i++)
        scanf("%d", arr+i);

    modifikuj(arr, n, uvecaj);
    print_arr(arr, n);

    modifikuj(arr, n, kvadrat);
    print_arr(arr, n);

    modifikuj(arr, n, negacija);
    print_arr(arr, n);

    return 0;
}