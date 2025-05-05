#include <stdio.h>

union broj
{
    int ibroj;
    float fbroj;
};

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
  	union broj x;
   
    printf("Unesi broj\n");
    scanf("%f", &x.fbroj);
    
    print_bits(x.ibroj);
    
    return 0;
}

