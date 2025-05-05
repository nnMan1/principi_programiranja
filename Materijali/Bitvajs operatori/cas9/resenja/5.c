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

unsigned get_bits(int x, int p, int n)
{
    unsigned mask = 1;
    unsigned mask1 = 0;
    int i;
    
//pravimo masku koja ima n jedinica na poljima najmanje tezine
    for(i=0; i<n; i++, mask <<= 1)
	mask1 = mask1 | mask;
    
    mask1 = mask1 << p;

	//print_bits(mask1);
    
    return x & mask1;
}

int main()
{
    int x, n, p;
    
    printf("Unesi broj\n");
    scanf("%d", &x);
    
    printf("Unesite p i n\n");
    scanf("%d%d", &p, &n);

	if (p < 0 || n < 0 || p+n >= (int)(sizeof(int)*8))
	{
		printf("pozicija nije u dobrom opsegu\n");
		return -1;
	}
    
    unsigned k = get_bits(x, p, n);
    
    print_bits(x);
    print_bits(k);
    
    return 0;
}
