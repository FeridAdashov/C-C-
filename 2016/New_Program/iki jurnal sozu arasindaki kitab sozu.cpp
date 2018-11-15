#include <stdio.h>
#include <cstring>
int main()
{
	char str[1000], soz[20], *p;
	int i, say;
	
	gets(str);
	
	p = strtok(str, " ");
	
	while(p != NULL)
	{
		say = 0;
		if(!strcmp(p, "jurnal"))
		{
			p = strtok(NULL, " ");
			while(p != NULL && strcmp(p, "jurnal"))
			{
				if(!strcmp(p, "kitab"))
				++say;
				p = strtok(NULL, " ");
			}
		}
		else p = strtok(NULL, " ");
		if(say == 1 && p != NULL) puts("Tapildi.");
	}
	
	return 0;
}

