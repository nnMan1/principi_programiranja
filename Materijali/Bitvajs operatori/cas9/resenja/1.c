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
    
    printf("Unesi broj\n");
    scanf("%d", &x);
    
    print_bits(x);
    
    return 0;
}