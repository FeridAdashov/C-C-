#include <cstring>
#include <stdio.h>
#include <malloc.h>
int main()
{
	char *a, *b[20], *p;
	int i = -1, s = 0;
	a = (char*)malloc(100);
	gets(a);
	
	p = strtok(a, " ");
	while (p != NULL)
	{
		++i;
		b[i] = new char[20];
		strcpy(b[i], p);
		p = strtok(NULL, " ");
	}
	int n = i, j;
	char *c;
	
	for(i = 0; i < n; i++)
	{
		j = i + 1;
		while(j > 0 && strlen(b[j]) < strlen(b[j - 1]))
		{
			c = b[j];
			b[j] = b[j - 1];
			b[j - 1] = c;
			j--;
		}
	}
	free(a);
	char *d;
	d = (char*)calloc(100, 1);
	
	for(i = 0; i < n + 1; i++)
	{
		strcat(d, b[i]);
		strcat(d, " ");		
	}
	printf("%s", d);
	return 0;
}


