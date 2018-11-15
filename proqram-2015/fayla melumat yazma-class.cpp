#include<iomanip>
#include<iostream>
#include<fstream>
using namespace std;

class oyrenci{
	public:
		string ad, soyad, nomre, kurs;
		
		void bilgigir()
		{
			cout << setw(15) << "Ad: ";  	cin >> ad;  
			cout << setw(15) << "Soyad: ";  cin >> soyad;  
			cout << setw(15) << "Nomre: ";  cin >> nomre;  
			cout << setw(15) << "Kurs: ";   cin >> kurs;  
		}
		
		void bilgioxu()
		{
			cout << setw(15) << "Ad: " << ad << endl;  
			cout << setw(15) << "Soyad: " << soyad << endl;  
			cout << setw(15) << "Nomre: " << nomre << endl;  
			cout << setw(15) << "Kurs: " << kurs << endl;  
		}
};

class uni{
	public:
	oyrenci muveqqeti;
	int oyrenci_sayisi;
	
	void oyrenci_elave_et()
	{   fstream uni_qeyd;
		uni_qeyd.open("Universitet qeyd defteri.txt", ios::in | ios::out | ios::app);
		uni_qeyd.setf(ios::left);
		muveqqeti.bilgigir();
		uni_qeyd << setw(15) << muveqqeti.ad;
		uni_qeyd << setw(15) << muveqqeti.soyad;
		uni_qeyd << setw(15) << muveqqeti.nomre;
		uni_qeyd << setw(15) << muveqqeti.kurs  << endl; 
		
		uni_qeyd.close();
	}
	
	void oyrenci_tap(string nomrem)
	{		
		fstream uni_qeyd;
		uni_qeyd.open("Universitet qeyd defteri.txt", ios::in | ios::out | ios::app);
		oyrenci kecici;
			
		while(true)
		{
			
			uni_qeyd >> kecici.ad;
			uni_qeyd >> kecici.soyad;
			uni_qeyd >> kecici.nomre;
			uni_qeyd >> kecici.kurs;
			if(kecici.nomre == nomrem && uni_qeyd)
			kecici.bilgioxu();
			if(!uni_qeyd) break;
		}
		uni_qeyd.close();
	}
	
};


int main()
{
	uni BDU;
	int say;
	string nomre;
	cout << "Qeyd olunacaq oyrenci sayisi: "; cin >> say;
	for(int i=0; i<say; i++)
	BDU.oyrenci_elave_et();
	cout << "\n\nQeydiyat tamamlandi...\n\nAxtardiginiz oyrencinin nomresini daxil edin: ";
	cin >> nomre;
	BDU.oyrenci_tap(nomre);
	return 0;
}
