#include <stdio.h>

int main()
{	

	int a[6] = {10, 20, 50, 100, 200, 500};
	int n, i = 5, say = 0;
	scanf("%d", &n);
	
	while(n > 0)
	{
		if(n - a[i] >= 0)
		{
			++say;
			n -= a[i];
		}
		else --i;
		if(i == -1) break;
	}
	
	if(n == 0)	printf("%d", say);
	else printf("-1");
	return 0;
}
