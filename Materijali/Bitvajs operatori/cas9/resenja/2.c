#include <stdio.h>

int main()
{
    int x;
    unsigned mask = 1;
    int k;
    
    printf("Unesi broj i poziciju\n");
    scanf("%d%d", &x, &k);
        // pozicija mora da bude nenegativna i manja od 32, odnosno, manja od broja bitova koji se koriste za zapis int-a 
	if (k < 0 || k >= (int)(sizeof(int)*8))
	{
		printf("pozicija nije u dobrom opsegu\n");
		return -1;
	}
    
    mask = 1 << k;
    
    x & mask ? printf("jeste\n") : printf("nije\n");
    
    return 0;
}
