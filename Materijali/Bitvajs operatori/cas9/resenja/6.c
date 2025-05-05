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

unsigned set_bits(unsigned x, int p, int n, unsigned y)
{
    unsigned mask = 1, mask1 =  0;
    int i;
    
    for(i=0; i<n; i++, mask <<= 1)
	mask1 = mask1 | mask;
    
    unsigned mask3 = mask1 << p;
    mask3 = ~mask3;
    x = x & mask3;
    
    unsigned mask2 = mask1 & y;
    
    mask2 = mask2 << p;
    
    return mask2 | x;
}

int main()
{
    unsigned x, y;
    int n, p;
    
    printf("Unesi brojeve\n");
    scanf("%u%u", &x, &y);
    
    printf("Unesite n i p\n");
    scanf("%d%d", &n, &p);

    if (p < 0 || n < 0 || p+n >= (int)(sizeof(int)*8))
	{
		printf("pozicija nije u dobrom opsegu\n");
		return -1;
	}
    
    unsigned k = set_bits(x, p, n, y);
    
    printf("x:");print_bits(x);
    printf("y:");print_bits(y);
    printf("k:");print_bits(k);
    
    return 0;
}
