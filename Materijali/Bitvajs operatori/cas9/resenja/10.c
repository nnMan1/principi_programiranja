#include <stdio.h>

int main()
{
  unsigned int x, i=0;
  unsigned int mask = 1;
  
  scanf("%u", &x);
  
  while(mask != 0)
  {
    if (mask&x) i++;
    mask <<= 1;
  }
  
  if (i == 1) printf("jeste\n");
  else printf("nije\n");
  
  return 0;
}
