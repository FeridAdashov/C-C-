#include <stdio.h>
#include <cstring>

int main()
{
	FILE* file = fopen("Parols.txt", "r");
	char ch;
	
	while((ch = getc(file)) != EOF)
	{
		printf("%c", ch - 10);
	}
	
}
