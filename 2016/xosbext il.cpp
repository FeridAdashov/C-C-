#include <stdio.h>
int main()
{
	short n, m, k, x;
	scanf("%d", &n);
	
	for(short i = n + 1; i <= 9000; ++i)
	{
		m = i;
		while(m > 0)
		{
			x = m % 10;
			k = m / 10;
			while(k > 0)
			{
				if(x == k % 10) goto s;
				k /= 10;
			}
			m /= 10;
		}
		if(m == 0)
		{
			printf("%d", i);
			break;
		}
		s:;
	}	
	
	return 0;
}
