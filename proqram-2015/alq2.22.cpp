//metn faylinda olan cut reqemleri ve sayini tapmaq

#include<iostream>
#include<cstdlib>
#include<fstream>
using namespace std;

int main()
{
	char a[1], yoxla;
	int cevir, say = 0;
	ifstream yaz("D:\\myfile.text");
	
	cout << "Fayilda olan cut reqemler ve sayi: ";
	
	while(1){
	yaz >> a[0];
	yoxla = a[0];
	
	cevir = atoi(a);
	
	if(cevir %2 == 0 && yoxla >= '0' && yoxla <= '9' && yaz)
	{
		cout << cevir << ' ';
		say++;
	}
    	if(!yaz) break;	
	}
	
	cout<<"\nReqem sayi: " << say << "\nIslem Basarili.\n";
	return 0;
}
