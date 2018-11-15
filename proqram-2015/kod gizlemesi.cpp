#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	char c=' ';
	string ad,pas="";
	
	cout<<"Ad: "; cin>>ad;
	cout<<"Kod: ";
	while(c!=13){
		c=getch();
		if(c!=13){
			pas+=c;
			cout<<"*";
		}
	}
	 if(ad=="ferid" && pas=="1234")
		 cout<<"\nTRUE...";
		 else cout<<"\nWRONG...";
	return 0;
}
