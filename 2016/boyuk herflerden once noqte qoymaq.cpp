#include <stdio.h>
#include <malloc.h>
#include <cstring>
#include <ctype.h>
int main()
{
	
	char *p, s = 0;
	int i = 0, j, ch;
	FILE *file;
	
	file = fopen("metn.txt", "r");
	char *str = (char*)malloc(sizeof(char));
	
	while((ch = getc(file)) != EOF)
	{
		
		*(str + i) = (char)ch;
		str = (char*)realloc(str, (i + 2) * sizeof(char));
		++i;
	}
	fclose(file);
	
	char *str1 = (char*)calloc(i, sizeof(char));
	
	p = strtok(str, " ");
	while(p != NULL)
	{
		if(isupper(*p) && s)
		strcat(str1, ".");
		else if(s++)
		strcat(str1, " ");
		strcat(str1, p);
		p = strtok(NULL, " ");
		
	}
	strcpy(str, str1);	
	free(str1);
	
	printf("%s", str);
	
	file = fopen("metn.txt", "w");
	
	for(i = 0; str[i]; ++i)
	putc(str[i], file);	
	
	return 0;
}
