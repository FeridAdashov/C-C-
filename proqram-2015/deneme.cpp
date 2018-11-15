#include<iostream>
using namespace std;
int main(){
	string admin="ferid",parol="1234",ad,kod;
	cout<<"Ad: "; cin>>ad;
	cout<<"Parol: "; cin>>kod;
	if(ad==admin && kod==parol)
	cout<<"\nTRUE";
	else cout<<"\nWRONG";
	return 0;
}
