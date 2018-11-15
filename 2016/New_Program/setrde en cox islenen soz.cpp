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
	
	while(p)
	{
		++s;
		q = (char**)realloc(q, s * sizeof(char*));
		q[s - 1] = (char*)malloc(strlen(p) * sizeof(char));
		strcpy(q[s - 1], p);
		p = strtok(NULL, " ");
	}
	
	
	for(int i = 0; i < s; i++)
	{
		int say = 0;
		for(int j = i; j < s; j++)
		if(strstr(q[i], q[j]))
		++say;
		if(say > max)
		{
			max = say;
			index = i;
		}
	}
	printf("%s", q[index]);
	
	
	return 0;
}
