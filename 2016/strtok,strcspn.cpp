#include <stdio.h>
#include <cstring>
int main(){
	
	char *setr1 = "ferid 45 yt", *setr2 = "5";
	printf("%u", strcspn(setr1, setr2));
	
	char *str1 = "ferid 45 yt", *str2 = "ref";
	printf("\n%u", strspn(str1, str2));
	
	char s1[20] = "ferid Adasov";
	char *ayir;
	
	ayir = strtok(s1, " ");
	
	while(ayir != NULL)
	{
		printf("\n%s", ayir);
		ayir = strtok(NULL, " ");
	}
	return 0;
}

