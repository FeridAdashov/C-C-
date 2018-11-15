#include <stdio.h>
#include <malloc.h>

void ikilik_kod(long long int n)
{
	for(int i = 63; i >= 0; i--)
	{
		((n >> i) % 2) ? printf("1") : printf("0");
		if(i % 8 == 0)printf(" ");
	}

}

int main(void)
{
	long long int ***p;
	int n = 1, m = 2, k = 3;
	p = (long long int***)calloc(n, 8);
	
	for(int i = 0; i < n; i++)
	{
		*(p + i) = (long long int**)calloc(m, 8);
		for(int j = 0; j < m; j++)
		*(*(p + i) + j) = (long long int*)calloc(k, 8);
	}
	
	for(int i = 0; i < n; i++)
	for(int j = 0; j < m; j++)
	for(int r = 0; r < k; r++)
	scanf("%lld", *(*(p + i) + j) + r);
	
	
	for(int i = 0; i < n; i++)
	for(int j = 0; j < m; j++)
	for(int r = 0; r < k; r++)
	{
		ikilik_kod(*(*(*(p + i) + j) + r));
		puts(" ");
	}
	
	
	
	return 0;
}
