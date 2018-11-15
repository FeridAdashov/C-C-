#include <stdio.h>

int main()
{
	long long int n, s = 0;

	scanf("%lld", &n);

	while (!(n % 10))n /= 10;	
	while (n /= 10) if (!(n % 10))++s;

	printf("%lld", s);

	printf("\n\n");
	return 0;
}
