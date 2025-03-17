#include <stdio.h>
#include <stdlib.h>

void print_num(const int *x_ptr) {
    printf("%d", *x_ptr);
}

int main() {

    // const int x = 7;
    // x = 5;

    // printf("%d", x);

    int x = 7;
    int y = 9;

    int *x_ptr = &x;
    // *x_ptr = 10; //OK
    // x_ptr = &y; //OK

    // const int *x_ptr = &x; //pokazivac na konstantnu vrijednost. Ne moze da mijenja x. Moze da se preusmjeri 
    //*x_ptr = 10; //NOK
    // x_ptr = &y; //OK
    
    // int *const x_ptr = &x; //konstantan pokazivac, uvijek ce da ukazuje na x. Moze da mijenja z
    // *x_ptr = 10; //OK
    // x_ptr = &y; //NOK

    // const int *const x_ptr = &x; //konstantan pokazivac na konstantnu vrijednost. 
    //x_ptr = &y;   //NOK
    // *x_ptr = 10; //NOK

    print_num(&x);
    // *x_ptr = 6;
    // printf("%d", x);

    return 0;
}