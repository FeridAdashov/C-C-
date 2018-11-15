//Setrde her hansi herfin nece dene oldugunu tapmq

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char *setr, herf;
	int i = 0, s = 0;
	cout << "Setri daxil edin: ";
	setr=new char[200];
	gets(setr);
	
	cout << "Hansi herfi axtaraq? ";
	cin>>herf;
	while(i<strlen(setr))
	{
		if(setr[i] == herf)
		s++;
		i++;
	}
	cout << "Setrde " << herf <<" herfinin sayi " << s <<" -dir.\n";
	
	return 0;
}
