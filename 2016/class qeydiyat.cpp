#include <stdio.h>
#include <fstream>
#include <iostream>
using namespace std;

class insan{
	private:
		char ad[20], soyad[20];
	public:
		void bilgi_al()
		{
			printf("AD: ");
			scanf("%s", ad);
			printf("SOYAD: ");
			scanf("%s", soyad);
		}
		void bilgi_qeyd()
		{
			static int say = 1;
			ofstream fayl("C:\\Users\\Ferid\\Documents\\c++\\qeyd.txt", ios::app);
			fayl << ad << " " << soyad << "\n";
			++say;
		}
};

main()
{
	insan insan1[2];
	insan1[0].bilgi_al();
	insan1[0].bilgi_qeyd();	
	insan1[1].bilgi_al();
	insan1[1].bilgi_qeyd();	
	getchar();
	return 0;
}
