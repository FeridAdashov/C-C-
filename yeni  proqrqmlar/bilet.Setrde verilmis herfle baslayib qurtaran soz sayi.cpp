//Setrde verilmis herfle baslayib qurtaran soz sayi

#include <iostream>
#include <cstring>
using namespace std;

int main(){
	
	char setr[200], herf, *p, uzunluq;
	int say = 0;
	
	cout << "Setri daxil et: ";
	gets(setr);
	cout << "Herfi daxil et: ";
	cin >> herf;
	
	uzunluq = strlen(setr);
	p = setr;
	
	
	while(1)
	{	
		p = strchr(p,herf);
		if(p == NULL) break;
		
		if(p == & setr[0] || *(p - 1) == ' ')
		{
			while(*p != ' ' && p != & setr[uzunluq - 1]) p++;
			
			if(p != & setr[uzunluq - 1] && *(p - 1) == herf) say++;
			else if(*p == herf) say++;
		}
		
		if(p == & setr[uzunluq - 1]) break;
	
	}
	
	cout << herf << " herfi ile baslayib qurtaran  " << say << "  eded sozde var...";
		
	return 0;
}
