#include <stdio.h>
#include <malloc.h>
void _scanf_(char *s, int n)
{
	int i = 0;
	for(; i < n; i++)
	{
		char ch;
		ch = getc(stdin);
		if(ch == ' ' || ch == '\n')
		{
			s[i] = '\0';
			break;
		}
		s[i] = ch;
	}
	s[i] = '\0';
}

void _gets_(char *s, int n)
{
	int i = 0;
	for(; i < n; i++)
	{
		char ch;
		ch = getc(stdin);
		if(ch == '\n')
		{
			s[i] = '\0';
			break;
		}
		s[i] = ch;
	}
	s[i] = '\0';
}

size_t uzun(char* s)
{
	int i = -1;
	while(s[++i]);
	return i;
}

int Last_Index(char* str, char ch)
{
	int i = 0, x = -1;
	while (str[i])
	if (str[i++] == ch) x = i - 1;
	return x;
}

int First_Index(char* str, char ch)
{
	int i = 0, x = -1;
	while (str[i])
	if (str[i++] == ch)
	{
		x = i - 1;
		break;
	}
	return x;
}

char** _split_(char* str, char ch, int &count)
{
	unsigned char i = 0, j = 0, k;
	count = 0;
	while (str[i])
	if (str[i++] == ch)count++;

	char** s = (char**)calloc(++count, 8);
	for (i = 0; i < count; i++)
		s[i] = (char*)calloc(255, 1);

	for (i = 0; i < count; i++)
	{
		k = 0;
		for (; (str[j] != '\0' && str[j] != ch); j++)
			s[i][k++] = str[j];
		s[i][k] = '\0';
		j++;
	}
	return s;
}

#include <cstring>

void _insert_chr(char* s, char ch, int index)
{
	int len = strlen(s);
	if(index > len)
	{
		puts("Range out of index!");
		return;
	}
	if(index < 0)
	{
		puts("Wrong index!");
		return;
	}
	s[len + 1] = '\0';
	for(int i = len; i >= index; i--)
	s[i + 1] = s[i];
	s[index] = ch;
}

