#include <stdio.h>
int main()
{
	int N, gun, saat, deq;
	
	scanf("%d", &N);
	
	gun = N / (24 * 3600); printf("%d", gun);
	N -= (gun * 24 * 3600);
	
	saat = N / 3600;	   printf(" %d", saat);
	N -= ;
	
	deq = N / 60; 		   printf(" %d", deq);
	N -= deq * 60;
						   printf(" %d", N);
	return 0;
}

