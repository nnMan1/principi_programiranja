#include <stdio.h>
#include <stdlib.h>

void inc(int x) {
    x++;
}

void ucitaj_matr(int n, int m, int matr[n][m]) {
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            scanf("%d", &matr[i][j]);
}

void print_matr(int n, int m, int matr[n][m]) {
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++)
            printf("%d ", matr[i][j]);
    
        printf("\n");
    }
}

int main() {

    int matr[4][5] = {{1, 2, 4}, {0}, {3, 7, 9}};

    ucitaj_matr(4, 5, matr);
    inc(matr[0][0]); //ne utice na element u gornjem lijevom uglu jer je to samo promjenljiva tipa int

    print_matr(4, 5, matr);

    return 0;
}

/*
4 5 6 7 9
5 6 8 9 3
2 1 6 9 8
0 4 7 1 5
*/