#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	string kod="12345",admin="ferid",ad="",sifre="";
	char a;
	cout<<"Ad: ";
	cin>>ad;
	while(a!=13)
	{
		a=getch();
		sifre+=a;
	}
	if(kod==sifre && admin==ad)
	cout<<"TRUE";
	else cout<<"WRONG";
	
	return 0;
}
