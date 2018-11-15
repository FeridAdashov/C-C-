#include<iostream>
using namespace std;

int main(){
	float a,b,c;
	cout<<"Birinci deyeri girin: "; cin>>b;
	cout<<"Ikinci deyeri girin: ";  cin>>c;
	try{
		if(c==0) throw 1;
		a=b/c;
		cout<<"Cavab: "<<a;
	}
	catch (int i){
		cout<<i<<" hata olusdu,0-a bolme yok...\n";
	}
	return 0;
}
