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

unsigned mirror(unsigned x)
{
    unsigned mask = 1 << (sizeof(unsigned)*8 - 1);
    unsigned mask1 = 1;
    unsigned resenje = 0;
    
    while(mask1)
    {
	if (mask1 & x) resenje = resenje ^ mask;
	mask >>= 1;
	mask1 <<= 1;
    }
    
    return resenje;
}

int main()
{
    unsigned x;
    
    printf("Unesi broj\n");
    scanf("%u", &x);
    
    unsigned k = mirror(x);
    
    print_bits(x);
    print_bits(k);
    
    return 0;
}
