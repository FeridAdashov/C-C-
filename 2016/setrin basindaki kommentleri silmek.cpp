#include <stdio.h>

int main()
{
	FILE *file, *yeni;
	char ch = 1, ch1 = 1;

	file = fopen("baza.txt", "r");
	if(!file)return 0;
	yeni = fopen("yeni.txt", "w");
	
	while (ch != EOF && ch1 != EOF)
	{
		while ((ch = getc(file)) == ' ');
		ch1 = '\0';
		if (ch == '/' && (ch1 = getc(file)) == '*')
			{
				while (ch != '\n' && ch != EOF)
				{
					ch = getc(file);
					if (ch == EOF)break;
					if (ch == '*')
					{
						s:
						ch1 = getc(file);
						if (ch1 == EOF)break;
						if (ch1 == '/')
						{
							while ((ch = getc(file)) != EOF)
							{
								putc(ch, yeni);
								if (ch == '\n')break;
							}
						}
						else if ((ch1 = getc(file)) == '*')goto s;
					}
				}
			}
		else
		{
			putc(ch, yeni);
			if(ch1)
			putc(ch1, yeni);
			while ((ch = getc(file)) != EOF)
			{
				putc(ch, yeni);
				if (ch == '\n')break;
			}
		}
	}
	
	fclose(file);
	fclose(yeni);
	remove("baza.txt");
	rename("yeni.txt", "baza.txt");
	return 0;
}
