#include <stdio.h>

void iki_kod(char* s, int ch)
{
	for(int i = 7; i >= 0; i--)
	((ch >> i) % 2) ? *s++ = '1' : *s++ = '0';
	*s = '\0';
}

int main()
{
	FILE *file, *_new;
	char a[20], ch, ikilik[9];
	puts("Hansi file-den melumat oxunsun?");
	gets(a);
	file = fopen(a, "r");
	
	puts("Hansi file -a melumat ikilik kod yazilsin?");
	gets(a);
	_new = fopen(a, "w");
	
	while((ch = getc(file)) != EOF)
	{
		iki_kod(ikilik, ch);
		fprintf(_new, "%s", ikilik);
	}
	
	return 0;
}
