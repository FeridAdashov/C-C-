//Verilmis setrden her hansi sozu silmek

#include<iostream>
#include<cstring>
using namespace std;

int main(){
	char a[100], b[20];
	int l, l1, i, j, n, say = 0;
	cout << "Verilmis setrden her hansi sozu silmek...\nsetri daxil et:\n";
	gets(a);
	cout << "silinecek sozu daxil et: ";
	gets(b);
	
	l = strlen(a);
	l1 = strlen(b);
	
	
	for(i = 0; i < l; i++)
	{	j = 0;
		while(a[i] == b[j] && a[i] != ' ' && i < l && j < l1){
			i++;
			j++;
		}
	
		if(l1 == j && (a[i] == ' ' || a[i] == '\0'))
		{
			for(j = i + 1; j < 100; j++)
			a[j- l1 - 1] = a[j];
			if(i - l1 >= 0)
			i -= (l1 + 1);
			else i = 0;
			say++;
		}
	}
	cout << "Silinmeden sonraki setr: \n";
	
	for(i = 0; i < l-(l1 + 1) * say; i++)
	cout << a[i];
	
	return 0;
}
