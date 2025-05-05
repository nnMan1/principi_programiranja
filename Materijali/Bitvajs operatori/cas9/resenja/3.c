#include <stdio.h>

void print_bits(int x)
{
    unsigned mask = 1 << (sizeof(int)*8-1);
    
    while(mask)
    {
	mask & x ? printf("1") : printf("0");
	mask >>= 1;
    }
    putchar('\n');
}

int main()
{
    int x;
    unsigned mask = 1;
    int k;
    
    printf("Unesi broj i poziciju\n");
    scanf("%d%d", &x, &k);

	if (k < 0 || k >= (int)(sizeof(int)*8))
	{
		printf("pozicija nije u dobrom opsegu\n");
		return -1;
	}
    
    mask = 1 << k;
    
	//provera
    //print_bits(x);
    
    x = x | mask;
    
	//provera
    //print_bits(x);

    printf("%d\n", x);
    
    return 0;
}
