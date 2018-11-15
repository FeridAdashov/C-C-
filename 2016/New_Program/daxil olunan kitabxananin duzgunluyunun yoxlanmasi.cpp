#include <stdio.h>
#include <cstring>
int main()
{
	char str[50];
	int say = 0, i = 0;
	gets(str);
	if (!strstr(str, "#include"))
	{
		puts("Wrong");
		return 0;
	}
	else {
		char *p = strstr(str, "#include");
		p += 8;
		while (*p != '<' && *p != '"' && *p)
			if (*p++ != ' ')
			{
				puts("Wrong");
				return 0;
			}
	}
	if (strchr(str, '<'))
	{
		while (str[i])
			if (str[i++] == '>')say++;
		if (say != 1 || str[i - 1] != '>')
		{
			puts("Wrong");
			return 0;
		}
	}


	i = 0; say = 0;
	if (strchr(str, '"'))
	{
		while (str[i])
		if (str[i++] == '"')say++;
		if (say != 2 || str[i - 1] != '"')
		{
			puts("Wrong");
			return 0;
		}
	}
	
	{
		char *p = strchr(str, '<'), i = 0;
		if (!p) p = strchr(str, '"');
		while (p[i] && p[i] != '>' && p[i] != '"')
			if (p[i++] == ' ')
			{
				puts("Wrong");
				return 0;
			}
	}

	{
		char *p = strchr(str, '>'), *p1 = strchr(str, '.');
		if (p && p1 && *++p != 'h')
		{
			puts("Wrong");
			return 0;
		}
	}


	puts("True");
	return 0;
}
