//metn faylinda olan reqemleri ve sayini tapmaq

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	int say = 0;
	char a;
	
	ifstream yaz("D:\\myfile.text");
	
	cout << "Faylda olan  reqemler: ";
	
	while(1){
	
	yaz >> a;
	if(a >= '0' && a <= '9' && yaz)
	{
		cout << a << ' ';
		say++;
	}
	if(!yaz) break;
	}
	
	cout<<"\nReqem sayi: " << say << "\nIslem Basarili.\n";
	return 0;
}
