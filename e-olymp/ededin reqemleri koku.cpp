#include <stdio.h>
#include <cmath>
int cem(int N)
{
	int cem = 0;
	while(N > 0)
	{
		cem += N %10;
		N /= 10;
	}
	return cem;
}
int kok(int N)
{
	if(cem(N) < 10) return cem(N);
	else return kok(cem(N));	
}

int main()
{
	int N;
	scanf("%d", &N);
	printf("%d", kok(N));	
	return 0;
}
