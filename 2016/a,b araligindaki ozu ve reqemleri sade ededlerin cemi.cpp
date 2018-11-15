#include <stdio.h>
#include <cmath>
int main()
{
	int a, b, s = 0;
	scanf("%d%d", &a, &b);
	
	for(int i = a; i <= b; i++)
	{
		int c = i * 10, t = i;
		
		do{
			int y = 0;
			for(int k = 2; k <= sqrt(t); k++)
			if(t % k == 0)
			{
				y = 1;
				break;
			}
			
			if(y)break;
			c /= 10;
			t = c % 10;
		}while(c != 0);
		
		if(!c) s += i;
	}
	
	printf("cem: %d", s);
	
	return 0;
}
