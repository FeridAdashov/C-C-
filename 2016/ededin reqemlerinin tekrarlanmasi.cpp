#include <stdio.h>

int main()
{
	int x;
	printf("Ededi daxil et: ");
	scanf("%d", &x);
	
	while(1)
	{
		if(x % 10 == (x / 10) % 10)
		{
			printf("Ededde tekrarlanan reqem var.\n");
			break;
		}
		x /= 10;
		
		if(x == 0)
		{
			printf("Bu ededin reqemleri tekrarlanmir.\n");
			break;
		}
	}
	
	return 0;
}
