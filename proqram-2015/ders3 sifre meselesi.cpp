#include<iostream>
using namespace std;
int main(){
	int a,sifre=500;
	cout<<"Sifreni girin: ";
	cin>>a;
	if(a==sifre)
	cout<<"Xosgeldiniz...";
	else{
		cout<<"Yanlis sifre\nBirdaha yoxlayin: ";
		cin>>a;
		if(a==sifre)
	cout<<"Xosgeldiniz...";
	else{
		cout<<"Yanlis sifre\nBirdaha yoxlayin: ";
		cin>>a;
		if(a==sifre)
	cout<<"Xosgeldiniz...";
	else cout<<"BLOK";
	}
	}
	return 0;
}
