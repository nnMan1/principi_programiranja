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

unsigned right_rotate(unsigned x, int n)
{
    unsigned mask = 1;
    unsigned mask1 = 0;
    int i;
    
    for(i=0; i<n; i++, mask <<= 1)
	mask1 = mask1 | mask;
    
    mask1 = mask1 & x;
    mask1 = mask1 << (sizeof(unsigned)*8-n);
    
    x = x >> n;
    
    return x ^ mask1;
}

int main()
{
    int n;
    unsigned x;
    
    printf("Unesi broj\n");
    scanf("%u", &x);
    
    printf("Unesite n\n");
    scanf("%d", &n);

	if (n < 0)
	{
		printf("greska u stepenu rotacije\n");
		return -1;
	}
    
    unsigned k = right_rotate(x, n);
    
    print_bits(x);
    print_bits(k);
    
    return 0;
}
