#include <stdio.h>
#include <malloc.h>
int main()
{
	int n, eded;
	bool y = true;
	scanf("%d", &n);
	
	int *p = (int *)malloc(n * 4);
	
	for(int i = 0; i < n; ++i)
		scanf("%d", p + i);
		
	scanf("%d", &eded);
	int i = 0;
	while(i < n - 1)
	{
		if(eded == *(p + (i + n) / 2))
		{
			printf("tapildi");
			y = false;
			break;
		}
		else if(eded < *(p + (i + n) / 2)) n = (i + n) / 2 - 1;
		else i = (i + n) / 2 + 1;
	}
	if(y) printf("tapilmadi");
	
	return 0;
}
