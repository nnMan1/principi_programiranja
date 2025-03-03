#include <stdio.h>

void print_matrix(int n, int m, int matr[n][m]) {
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++)
            printf("%d ", matr[i][j]);
        
        printf("\n");
    }
}