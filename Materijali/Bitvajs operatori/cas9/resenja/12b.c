#include <stdio.h>

int main()
{
  int x;
  int y = 0;
  unsigned int mask1 = 1;
  unsigned int mask2 = 1;
  
  scanf("%d", &x);
  
  while(mask1 != 0)
  {
    if (x & mask1)
    {
      y = y | mask2;
      mask2 <<= 1;
    }
    
    mask1 <<= 1;
  }
  
  printf("%d\n", y);
   
  return 0;
}