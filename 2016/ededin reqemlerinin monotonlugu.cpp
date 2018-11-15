#include <stdio.h>

int main()
{
	int x, y, z;
	scanf("%d", &x);
	z = x;
	
		while(1)
		{
			if(x % 10 < (x / 10) % 10) break;
			x /= 10;
			if(x == 0)
			{
				printf("Bu ededin reqemleri monoton artandir...\n");
				++y;
				break;
			}
		}

		while(1)
		{
			if(z / 10 != 0 && z % 10 > (z / 10) % 10) break;
			z /= 10;
			if(z == 0)
			{
				printf("Bu ededin reqemleri monoton azalandir...\n");
				++y;
				break;
			}
		}
		
		if(y == 0) printf("Bu ededin reqemleri ne artan nede azalandir...\n");
	return 0;
}
