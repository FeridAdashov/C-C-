//Setrde verilmis herfle baslayan soz sayi

#include <iostream>
#include <cstring>
using namespace std;

int main(){
	
	char setr[200], herf;
	int say = 0;
	
	cout << "Setri daxil et: ";
	gets(setr);
	cout << "Herfi daxil et: ";
	cin >> herf;
	
	for(int i = 0; i < strlen(setr); i++)
	if(setr[i] == herf && i == 0) say++;
	else if(setr[i] == herf && setr[i - 1] == ' ') say++;
	
	cout << herf << " herfi ile baslayan " << say << "  eded sozde var...";
		
	return 0;
}
