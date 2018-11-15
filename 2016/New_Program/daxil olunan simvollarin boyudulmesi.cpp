#include <stdio.h>
#include <conio.h>
int main()
{
	char ch;
	
	while((ch = getch()) != 13)
	{
		//ch = toupper(ch);
		if(ch >= 'a' && ch <= 'z') ch -= 32;
		putchar(ch);
	}
	return 0;
}
