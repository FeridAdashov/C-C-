#include <stdio.h>

int  cem(int n, int m){
	return n + m;
}
int  ferq(int n, int m){
	return n - m;
}
int  hasil(int n, int m){
	return n * m;
}
int  nisbet(int n, int m){
	return n / m;
}
int  qaliq(int n, int m){
	return n % m;
}
int kicik(int n, int m){
	(n < m) ? n : n = m;
	return n;
}

int main()
{
	int (*f[6])(int, int) = {cem, ferq, hasil, nisbet, qaliq, kicik}, n, m;
	
	scanf("%d%d", &n, &m);
	
	for(int i = 0; i < 6; i++)
	printf("%d\n", f[i](n, m));
	
	return 0;
}
