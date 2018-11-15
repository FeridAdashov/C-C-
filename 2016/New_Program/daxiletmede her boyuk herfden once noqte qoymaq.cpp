#include <stdio.h>
#include <conio.h>

int main()
{
	char ch, setr[100], i = 0;
	
	while((ch = getch()) != 13)
	{
		if(ch >= 'A' && ch <= 'Z')
		{
			setr[i] = '.';
			putchar(setr[i++]);
			setr[i] = ch;
			putchar(setr[i++]);
		}
		else
		{
			setr[i] = ch;
			putchar(setr[i++]);
		}
	}
	
	printf("\n%s", setr);
	
	return 0;
}
