#include <stdio.h>

int main()
{
	char ch;
	int byte, j = 0, baza[1000];
	FILE* data;
	data = fopen("data.txt", "r");
	ch = getc(data);
	scanf("%d", &byte);
	if(byte <= 4)
	while(ch != EOF)
	{
		int x = 0, i = 0;
		while(ch != EOF && ++i <= byte * 8)
		{
			x = x * 2 + ch - '0';
			ch = getc(data);
		}
		if(i < byte * 8)
		{
			puts("ERROR : Bit catismazligi.");
			return 0;
		}
		baza[j++] = x;
	}
	else
	{
		int say = 0;
		while(ch != EOF)
		{
			int x = 0, i = 0;
			while(ch != EOF && ++i <= 8)
			{
				x = x * 2 + ch - '0';
				ch = getc(data);
			}
			if(ch != EOF && i < 8)
			{
				puts("ERROR : Bit catismazligi.");
				return 0;
			}
			else ++say;
			baza[j++] = x;
		}
		if(say % byte) 
		{
			puts("ERROR : Bit catismazligi.");
			return 0;
		}
		puts("Bit sayi INT i asdigi ucun oxuma 1 byte ile gedecek!");
	}
	
	
	for(int i = 0; i < j; i++)
	printf("%d ", baza[i]);
	
    return 0;
}

