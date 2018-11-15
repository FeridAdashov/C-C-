//Verilmis metindeki polindrom sozler

#include <iostream>
#include <conio.h>
#include <cstring>
using namespace std;

int main()
{
	char *metn[500], yoxla = '1';
	int k, i, j, r, n, setrsay = 0;
	
	cout << "Metni daxil edin(her yeni setre kecdikde "
	<< "daxil etme bitdikde 0,davam etmek ucun 1 daxil edin):\n";
	
		while(yoxla != '0')
		{
			metn[setrsay] = new char [100];
			gets( metn[setrsay] );
			yoxla = getch();
			setrsay++;
		}
		
		for( r = 0; r < setrsay; r++)	
		for( i = 0; i < strlen(metn[r]); i++)
		{
			j = i;
			
			while(metn[r][i] != ' ' && i != strlen(metn[r]))
				i++;
				
			n = i - 1;
			
			if(metn[r][j] != ' ')
			for(k = j; k < j + (i-j) / 2; k++)
			{
				if(metn[r][k] != metn[r][n])
				break;
				n--;
			}
			
			if( k == j + (i - j) / 2)
			for(k = j; k <= i; k++)
			cout << metn[r][k];	
		}

	return 0;
}
