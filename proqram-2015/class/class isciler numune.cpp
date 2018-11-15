#include<iostream>
using namespace std;

class isci{
	public:
	string ad,soyad;
	int maas;
	void gir(){
		cout<<"\nIsci haqqinda melumat:\nAd: "; cin>>ad;
		cout<<"\nSoyAd: "; cin>>soyad;
		cout<<"\nMaas: "; cin>>maas;
	}
	void ver(){
		cout<<endl<<ad<<"  "<<soyad<<"  "<<maas<<endl;
	}
};

int main(){
	isci *p[20],*t;
	int i=0,k,j;
	do{
		p[i]=new isci;
		p[i]->gir();
		i++;
		cout<<"\nYeni iscivarmi(varsa 1,yoxsa 0 daxil edin): ";
		cin>>k;
	}while(k!=0);
	for(k=0;k<i;k++)
	for(j=0;j<i-1;j++)
		if(p[j]->maas<p[j+1]->maas){
			t=p[j];
			p[j]=p[j+1];
			p[j+1]=t;
		}
	cout<<"\nIscilerin maasin azalmasina gore yigimi:\n";
	for(k=0;k<i;k++)
	p[k]->ver();
	return 0;
}


