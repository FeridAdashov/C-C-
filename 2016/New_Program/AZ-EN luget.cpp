#include <stdio.h>
#include <cstring>
bool yoxla(char* s1, char* s2)
{
	int i = 0;
	while(s1[i] && s2[i])
	if(s1[i] != s2[i++])
	return 0;
	return 1;
}
int main()
{
	FILE *AZ, *EN;
	char setr[20];
	bool b = true;
	
	AZ = fopen("AZ.txt", "r");
	EN = fopen("EN.txt", "r");
	puts("Azerbaycan dilinde soz daxil edin:");
	gets(setr);
	if(!AZ && !EN)
	{
		puts("Baza yoxdur!!!");
		return 0;
	}
	while(!feof(AZ))
	{
		char axtar[20] = "\0";
		char baza[20] = "\0";
		fscanf(AZ, "%s", axtar);
		fscanf(EN, "%s", baza);
		if(yoxla(axtar, setr))
		{
			printf("%s", baza);
			b = false;
			break;
		}
	}
	
	if(b) puts("Bele soz bazada yoxdur!");
	return 0;
}
