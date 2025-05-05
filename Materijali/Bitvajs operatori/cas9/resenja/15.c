#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void greska(){
	printf("-1");
	exit(EXIT_FAILURE);
}

int main(){
	int n;
	scanf("%d", &n);

	if(n > 32)
		greska();
	if(n < 0)
		greska();
	
	unsigned niz[32];
	int i;
	for(i = 0; i < n; i++)
		scanf("%u", &niz[i]);
	
	unsigned x = 0;
	unsigned mask = 1;
	
	for(i = 0; i < n; i++){
		unsigned t = mask & niz[i];
		x = x | t;
		mask = mask << 1;
	}
	
	printf("%u", x);
	
	return 0;
}