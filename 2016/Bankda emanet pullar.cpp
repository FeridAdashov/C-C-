#include <stdio.h>
int main()
{
	long long int h = 1, s = 1, n, y = 1;
	scanf("%d", &n);
	
	while(s < n)
	{
		++y;
		h = h * 2 + y;
		s += h;
	}
	
	printf("%lld", y);
	
	return 0;
}
