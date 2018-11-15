#include <stdio.h>

int f(int n)
{
	int s = 0;
	while(n > 0)
	{
		s += n % 10;
		n /= 10;
	}
	return s;
}
int main()
{ 
  int M, N, i, say = 0, min, m, yuxari;
  scanf("%d%d", &M, &N);
  m = M;
  yuxari = N - M + 1;
  int a[yuxari];
  for(i = 0; i < yuxari; ++i, ++m) 
  a[i] =  m;
  
  min = f(a[0]);
  for(i = 0; i < yuxari; ++i)
  {
  	if(f(a[i]) < min)
  	{
  		min = f(a[i]);
  		say = 0;
	}
	if(f(a[i]) == min) ++say;
  }
  printf("%d", say);
  return 0;
}
