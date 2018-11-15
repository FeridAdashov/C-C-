#include <stdio.h>
int main()
{
	int N, i, say = 1, p = 0;
	
	scanf("%d", &N);
	
	for(i = 0; i < N; ++i)
	{
		p += 2;
		say += p;
	}
	
	printf("%d", say);
	
	return 0;
}
