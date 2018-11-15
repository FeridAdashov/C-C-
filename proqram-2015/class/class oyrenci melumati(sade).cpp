#include<iostream>
#include<cstring>
using namespace std;

class oyrenci{
	char ad[20],soyad[20],vesiqe_nom[15];
	public:
		void al(char [],char [],char []);
		void goster();
};

void oyrenci::al(char a[],char s[],char v_n[]){
	strcpy(ad,a);
	strcpy(soyad,s);
    strcpy(vesiqe_nom,v_n);
}

void oyrenci::goster(){
	cout<<"Oyrencinin adi: "<<ad<<"\nSoyadi: "<<soyad<<"\nVesiqe_nom: "<<vesiqe_nom;
}

int main(){
	oyrenci oyrenci1;
	oyrenci1.al("FERID","ADASOV","13243317");
	oyrenci1.goster();
	return 0;
}
