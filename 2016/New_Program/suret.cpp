#include <stdio.h>

int main(void)
{
	int i, j, k, n, s = 0;
	
	for(i = 0; i + 9 < n; i += 2)
	for(j = i; j < i * i; j = j * 2)
	for(k = i * j + 2; k < n; k++)
	while(k-- > 0) ++s;
	
	printf("%d --> %d\n", n, s);

	/*
	f(n) = O( n^3 * log^2 )
	mence :)
	*/
	return 0;
}
