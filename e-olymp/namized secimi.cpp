#include <stdio.h>
int main()
{
	int N, i, say = 0, max;
	
	scanf("%d", &N);
	int a[N];
	
	for(i = 0; i < N; ++i)
	scanf("%d", &a[i]);
	
	max = a[0];
	
	for(i = 0; i < N; ++i)
	{
		if(a[i] == max) ++say;
		else if(a[i] > max)
		{
			say = 1;
			max = a[i];
		}
	}
	
	printf("%d", say);
	return 0;
}
