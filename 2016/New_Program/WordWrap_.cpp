#include <stdio.h>
#include <cstring>

int index(char s[], int yer)
{
	while (s[yer] != ' ' && s[yer++]);
	if (s[yer - 1] == '\0')yer--;
	return yer;
}

int main()
{
	char setr[200];
	int len, say = 5, i = -1;
	gets(setr);
	len = strlen(setr);
	while (setr[++i] == ' ');
	for (; i < len; i++)
	{
		int yer = index(setr, i + 1), j = 0;
	
		if (yer - i >= say)
		{
			while (setr[i++] == ' ');
			--i;
			while (j < say)printf("%c", setr[i + j++]);
			printf("\n");
			i = i + say -  1;
		}

		else
		{
			while (index(setr, yer + 1) - i <= say && yer != len)
				yer = index(setr, yer + 1);

			if (index(setr, yer + 1) - yer - 1 > say && yer - i < say)
				yer = i + say - 1;
			
			while (setr[i++] == ' ');
			--i;

			while (i <= yer && setr[i]) printf("%c", setr[i++]);
			printf("\n");
			--i;
		}
	}
	
	return 0;
}
