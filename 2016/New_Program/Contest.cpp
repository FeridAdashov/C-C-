#include <stdio.h>
#include <conio.h>
#include <cstring>

int main()
{
	FILE *file;
	char ch, c, k = '1', check;
	
	file = fopen("questions\\data.txt", "r");
	ch = getc(file);
	if(file == NULL)
	{
		puts("Baza yoxdur!!!");
		return 0;
	}
	fclose(file);
	if(ch == '1')
	puts("Siyahida sual yoxdur.");
	
	else
	{
		printf("Bazada %c sual var.", ch - 1);
		
		file = fopen("questions\\1.txt", "r");
		bool b = true;
		while(true)
		{
			char *d;
			
			if(b)
			{
				printf("\n%c.sual: ", k);
				do{
					c = getc(file);
					putchar(c);
				}while(c != EOF);
				fclose(file);
			}
			
			
			puts("\n\n--> Z, <-- A, cixis - X");
			check = getch();
			
			if(check == 'z' || check == 'Z')
			{
				k++;
				if(k >= ch)
				{
					puts("Siyahi bitdi evvele qayitin (A)");
					k = ch;
					b = false;
				}
			
				
				else{
					char a[16] = "\0";
					b = true;
					strcpy(a, "questions\\\\");
					a[11] = k;
					strcat(a, ".txt");
					file = fopen(a, "r");
					d = a;
				}
			}
			if(check == 'a' || check == 'A')
			{
				k--;
				if(k <= '0')
				{
					puts("Siyahi basdadir sona gedin (Z)");
					k = '1';
					b = false;
				}
				
				
				else{
					char a[16] = "\0";
					b = true;
					strcpy(a, "questions\\\\");
					a[11] = k;
					strcat(a, ".txt");
					file = fopen(a, "r");
					d = a;
				}
			}
			if(check == 'x' || check == 'X') break;
		}
	}
	
	
	
	return 0;
}
