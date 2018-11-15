#include <stdio.h>
#include <malloc.h>
int main()
{
	const int n = 5;
	int *p = (int *)malloc(4 * n);
	int i, j, k;
	
	for( i = 0; i < n; i++)
	scanf("%d", p + i);
	
	for( i = 1; i < n; i++)
	{
		k = p[i];
		j = i - 1;
		while(j >= 0 && p[j] > k)
		{
			p[j + 1] = p [j];
			j--;
		}
		p[j + 1] = k;
	}
	for( i = 0; i < n; i++)
	printf("%d ", *(p + i));
	return 0;
}
