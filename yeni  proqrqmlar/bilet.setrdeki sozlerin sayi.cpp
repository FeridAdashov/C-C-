//Verilen setrdeki sozlerin sayi

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char setr[200];
	int say = 1;
	cout << "Setri daxil et: ";
	
	gets(setr);
	
	for(int i = 0; i < strlen(setr); i++)
		if(setr[i] == ' ')
			say++;
			
	cout << "Setrdeki soz sayi: " << say <<" dir.\n";
	
	return 0;
}
