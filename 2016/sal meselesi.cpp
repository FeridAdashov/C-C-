#include <stdio.h>
#include <limits.h>
#include <malloc.h>
int main()
{
	int n, m, i, max = INT_MIN, say;
	scanf("%d%d", &n, &m);
	int *p = (int *)malloc(4 * n);
	
	for(i = 0; i < n; i++)
	{
		scanf("%d", p + i);
		if(*(p + i) > max) max = *(p + i);
	}
	
	while(max > 0)
	{
		say = 0;
		for(i = 0; i < n; i++)
		if(*(p + i) / max > 0) say += *(p + i) / max;
		if(say >= m)
		{
			printf("%d", max);
			break;
		}
		max--;
	}
	
	
	return 0;
}
