#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	srand(time(NULL));
	FILE *file;
	
	file = fopen("random_symbols.txt", "w");
	
	for(int i = 0; i < 5000; i++)
	putc(rand() % 127, file);
	
	
	return 0;
}
