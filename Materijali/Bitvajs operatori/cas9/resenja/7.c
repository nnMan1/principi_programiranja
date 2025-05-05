#include <stdio.h>

void print_bits(unsigned x)
{
    unsigned mask = 1 << (sizeof(int)*8-1);
    
    while(mask)
    {
	mask & x ? printf("1") : printf("0");
	mask >>= 1;
    }
    putchar('\n');
}

unsigned invert_bits(unsigned x, int p, int n)
{
    unsigned mask = 1;
    unsigned mask1 = 0;
    int i;
    
    for(i=0; i<n; i++, mask <<= 1)
	mask1 = mask1 | mask;
    
    mask1 = mask1 << p;
    
    return x^mask1;
}

int main()
{
    int n, p;
    unsigned x;
    
    printf("Unesi broj\n");
    scanf("%u", &x);
    
    printf("Unesite n i p\n");
    scanf("%d%d", &n, &p);

	if (p < 0 || n < 0 || p+n >= (int)(sizeof(int)*8))
	{
		printf("pozicija nije u dobrom opsegu\n");
		return -1;
	}
    
    unsigned k = invert_bits(x, p, n);
    
    print_bits(x);
    print_bits(k);
    
    return 0;
}
