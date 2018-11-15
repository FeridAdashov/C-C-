#include<iostream>
using namespace std;

class sifre{
		string ad,kod;
	public:
		sifre(){};
		sifre(string a,string b){
			ad=a;  kod=b;
		}
		bool operator==(sifre a){
			if(a.ad==ad && a.kod==kod)
			return 1;
			else return 0;
		}
		void gir(sifre &girilen){
				cout<<"Ad: ";    cin>>girilen.ad;
				cout<<"Sifre: "; cin>>girilen.kod;
		}
};

int main(){
	sifre esl("Ferid","Traktor"),yeni_sifre;
	yeni_sifre.gir(yeni_sifre);
	if(esl==yeni_sifre) cout<<"Dogru sifre...\n";
	else cout<<"Yanlis sifre...\n";
	return 0;
}
