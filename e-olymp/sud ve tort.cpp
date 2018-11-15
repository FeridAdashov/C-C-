#include <stdio.h>
#include <cmath>
int main()
{
	int N, i, say = 0, sud;
	
	scanf("%d", &N);
	int a[N];
	for(i = 0; i < N; ++i)
	scanf("%d", &a[i]);
	
	for(i = 0; i < N; ++i)
	if(a[i] < 30) ++say;
	
	if(say == 0)			  printf("0 0");
	else if(say * 200 <= 900) printf("1 %d", say);
	else if(say * 200 % 900 == 0) printf("%d %d", (say * 200) / 900, say);
	else                      printf("%d %d", (say * 200) / 900 + 1, say);
	
	return 0;
}
