//Daxil edilen melumatin fayla yazilmasi
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	string melumat;
	
	ofstream yaz("D:\\myfile.text");
	cout << "Adinizi daxil edin: ";
	cin >> melumat;
	yaz << melumat << ' ';
	
	cout << "\nSoyAdinizi daxil edin: ";
	cin >> melumat;
	yaz << melumat;
	
	cout << "\nAd ve Soyadiniz 'myfile' faylina yazildi \nIslem Basarili.\n";
	return 0;
}
