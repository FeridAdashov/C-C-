//Verilmis setrden verilmis uzunluqlu sozleri silmek

#include<iostream>
#include<cstring>
using namespace std;

int main(){
	char a[100] = {'\0'};
	int l, l1, i, j, n, say =  0;
	cout << "Verilmis setrden verilmis uzunluqlu sozu silmek...\nsetri daxil et:\n";
	gets(a);
	cout << "hansi uzunluqlu sozler silinecek: ";
	cin >> l1;
	
	l = strlen(a);
		
	for(i = 0; i < l; i++)
	{	j = 0;
	
		while( a[i] != ' ' && a[i] != '\0'){
			i++;
			j++;
		}
	
		if(l1 == j)
		{
			for(j = i + 1; j < 100; j++)
			a[j- l1 - 1] = a[j];
			
			if(i - l1 >= 0)
			i -= (l1 + 1);
			
			else i = 0;
			say++;
		}
	}
	cout << "Silinmeden sonraki setr:\n\n";
	for(i = 0; i < l-(l1 + 1) * say; i++)
	cout << a[i];
	
	return 0;
}
