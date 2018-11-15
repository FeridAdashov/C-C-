#include <stdio.h>

int main()
{
	FILE *baza, *yeni;
	char ch = 1, ch1;
	
	baza = fopen("baza.txt", "r");
	yeni = fopen("yeni.txt", "w");
	
	while(true)
	{
		ch = getc(baza);
		if(ch == EOF) break;
		if(ch != '/') putc(ch, yeni);
		else
		{
			ch1 = getc(baza);
			if(ch1 != '*')
			{
				putc(ch, yeni);
				putc(ch1, yeni);
			}
			else
			{
				unsigned int i = 2;
				bool b = false;
				char ehtiyat[1024];
				ehtiyat[0] = '/';
				ehtiyat[1] = '*';
				while((ch = getc(baza)) != EOF)
				{
					ehtiyat[i++] = ch;
					if(ch == '*')
					{	s:
						ch = getc(baza);
						ehtiyat[i++] = ch;
						if(ch == '/')
						{
							b = true;
							break;
						}
						else if(ch == '*')goto s;
					}
				}
				ehtiyat[i] = '\0';
				if(!b)
				{
					i = 0;
					while(ehtiyat[i]) putc(ehtiyat[i++], yeni);
				}
			}
		}
	}
	fclose(baza);
	fclose(yeni);
	remove("baza.txt");
	rename("yeni.txt", "baza.txt");
	
	return 0;
}
