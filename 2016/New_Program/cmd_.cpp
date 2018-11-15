//Ferid Adasov
//program sozu n defe bir setrde cap etmeye, N x M olculu matris formada bir sozu cap etmeye, dosya yaatmaga yarayir

#include <cstring>
#include <sstream>
#include <conio.h>

using namespace std;
int main()
{
	char a[100];
	int s = 0, i = -1, eded1 = 0;
	puts("Enterd the command!");
	gets(a);
	
	while(a[++i]) if(a[i] == ' ' &&  a[i + 1] && a[i + 1] != ' ') ++s;
	i = 0;
	while(a[i])
	{
		if(a[i] == ' ' && a[i + 1] >= '0' && a[i + 1] <= '9') 
		++eded1;
		++i;
	}
	
	if(s > 2 || eded1 > 2 || eded1 == 0)
	{
		puts("Wrong Entered!!!");
		return 0;
	}
	
	if(s == 1)
	{
		char *p = strtok(a, " "), soz[20];
		int eded;
		strcpy(soz, p);
		stringstream soz1(p = strtok(NULL, " "));
		soz1 >> eded;
		for(int i = 0; i < eded; i++)
		printf("%s ", soz);
	}
	
	else if(s == 2 && eded1 == 2)
	{
		int eded2;
		char *p = strtok(a, " "), soz[20];
		strcpy(soz, p);
		stringstream soz1(p = strtok(NULL, " "));
		soz1 >> eded1;
		stringstream soz2(p = strtok(NULL, " "));
		soz2 >> eded2;
		for(i = 0; i < eded1; i++)
		{
			for(int j = 0; j < eded2; j++)
			printf("%s ", soz);
			printf("\n");
		}	
	}
	
	else
	{
		char *p, soz[20], file_adi[20];
		int eded;
		FILE *file;
		strcpy(soz, p = strtok(a, " "));
		strcpy(file_adi, p = strtok(NULL, " "));
		stringstream soz1(p = strtok(NULL, " "));
		soz1 >> eded;
		
		file = fopen(file_adi, "w");
		for(int i = 0; (i < eded && soz[i]); i++)
		putc(soz[i], file);
	}
	
	getch();
	return 0;
}

