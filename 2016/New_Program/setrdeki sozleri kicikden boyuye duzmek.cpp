#include <stdio.h>
#include <string.h>
#include <malloc.h>

int main()
{
	char str[1024], *p, **q;
	int s = 0, index = 0, max = 0;
	gets(str);
	q = (char**)malloc(sizeof(char*));
	p = strtok(str, " ");

	while (p)
	{
		++s;
		q = (char**)realloc(q, s * sizeof(char*));
		q[s - 1] = (char*)malloc(30 * sizeof(char));
		strcpy(q[s - 1], p);
		p = strtok(NULL, " ");
	}


	for (int i = 1; i < s; i++)
	{
		int j = i;
		while (j > 0 && strlen(q[j]) < strlen(q[j - 1]))
		{
			char soz[30];
			strcpy(soz, q[j]);
			strcpy(q[j], q[j - 1]);
			q[j][strlen(q[j - 1])] = '\0';
			strcpy(q[j - 1], soz);
			q[j - 1][strlen(soz)] = '\0';
			j--;
		}
	}
	for (int i = 0; i < s; i++)
		printf("%s\n", q[i]);

	return 0;
}
