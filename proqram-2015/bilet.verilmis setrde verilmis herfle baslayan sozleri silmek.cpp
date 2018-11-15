//Setrden verilmis herfle baslayan sozleri silmek

#include<iostream>
#include<cstring>
using namespace std;

int main(){
	char setr[100] = {'\0'}, herf;
	int l, l1, i, j, n, say =  0, uzunluq = 0;
	cout << "Verilmis setrden her hansi sozu silmek...\nsetri daxil et:\n";
	gets(setr);
	cout << "hansi herfle baslayan sozler silinecek: ";
	cin >> herf;
	
	l = strlen(setr);
		
	for(i = 0; i < l; i++)
	{	l1 = 0;
	
		if(setr[i] == herf && (i == 0 || setr[i - 1] == ' '))
		{
			while(setr[i] != ' ' && i < l)
			{
				i++;
				l1++;
			}
			for(j = i + 1; j < 100; j++)
			setr[j- l1 - 1] = setr[j];
			
			if(i - l1 >= 0)
			i -= (l1 + 1);
			else i = 0;
			
			uzunluq += (l1+1);
		}
		
	}
	cout << "Silinmeden sonraki setr: \n";
	
	for(i = 0; i < l-uzunluq; i++)
	cout << setr[i];
	
	return 0;
}
