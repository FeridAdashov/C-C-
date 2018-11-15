#include<iostream>
#include<fstream>
#include<string>

using namespace std;
int main(){
	
	ofstream dosya("fiko.text",ios::app);//fiko adinda fayl acilir(melumatin yazilmasi ucun),dosya sadece proqram daxilindeki deyiskendir demey olar
	if(!dosya){                          //eger problem olmasa bu blok isleyecek
		cerr<<"Dosya acilmadi!!!"<<endl;
		exit(1);
	}
	dosya<<"Sevil ve Sevinc bacilari"<<endl;//fiko adli dosyaya bu text yazilir
	dosya.close();                           // dosya baglanir
	ifstream dosya1("fiko.text");            //yeniden melumatin oxunmasi ucun acilir 
	if(!dosya){
		cerr<<"Dosya acilmadi!!!"<<endl;
		exit(1);
	}
	while(dosya1){
		string a;
		getline(dosya1,a);//dosyanin her setri a-ya menimsedilir
		cout<<a<<endl;    // a cap olunur
	}
	return 0;
}
