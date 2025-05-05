#include <stdio.h>

int main()
{
  int x, i = 0;
  unsigned int mask1 = 1;
  unsigned int mask2 = 2;
  
  scanf("%d", &x);
  
  while(mask2 != 0)
  {
    if (x&mask1 && x&mask2) i++;
    mask2 <<= 1;
    mask1 <<= 1;
  }

  printf("%d\n", i);
  
  return 0;
}