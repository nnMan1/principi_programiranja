#include <stdio.h>
#include <stdlib.h>

int* napravi_niz(int n) {
    int *niz = malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
        niz[i] = i * i;

    return niz;
}

int main() {
    
    int *niz = napravi_niz(5);

    for(int i=0;i<5;i++)
        printf("%d ", niz[i]);
    
    free(niz);
    
    return 0;
}