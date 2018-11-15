#include <iostream>

using namespace std;

int len(char* s)
{
	int l = 0;
	while(s[l++]);
	return l - 1;
}

void del(char* s, int* i_x, int n, int ms)
{
	register int i, j;
	for(i = 0; i < n; i++)
	{
		if(i > ms || i < 0)
		{
			puts("Yanlis Index");
			s[0] = '\0';
			return;
		}
		for(j = i_x[i] + 1; s[j]; ++j)
		s[j - 1] = s[j];
		s[j - 1]= '\0';
		ms--;
	}
	
}

int main(void)
{
	int size1, size2;
	char s[1024];
	puts("Setri daxil edin:");
	gets(s);
	size2 = len(s);
	puts("Silinecek element sayini daxil edin:");
	scanf("%d", &size1);
	int a[size1];
	puts("Koordinatlari daxil edin:");
	for(int i = 0; i < size1; i++)
	scanf("%d", &a[i]);
	
	del(s, a, size1, size2);
	printf("Silinmeden sonraki setr: %s", s);
	
	
	return 0;
}
