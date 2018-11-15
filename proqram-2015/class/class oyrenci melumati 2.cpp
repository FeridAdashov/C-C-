#include<iostream>
#include<cstring>
using namespace std;

class oyrenci{
	string ad,soyad,vesiqe_nom;
	public:
		void al();
		void goster();
};

void oyrenci::al(){
	cout<<"Oyrencinin adini gir: "; cin>>ad;
	cout<<"Oyrencinin soyadini gir: "; cin>>soyad;
	cout<<"Oyrencinin vesiqe_nom gir: "; cin>>vesiqe_nom;
}

void oyrenci::goster(){
	cout<<"Oyrencinin adi: "<<ad<<"\nSoyadi: "<<soyad<<"\nVesiqe_nom: "<<vesiqe_nom;
}

int main(){
	oyrenci oyrenci1;
	oyrenci1.al();
	oyrenci1.goster();
	return 0;
}
