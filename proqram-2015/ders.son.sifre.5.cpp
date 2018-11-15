#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	string admin="ferid",sifre="1234",kod="",ad="";
	char a='a',b;
	cout<<"Ad: ";
	cin>>ad;
	cout<<"SIFRE: ";
	while(a!=13)
	{
		a=getch();
		if(a!=13){
		kod+=a;
		cout<<"*";
	}
	}
	if(kod==sifre && admin==ad) cout<<"\nTRUE";
	else cout<<"\nFALSE";
	return 0;
}
