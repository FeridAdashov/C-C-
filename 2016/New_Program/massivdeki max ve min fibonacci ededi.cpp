#include <stdio.h>
#define N 5

int yoxla_fib(int n)
{
	int a = 0, b = 1, c = 0;
	
	while(c < n)
	{
		c = a + b;
		a = b;
		b = c;
	}
	if(n == c) return 1;
	else return 0;
}

int main()
{
	int a[N], max = 0, min = 0;
	
	for(int i = 0; i < N; i++)
	scanf("%d", &a[i]);
	
	for(int i = 1; i < N; i++)
	{
		int j = N - 1, t;
		
		while(j >= i)
		{
			if(a[j] < a[j - 1])
			{
				t = a[j];
				a[j] = a[j - 1];
				a[j - 1] = t;
			}
			--j;
		}
	}
	
	for(int i = 0; i < N; i++)
	if(yoxla_fib(a[i]))
	{
		 min = a[i];
		 break;
	}
	
	for(int i = N - 1; i >= 0; i--)
	if(yoxla_fib(a[i]))
	{
		 max = a[i];
		 break;
	}
	
	printf("max = %d\nmin = %d", max, min);
	
	
	
	return 0;
}









