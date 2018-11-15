#include<iostream>
#include<fstream>
using namespace std;
int main(){
	int n,i=0;
	ifstream yaz1("d:\\deneme.text");
	yaz1>>n;
	string a[n];
	while(yaz1 && i<n){
	yaz1>>a[i];
	i++;	
	}
	for(int i=0;i<n;i++)
	cout<<a[i]<<"\n";
	cout<<"Islem Basarili.\n";
	return 0;
}
