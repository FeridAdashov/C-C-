#include <stdio.h>
#include <string.h>
#include <malloc.h>
using namespace std;
int main(){
	char *a = (char*)malloc(100);
	int l, i, j, k, n, say = 0;
	
	printf("setrde polindrom sozler\nsetri daxil et:\n");
	gets(a);
	printf("Bu sozler: ");
	
	l = strlen(a);
	for(i = 0; i < l; i++){
		j = i;
		
		while(a[i] != ' ' && i != l) i++;  
		
		n = i - 1;
		
		if(a[j] != ' ')
		for(k = j; k < j + (i - j) / 2; k++)
		{
			if(a[k] != a[n])
			break;
			n--;
		}
		
		if(k == j + (i - j) / 2 && a[k] != ' ')
		{
			for(k = j; k < i + 1; k++) printf("%c", a[k]);
			say++;
		}
		
	}
	printf("\nsay: %d", say);
	return 0;
}
