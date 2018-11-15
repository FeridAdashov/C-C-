//Verilmis metindeki her setrde olan soz sayi

#include <iostream>
#include <conio.h>
#include <cstring>
using namespace std;

int main()
{
	char *metn[500], yoxla = '1';
	int i = 0, s = 1;
	
	cout << "Metni daxil edin(her yeni setre kecdikde "
	<< "daxil etme bitdikde 0,davam etmek ucun 1 daxil edin):\n";
	
	while(yoxla != '0')
	{
		metn[i] = new char [500];
		gets( metn[i] );
		yoxla = getch();
		i++;
	}
	
	for(int j = 0; j<i; j++)
	{
		for(int k = 0; k<strlen(metn[j]); k++)
			if(metn[j][k] == ' ')
			s++;
			
			cout << j+1 << " -ci setrde " << s <<" soz var.\n";
			s=1;
	}
	return 0;
}
