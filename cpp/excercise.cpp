#include<stdio.h>

short a = 4544;
int i = 0;

f(short t)
{
	(t != 0)? f() : 0;
	printf("%d", a % 10);
}

int main()
{
	
	f()
	
	return 0;
}
