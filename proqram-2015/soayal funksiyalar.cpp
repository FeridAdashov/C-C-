#include<iostream>
using namespace std;
/*int mutleq_qiymet(int a){
		if(a<0)
	return -a;
	else return a;
}

float mutleq_qiymet(float a){
		if(a<0)
	return -a;
	else return a;
}*/
//BU IKI FUNKSIYANI BIR FUNKSIYA ILE EVEZ EDEK
template <class tip> void mutleq_qiymet(tip a){
	if(a<0)
	a=-a;
	cout<<"Mutlleq qiymet: "<<a<<endl;
}

int main(){
	int x;
	float y;
	cout<<"deyer girin: "; cin>>x;
	mutleq_qiymet(x);
	cout<<"deyer girin: "; cin>>y;
	mutleq_qiymet(y);
	return 0;
}
