#include <stdio.h>
#include <stdlib.h>

void print_array(int n, int data[]) {
    for(int i=0;i<n;i++)
        // printf("%d ", data[i]);
        printf("%d ", *(data+i));
}

void swap(int *x, int *y) {
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

void bubblesort(int n, int data[]) {
   
    for(int i=0;i<n;i++)
        for(int *j_ptr=data;j_ptr<data+n-1;j_ptr++)
            if(*j_ptr > *(j_ptr+1)) 
                swap(j_ptr, j_ptr+1);
} 

void selectionsort(int n, int *const data) {
    printf("sizeof(data) = %ld\n", sizeof(data));

    // for(int i=0;i<n;i++)
    //     for(int j=i+1;j<n;j++)
    //         if(data[i] > data[j])
    //             swap(data+i, data+j);

    for(int *x_ptr=data;x_ptr!=data+n;x_ptr++)
        for(int *y_ptr=x_ptr+1;y_ptr!=data+n;y_ptr++)
            if(*x_ptr > *y_ptr)
                swap(x_ptr, y_ptr);
}

int main() {

    int x = 5;
    // long long int y = 7;
    // int *x_ptr = &x;
    // long long int *y_ptr = &y;

    // x_ptr = (int*)y_ptr;

    // printf("%p\n", x_ptr);
    // printf("%d", *x_ptr);
    
    // void *v_ptr = x_ptr;
    // // printf("%d", *v_ptr); //NOK
    // printf("%d", *(int*)v_ptr); //OK

    // return 0;


    printf("sizof(int) = %ld\n", sizeof(int));
    printf("sizof(double) = %ld\n", sizeof(double));
    printf("sizof(x) = %ld\n", sizeof(x));
    printf("sizof(5) = %ld\n", sizeof(5));

    scanf("%d", &x);

    int data[x];

    printf("data = %p\n", data);
    printf("&data[0] = %p\n", &data[0]);
    printf("&data = %p\n", &data);

    for(int i=0;i<x;i++)
        scanf("%d", &data[i]);

    printf("sizeof(data) = %ld\n", sizeof(data));

    selectionsort(x, data);
    
    // bubblesort(x, data);

    print_array(x, data);

    return 0;
}