//Metnde verilmis herfle baslayan soz sayi

#include <iostream>
#include <conio.h>
#include <cstring>
using namespace std;

int main()
{
	char *metn[500], yoxla = '1', herf;
	int k = 0, say = 0;
	
	cout << "Metni daxil edin(her yeni setre kecdikde "
	<< "daxil etme bitdikde 0,davam etmek ucun 1 daxil edin):\n";
	
	while(yoxla != '0')
	{
		metn[k] = new char [500];
		gets( metn[k] );
		yoxla = getch();
		k++;
	}
	
	cout << "\nHerfi daxil et: ";
	cin >> herf;
	
	for(int j = 0; j < k; j++)
	for(int i = 0; i < strlen(metn[j]); i++)	
	if(metn[j][i] == herf && (i == 0 || metn[j][i - 1] == ' ')) say++;
	
	cout << "\nBu metnde " << herf << " herfi ile " << say << " sayda soz baslayir";
		
	return 0;
}
