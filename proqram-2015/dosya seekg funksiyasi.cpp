#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
	ofstream dosya1("fiko.text");
	dosya1<<"Qax Rayonu Qum kendi";
	dosya1.close();
	ifstream dosya("fiko.text");
	if(!dosya){
		cerr<<"Dosya acilmadi...\n";
		exit(1);
	}
	
	string isim;
	dosya.seekg(0);
	getline(dosya,isim);
	cout<<isim<<endl;
	dosya.seekg(4);
	getline(dosya,isim);
	cout<<isim<<endl;
	dosya.close();
	ifstream dosya2("fiko.text");
	dosya2.seekg(0, ios::end);//Normalda dosyadai bayt sayini vermeli idi :-)
	cout<<dosya.tellg();
	return 0;
}
