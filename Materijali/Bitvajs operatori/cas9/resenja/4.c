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

int suma_bitova(int x)
{
    unsigned mask = 1 << (sizeof(int)*8 - 1);
    int suma = 0;
    
    while(mask)
    {
	if (mask & x) suma++;
	mask >>= 1;
    }
    return suma;
}

int main()
{
    int x;
    
    printf("Unesi broj\n");
    scanf("%d", &x);
    
    print_bits(x);
    
    printf("Suma bitova je %d\n", suma_bitova(x));
    
    return 0;
}