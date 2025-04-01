#include <stdio.h>
#include <stdlib.h>

int antirefleksivna(int **matr, int n) {
    for(int i=0;i<n;i++)
        if(matr[i][i] == 1)
            return 0;

    return 1;
}

int antsimetricna(int **matr, int n) {
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            if(matr[i][j] && matr[j][i])
                return 0;
    
    return 1;
}

int tranzitivna(int **matr, int n) {
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            for(int k=0;k<n;k++) 
                if(matr[i][j] && matr[j][k] && !matr[i][k])
                    return 0;

    

    return 1;
}

int main() {
    int n;
    scanf("%d", &n);

    // int *arr = malloc(sizeof(int) * n);
    int **matr = malloc(sizeof(int*) *n);
    for(int i=0;i<n;i++)
        matr[i] = malloc(n*sizeof(int));

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d", &matr[i][j]);

    if(antirefleksivna(matr, n) && antsimetricna(matr, n) && tranzitivna(matr, n)) 
        printf("DA\n");
    else
        printf("NE\n");

    for(int i=0;i<n;i++)
        free(matr[i]);
    free(matr);

    return 0;
}

/*
6
0 0 0 0 0 0
1 0 1 0 1 0
1 0 0 1 1 0
1 1 1 0 1 0
1 0 0 0 0 0
0 0 0 0 0 0
*/