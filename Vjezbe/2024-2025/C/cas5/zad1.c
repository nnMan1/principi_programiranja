#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int compare_inc(int a, int b) {
    return a > b;
}

int compare_desc(int a, int b) {
    return a < b;
}

void bubblesort(int *arr, int n, int (*compator)(int, int)) {
    for(int i=0;i<n;i++)
    for(int j=0;j<n-1;j++)
        if(compator(arr[j], arr[j+1])) 
            swap(arr+j, arr+j+1);
}

void bubblesort_inc(int *arr, int n) {
    for(int i=0;i<n;i++)
        for(int j=0;j<n-1;j++)
            if(arr[j] > arr[j+1]) 
                swap(arr+j, arr+j+1);
}


void bubblesort_dec(int *arr, int n) {
    for(int i=0;i<n;i++)
        for(int j=0;j<n-1;j++)
            if(arr[j] < arr[j+1]) 
                swap(arr+j, arr+j+1);
}

int main() {

    int (*comparators[])(int, int) = {compare_inc, compare_desc};
    // comparators[0] = compare_inc;
    // comparators[1] = compare_desc;

    int n;
    scanf("%d", &n);
    int arr[n];

    int type;
    scanf("%d", &type); //0 -> rastuce
                        //1 -> opadajuce
    
    for(int i=0;i<n;i++)
        scanf("%d", &arr[i]);

    // void (*sort_func)(int *arr, int n) = bubblesort_inc;
    int (*comparator)(int, int) = compare_inc;

    bubblesort(arr, n, comparators[type]);

    for(int i=0;i<n;i++)
        printf("%d ", arr[i]);

    
}