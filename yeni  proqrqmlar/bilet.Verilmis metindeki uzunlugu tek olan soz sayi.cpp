//Verilmis metindeki uzunlugu tek olan soz sayi

#include <iostream>
#include <conio.h>
#include <cstring>
using namespace std;

int main()
{
	char *metn[500], yoxla = '1';
	int k = 0, s1 = 0, s2;
	
	cout << "Metni daxil edin(her yeni setre kecdikde "
	<< "daxil etme bitdikde 0,davam etmek ucun 1 daxil edin):\n";
	
	while(yoxla != '0')
	{
		metn[k] = new char [500];
		gets( metn[k] );
		yoxla = getch();
		k++;
	}
	
		for(int j = 0; j < k; j++)
		for(int i = 0; i < strlen(metn[j]); i++)	
		 {
		 	s2 = 0;
		 	while(metn[j][i] != ' ' && i < strlen(metn[j]))
		 	{
		 		i++;
		 		s2++;
			}
			if(s2 % 2 == 1)
			  s1++;
		 }
	cout << "Metndeki uzunlugu tek olan soz sayi: " << s1;
	
	return 0;
}
