#include<iostream>
#include<cmath>
using namespace std;

class kv_tenlik{
	float a,b,c,d,cavab1,cavab2;
	public:
		void deger_al();
		void goster();
		void cavab();	
};

void kv_tenlik::deger_al(){
	cout<<"\nBirinci emsali gir: "; cin>>a;
	cout<<"Ikinci emsali gir: "; cin>>b;
	cout<<"Ucuncu emsali gir: "; cin>>c;
	d=b*b-4*a*c;
}

void kv_tenlik::cavab(){
	if(d==0) cavab1=-b/(2*a);
	if(d>0){
		cavab1=(-b+sqrt(d))/(2*a);
		cavab1=(-b-sqrt(d))/(2*a);
	}
}

void kv_tenlik::goster(){
	if(d<0) cout<<"Tenliyin heqiqi koku yoxdur...\n----------------------------------\n";
	if(d==0)cout<<"Tenliyin yegane koku var: "<<cavab1<<"\n---------------------------------\n";
	if(d>0) cout<<"Tenliyin iki koku var\n1."<<cavab1<<"\n2."<<cavab2<<"\n----------------------------------\n";
}
int main(){
	kv_tenlik a;
	int i,n;
	cout<<"tenlik sayini gir: "; cin>>n;
	for(i=0;i<n;i++){
		cout<<i+1<<". ";
	a.deger_al();
	a.cavab();
	a.goster();	
}
	return 0;
}
