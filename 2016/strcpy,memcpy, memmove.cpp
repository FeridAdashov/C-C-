#include <stdio.h>
#include <cstring>
int main()
{
	{
		char s1[30], s2[] = "Baki Dovlet Universiteti";
		strcpy(s1, s2);
		printf("Strcpy -> s1 = %s", s1);
	}
	
	{
		char s1[30], s2[] = "Baki Dovlet Universiteti";
		strncpy(s1, s2, 5);
		printf("\nStrncpy -> s1 = %s", s1);
	}
	
	{
		char s1[] = "Baki Bulvari", s2[] = "Baki Dovlet Universiteti";
		printf("\nStrcmp(s1, s2) -> %d", strcmp(s1, s2));
		printf("\nStrcmp(s2, s1) -> %d", strcmp(s2, s1));
		printf("\nStrncmp(s1, s2, 5) -> %d", strncmp(s1, s2, 5));
	}
	
	{
		char s1[30], s2[] = "Baki Dovlet Universiteti";
		memcpy(s1, s2, 5);
		printf("\nMemcpy -> s1 = %s", s1);
	}
	
	{
		char s1[30], s2[] = "Baki Dovlet Universiteti";
		memmove(s1, s2, 5);
		printf("\nMemmove -> s1 = %s", s1);
	}
	
	{
		char s1[] = "Baki Bulvari", s2[] = "Baki Dovlet Universiteti";
		printf("\nMemcmp(s1, s2, 10) -> %d", memcmp(s1, s2, 10));
		printf("\nMemcmp(s1, s2, 5) -> %d", memcmp(s1, s2, 5));
	}
	
	{
		const char *setr = "Bu bir setrdir";
		printf("\nmemchr(setr, 's', 10) = %s", memchr(setr, 's', 8));//ilk 8 simvolda 's' -i axtarir tapsa ondan sonrasini gosteren gosterici qaytarir
	}
	
	{
		char setr[] = "ffffffffffff";
		printf("\nmemset - den once setr = %s", setr);
		
		printf("\nmemset - den sonra setr = %s", memset(setr, 'F', 6));
	}
	return 0;
}
