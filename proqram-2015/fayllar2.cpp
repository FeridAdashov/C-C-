#include<iostream>
#include<fstream>
using namespace std;
int main(){
	int n,i=0,m;
	ofstream cap("d:\\output.text");
	ifstream yaz("d:\\input.text");
	yaz>>n;
	yaz>>m;
	cap<<"Bu cem: "<<m+n;
	cout<<"Islem Basarili.\n";
	return 0;
}
