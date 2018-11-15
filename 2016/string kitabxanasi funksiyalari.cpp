#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
	printf("isalnum('f') = %d   isalnum('5') = %d   isalnum('%%') = %d\n", isalnum('f'), isalnum('5'), isalnum('%'));
	printf("isalpha('f') = %d   isalpha('5') = %d   isalpha('%%') = %d\n", isalpha('f'), isalpha('5'), isalpha('%'));
	printf("iscntrl('\\t') = %d   iscntrl('p') = %d   iscntrl('%%') = %d\n", iscntrl('\t'), iscntrl('5'), iscntrl('%'));
	printf("isdigit('8') = %d   isdigit('p') = %d   isdigit('%%') = %d\n", isdigit('8'), isdigit('p'), isdigit('%'));
	printf("isgraph('8') = %d   isgraph('%%') = %d   isgraph(' ') = %d\n", isgraph('8'), isgraph('%'), isgraph(' '));
	printf("isupper('a') = %d   isupper('A') = %d   isupper('%%') = %d\n", isupper('a'), isupper('A'), isupper('%'));
	printf("islower('a') = %d   islower('A') = %d   islower('%%') = %d\n", islower('a'), islower('A'), islower('%'));
	printf("isprint('8') = %d   isprint('%%') = %d   isprint(' ') = %d\n", isprint('8'), isprint('%'), isprint(' '));
	printf("ispunct(',') = %d   ispunct(' ') = %d   ispunct('%%') = %d\n", ispunct(','), ispunct(' '), ispunct('%'));
	printf("isspace(',') = %d   isspace('a') = %d   isspace(' ') = %d\n", isspace(','), isspace('a'), isspace(' '));
	printf("isxdigit('8') = %d   isxdigit('c') = %d   isxdigit('t') = %d\n", isxdigit('8'), isxdigit('c'), isxdigit('t'));
	
	printf("memchr(\"ferid\", 'i', 4) = %d  memchr(\"ferid\", 'i', 3) = %d\n", memchr("ferid", 'i', 4), memchr("ferid", 'i', 3));
	printf("memcmp(\"ferid\", \"fe\", 2) = %d  memcmp(\"ferid\", \"fe\", 3) = %d\n", memcmp("ferid", "fe", 2), memcmp("ferid", "fe", 3));
	printf("strchr(\"ferid\"), 'r' = %s\n", strchr("ferid", 'r'));		
	printf("strpbrk(\"ferid\", \"ri\") = %s\n", strpbrk("ferid", "ri"));
	printf("strspn(\"ferid\", \"ferod\") = %d\n", strspn("ferid", "ferod"));
	printf("strstr(\"ferid\", \"ferid\") = %d  (tapildisa musbet deyer eks halda 0)\n\n", strstr("ferid", "ferid"));
	
	printf("strtok funksiyasi - setr = aaabcccbddd, delim = b\n");
	char a[] = "aaabcccbddd";
	char *p;
	p = strtok(a, "b");
	
	while(p != NULL)
	{
		printf("%s\n", p);
		p = strtok(NULL, "b");
	}
	
	return 0;
}
