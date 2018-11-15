#include <stdio.h>
int main()
{
	int i, j, n, k = -1;
	scanf("%d", &n);
	
	for(j = 1; j <= n; j++)
	{
		for(i = 1; i <= n - j + 1; i++)
		printf("%d", i);
		
		for(i = 0; i < k; i++)
		printf(" ");
		k += 2;
		
		if(j == 1) i = n - 1;
		else i = n - j + 1;
		for(;i >= 1; i--)
		printf("%d", i);
		
		printf("\n");
		
	}
		
	return 0;
}
