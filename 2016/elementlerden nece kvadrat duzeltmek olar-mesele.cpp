#include <stdio.h>
#include <limits.h>
#include <malloc.h>
int main()
{
	int n, i, j, say1, say2 = 0;
	scanf("%d", &n);
	
	int *p = (int*)malloc(n * 4);
	
	for(i = 0; i < n; i++)
	scanf("%d", p + i);
	
	for(i = 0; i < n / 2 + 1; i++)
	{
		say1 = 1;
		if(*(p + i) != 0)
		for(j = i + 1; j < n; j++)
			if(*(p + i) == *(p + j) && *(p + j) != 0)
			{
				++say1;
				*(p + j) = 0;
			}
		if(say1 >= 4) say2 += say1 / 4;
	}
	printf("%d", say2);
	return 0;
}
