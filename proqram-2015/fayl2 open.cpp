#include<iostream>
#include<string>
#include<fstream>

using namespace std;

int main(){
ofstream dosya("oyrenci.text");
dosya<<"Adasov Ferid"<<endl;
dosya.close();
dosya.open("oyrenci.text",ios::app);
dosya<<"Muradov Cabbar"<<endl;
	dosya.close();
	ifstream dosya1("oyrenci.text");
	dosya1.seekg(3); //3-cu bayta getmeyi gosterir ve oxunma ordan baslanir
	while(dosya1){
		string a;
		getline(dosya1,a);
		cout<<a<<endl;
	}
return 0;	
}
