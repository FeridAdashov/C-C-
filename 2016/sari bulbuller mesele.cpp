#include <iostream>
int main()
{
	int n, k, min = 0, max = 1;
	scanf("%d%d", &n, &k);
	if(n > k)
	max = n + 1 - k;
	min = n / k;
	if(n % k) ++min;
	
	printf("%d %d", min, max);
	return 0;
}
