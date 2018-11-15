//Verilmis setrde verilmis sozun nece defe istirak etdiyini tapmaq

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char setr[200], soz[20], *p;
	int s = 0, k1, k2;
	p = setr;
	cout << "Setri daxil et:\n";
	gets(setr);
	cout << "Axtarilan sozu daxil et: ";
	gets(soz);
	k1 = strlen(soz);
	k2 = strlen(setr);
	for(;; p += k1){
		p = strstr(p,soz);
		if( !p ) break;
		if((*(p + k1) == ' ' || p + k1 == &setr[k2]) && (*(p - 1) == ' ' || p == &setr[0]))
		 s++;		
	}
	cout << soz <<" sozu bu setrde " << s << " ededdir.\n";	
	
	return 0;
}
