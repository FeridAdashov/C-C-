#include <stdio.h>
#include <cstring>


int main()
{
	FILE* file = fopen("i.txt", "r");
	
	char ch [5] = "\0";
	fscanf(file, "%s", ch);
	
	int x = 0;
	x += ch[0] - '0';
	if(strlen(ch) > 1)
	x = x * 10 + ch[1] - '0';
	
	fclose(file);
	file = fopen("i.txt", "w");
	fprintf(file, "%d", x + 1);
	
	strcat(ch, ".txt");
	fclose(file);
	file = fopen(ch, "w");
	fclose(file);
}
