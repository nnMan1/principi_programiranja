// Napisati program koji ucitava cifre za dva pozitivni velika broja u obliku stringa
// Potrebno je stampati zbir ucitanih brojeva

#include <stdio.h>
#include <stdlib.h>

int broj_cifara(char br1[]) {
    int cnt = 0;

    for(int i=0;br1[i]!='\0';i++)
        cnt++;

    return cnt;
}

void flip(char br[]) {
    int n = broj_cifara(br);

    for(int i=0;i<n / 2;i++) {
        char tmp = br[i];
        br[i] = br[n-1-i];
        br[n-1-i] = tmp;
    }
}

int saberi(char br1[], char br2[], char zbir[]) {

    flip(br1);
    flip(br2);

    int prenos = 0;
    int br_cif1 = broj_cifara(br1);
    int br_cif2 = broj_cifara(br2);
    int br_cif_z = (br_cif1 > br_cif2 ? br_cif1 : br_cif2) + 1;

    for(int i=0;i<br_cif_z;i++)
        zbir[i] = '0';

    zbir[br_cif_z] = '\0';

    for(int i=0;i<br_cif_z ; i++) {

        int c1 = 0, c2 = 0;
        if(i < br_cif1) c1 = br1[i] - '0';
        if(i < br_cif2) c2 = br2[i] - '0';

        prenos += c1 + c2;

        zbir[i] = '0' + prenos % 10;
        prenos /= 10;
    }

    if(zbir[br_cif_z-1] == '0')
        zbir[br_cif_z-1] = '\0';
    
    flip(br1);
    flip(br2);
    flip(zbir);

    return br_cif_z;
}

int main() {

    char br1[100];
    char br2[100];
    char zbir[100];

    scanf("%s", br1);
    scanf("%s", br2);

    //123 -> 321
    //12 -> 21

    saberi(br1, br2, zbir); 
    printf("%s", zbir);

    return 0;
}
