#include <stdio.h>
#include <stdlib.h>

void greska(){
	printf("-1");
	exit(EXIT_FAILURE);
}

int main(){
	unsigned int x;
	unsigned int niz[32];
	int n;

	scanf("%u", &x);
	scanf("%d", &n);

	if(n > 32)
		greska();
	if(n < 0)
		greska();
	int i;
	for(i = 0; i < n; i++){
		scanf("%u", &niz[i]);
	}
	unsigned rez = 0;
	unsigned int mask = 1;
	for(i = 0; i < 32; i++){
		unsigned prvi = x & mask;
		unsigned drugi = 0;
		if(i < n)
			drugi = niz[i] & mask;
		
		//printf("%u %u\n", prvi, drugi);
		
		if(prvi == drugi){
			rez = rez | mask;
		}
		mask = mask << 1;
	}
	printf("%u", rez);
	
	return 0;
}
