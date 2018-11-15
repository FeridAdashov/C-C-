#include<iostream>
#include<fstream>
using namespace std;
int main(){
	int n,i=0,m;
	ofstream cap1("d:\\output.text");
	ifstream yaz1("d:\\input.text");
	yaz1>>m;
	cap1<<m;
	cout<<"Islem Basarili.\n";
	return 0;
}
