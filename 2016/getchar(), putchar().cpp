#include <stdio.h>

main()
{
	char c;
	puts("Enter text. Include a dot ('.') in a sentence to exit:");
	
	do
	{
		c = getchar(); // veya c = getc(stdin);
		putchar(c);	  // veya putc(c , stdout);	
	}while(c != '.');
	
	return (0);
}
