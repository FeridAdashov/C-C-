#include <stdio.h>
int main ()
{
  int M, N, i = 0, say = 0;
  
  scanf("%d%d", &N, &M);
  int a[N];
  
  for(; i < N; ++i) 
  a[i] = 1;
  i = 0;
  while(1)
  {
  	if(a[i] == 0)
  	{
  		if(say != N) printf("NO%d", say);
  		else printf("YES");
  		break;
	}
	else 
	{
		a[i] = 0;
		++say;
	}
	i = i + M;
	if(i > N - 1) i -= N;
  }
  return 0;
}
