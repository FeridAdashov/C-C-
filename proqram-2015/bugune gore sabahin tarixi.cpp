#include<iostream>
using namespace std;
int main(){int g,a,i;
	cout<<"Bugunun tarixini girin(g/a/i): ";
	cin>>g>>a>>i;
	if(a==4 || a==6 || a==8 || a==11){
		if(g+1<=30) ++g;
		else{
			g=1;  ++a;
		}
	}
	else if(a!=2){
		if(g+1<=31) ++g;
		else if(a+1<=12){
			g=1;  ++a;
		}
		else{
			g=1;  a=1; ++i;
		}
	}
	else if(i%4==0){
		if(g+1<=29) ++g;
		else {
			g=1;  ++a;
		}
	}
	else{
		if(g+1<=28) ++g;
		else {
			g=1;  ++a;
		}
} cout<<"Sabahin tarixi(g/a/i): "<<g<<"  "<<a<<"  "<<i;
	return 0;
}
