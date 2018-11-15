#include <stdio.h>

char *enter_str(char *s, int say)
{
	char ch, *p = s;
	
	for(int i = 0; i < say; i++)
	{
		ch = getchar();
		
		if(ch == '\n')
		{
			s[i] = '\0';
			return p;
			break;
		}
		else s[i] = ch;
	}
	return p;
}
int main()
{
   char a[20], *b;
   b = enter_str(a, 20);
   for(int i = 0; a[i]; i++)
   printf("%c", a[i]);
   printf("\n%s", b);
   return(0);
}
