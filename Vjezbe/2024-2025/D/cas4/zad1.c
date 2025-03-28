#include <stdio.h>
#include <stdlib.h>

void swap(int *x, int *y) {
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

void print(const int *x) {
    // *x = 9;
    //neko ko gleda kod zna da nece *x da bude izmijenjeno u f-ji
}

void bullblesort(int n, int *const arr) {
    for(int i=0;i<n;i++)
        for(int j=0;j<n-1;j++)
            if(*(arr+j) > *(arr+j+1))
            // if(arr[j] > arr[j+1])
                swap(arr+j, arr+j+1);
                // swap(&arr[j], &arr[j+1]);

    // for(int *it=arr;it<arr+n;it++)
    //     for(int *jt=arr;jt<arr+n-1;jt++)
    //         if(*jt > *(jt+1))
    //             swap(jt, jt+1);
}

int main() {
    // // int x = 5, y = 9;
    // // swap(&x, &y);

    // // printf("x = %d, y = %d", x, y);

    // int x = 5;
    // int y = 4;
    // // x = 7;

    // const int *x_ptr1 = &x; //pokazivac na konstantnu vrijednost
    // // *x_ptr1 = 9; //NOK
    // x_ptr1 = &y;     //OK

    // int *const x_ptr2 = &x; //konstantan pokazivac
    // *x_ptr2 = 9;  //OK
    // // x_ptr2 = &y; //NOK

    // const int *const x_ptr3 = &x; //const pokazivac na const vrijednost
    // // *x_ptr3 = 0; //NOK
    // // x_ptr3 = &y; //NOK

    // printf("%d", x);

    int n;
    int *n_ptr = &n;
    double t;
    double *t_ptr = &t;
    printf("sizeof(int) = %ld\n", sizeof(int));
    printf("sizeof(double) = %ld\n", sizeof(double));
    printf("sizeof(n) = %ld\n", sizeof(n));
    printf("sizeof(5) = %ld\n", sizeof(5));
    printf("sizeof(n_ptr) = %ld\n", sizeof(n_ptr));
    printf("sizeof(t_ptr) = %ld\n", sizeof(t_ptr));

    long long int *n_ptr_l = (long long int*)n_ptr;
    void *n_ptr_v = n_ptr;
    // printf("%d", *n_ptr_v); //NOK
    // printf("%d", *(int*)n_ptr_v); //OK


    scanf("%d", &n);
    int arr[n];
    int *arr_ptr = arr;

    printf("sizeof(arr) = %ld\n", sizeof(arr));
    printf("sizeof(arr_ptr) = %ld\n", sizeof(arr_ptr));
    printf("lenght(arr) = %ld\n", sizeof(arr)/sizeof(int));

    printf("arr = %p\n", arr);
    printf("&arr = %p\n", &arr);
    printf("&arr[0] = %p\n", &arr[0]);

    for(int i=0;i<n;i++)
        scanf("%d", &arr[i]);

    bullblesort(n, arr);
    for(int i;i<n;i++)
        printf("%d ", arr[i]);

    return 0;
}