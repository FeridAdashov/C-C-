#include<iostream>
using namespace std;

class calisan{
		string ad,soyad;
	public:
		calisan(string a,string s){
			ad=a;  soyad=s;
		}
		void goster(){
			cout<<"Ad: "<<ad<<endl;
			cout<<"SoyAd: "<<soyad<<endl;
		}
};

class isci:private calisan{
	int maas;
	public:
		isci(string a,string s,int m):calisan(a,s){
			maas=m;
		}
		void mgoster(){
			goster();
			cout<<"Maas: "<<maas<<endl;
		}
};
int main(){
	isci isci1("Ferid","Adasov",780);
	
	isci1.mgoster();
	return 0;
}
