#include <stdio.h>
#include <stdlib.h>

int inc(int x) {
    return ++x;
}

void inc_arr(int arr[], int n) {
    for(int i=0;i<n;i++)
        arr[i]++;
}

int main() {

    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d", &arr[i]);

    inc_arr(arr, n);

    for(int i=0;i<n;i++)
        printf("%d ", arr[i]);

    // int x; 
    // scanf("%d", &x);

    // x = inc(x);

    // printf("%d", x);

    return 0;
}