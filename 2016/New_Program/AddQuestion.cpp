#include <stdio.h>
#include <cstring>
int main()
{
	FILE *file;
	char question[1024], ch, i;
	
	file = fopen("questions\\data.txt", "r");
	i = getc(file);
	
	while(true)
	{
		puts("Sual daxil edirsiz? (h,y)");
		ch = getchar();
		if(ch == 'H' || ch == 'h')
		{
			gets(question);
			puts("Suali daxil edin:");
			gets(question);
			char b[16] = "\0";
			strcpy(b, "questions\\\\");
			b[11] = i;
			strcat(b, ".txt");
			file = fopen(b, "w");
			fputs(question, file);
			fclose(file);
			i++;
		}
		else break;
	}
	file = fopen("questions\\data.txt", "w");
	putc(i, file);
	fclose(file);
    return 0;
}
